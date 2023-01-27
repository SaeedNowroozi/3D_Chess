import QtQuick
import QtQuick3D
Node {
    id: rock_obj
    Model {
        id: bishop_Cylinder
        source: "meshes/bishop_Cylinder.mesh"

        DefaultMaterial {
            id: none_material
            diffuseColor: "#ffcccccc"
        }
        materials: [
            none_material
        ]
    }
}
