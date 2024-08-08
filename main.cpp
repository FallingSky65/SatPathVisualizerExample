#include "SatPathVisualizer/SatPathVisualizer.hpp"

int main() {
    Visualizer visualizer;

    int i = 0;
    visualizer.beginRender(540, 540, 60, "resources/EarthTexClouds.png", "resources/polsir_samplescan_day00.hdf5", 2, "renders/render.mp4");
    int dim0 = visualizer.satellites[0].dims[0];
    int dim1 = visualizer.satellites[0].dims[1];
    while (!visualizer.window.ShouldClose() && i < dim0) {
        visualizer.updateSatellites((i+1)*dim1-1);
        visualizer.updateCamera(0, i);
        visualizer.drawToCanvas(i);
        visualizer.drawCanvasToScreen();
        visualizer.saveFrame();
        i += 15;
    }
    visualizer.endRender();

//    visualizer.render(540, 540, 60, "renders/render.mp4", "resources/EarthTexClouds.png", "resources/polsir_samplescan_day00.hdf5", "resources/PolSIR_small.png", 0.15, 0, true);

    return 0;
}
