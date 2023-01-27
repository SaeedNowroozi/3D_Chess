import QtQuick
import QtQuick3D
Node {
    id: king_obj
    Model {
        id: king_Cylinder
        source: "meshes/king_Cylinder.mesh"

        DefaultMaterial {
            id: none_material
            diffuseColor: "#ffcccccc"
        }
        materials: [
            none_material
        ]
    }
}
