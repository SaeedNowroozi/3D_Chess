import QtQuick
import QtQuick3D
Node {
    id: chess_Board_obj
    Model {
        id: chess_Board_Cube
        source: "meshes/chess_Board_Cube.mesh"

        DefaultMaterial {
            id: white_material
        }

        DefaultMaterial {
            id: black_material
            diffuseColor: "#ff000000"
        }
        materials: [
            white_material,
            black_material
        ]
    }
}
