import QtQuick
import QtQuick3D
Node {
    id: queen_obj
    Model {
        id: queen_Cylinder
        source: "meshes/queen_Cylinder.mesh"

        DefaultMaterial {
            id: none_material
            diffuseColor: "#ffcccccc"
        }
        materials: [
            none_material
        ]
    }
}
