import QtQuick
import QtQuick3D
Node {
    id: pown_obj
    Model {
        id: pawn_Cylinder
        source: "meshes/pawn_Cylinder.mesh"

        DefaultMaterial {
            id: none_material
            diffuseColor: "#ffcccccc"
        }
        materials: [
            none_material
        ]
    }
}
