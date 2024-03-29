/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@class MISSING_TYPE;

typedef void (^CDUnknownBlockType)(void);

struct Arc4State {
    unsigned int _field1;
    unsigned int _field2;
    char *_field3;
};

struct CDT;

struct CGSize {
    double _field1;
    double _field2;
};

struct Clipper {
    CDUnknownFunctionPointerType *_field1;
    struct vector<ClipperLib::OutRec *, std::__1::allocator<ClipperLib::OutRec *>> _field2;
    struct vector<ClipperLib::Join *, std::__1::allocator<ClipperLib::Join *>> _field3;
    struct vector<ClipperLib::Join *, std::__1::allocator<ClipperLib::Join *>> _field4;
    struct vector<ClipperLib::IntersectNode *, std::__1::allocator<ClipperLib::IntersectNode *>> _field5;
    int _field6;
    struct priority_queue<long long, std::__1::vector<long long, std::__1::allocator<long long>>, std::__1::less<long long>> _field7;
    struct TEdge *_field8;
    struct TEdge *_field9;
    _Bool _field10;
    int _field11;
    int _field12;
    _Bool _field13;
    _Bool _field14;
    _Bool _field15;
    CDUnknownFunctionPointerType *_field16;
    struct __wrap_iter<ClipperLib::LocalMinimum *> {
        struct LocalMinimum *_field1;
    } _field17;
    struct vector<ClipperLib::LocalMinimum, std::__1::allocator<ClipperLib::LocalMinimum>> _field18;
    _Bool _field19;
    struct vector<ClipperLib::TEdge *, std::__1::allocator<ClipperLib::TEdge *>> _field20;
    _Bool _field21;
    _Bool _field22;
};

struct GKCDecisionNode {
    struct vector<std::__1::pair<id, GKCDecisionNode *>, std::__1::allocator<std::__1::pair<id, GKCDecisionNode *>>> _field1;
    struct GKCDecisionNode *_field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
};

struct GKCDecisionTree {
    struct GKCDecisionNode *_field1;
    struct GKCDecisionNode *_field2;
};

struct GKCGraph {
    CDUnknownFunctionPointerType *_field1;
    struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *>> _field2;
    id _field3;
};

struct GKCGraphNode {
    CDUnknownFunctionPointerType *_field1;
    struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *>> _field2;
    struct GKCPolygonObstacle *_field3;
    struct GKCPolygonObstacle *_field4;
    int _field5;
    id _field6;
};

struct GKCGraphNode2D {
    CDUnknownFunctionPointerType *_field1;
    struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *>> _field2;
    struct GKCPolygonObstacle *_field3;
    struct GKCPolygonObstacle *_field4;
    int _field5;
    id _field6;
    id _field7;
};

struct GKCGraphNode3D {
    CDUnknownFunctionPointerType *_field1;
    struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *>> _field2;
    struct GKCPolygonObstacle *_field3;
    struct GKCPolygonObstacle *_field4;
    int _field5;
    id _field6;
    id _field7;
};

struct GKCGridGraphNode {
    CDUnknownFunctionPointerType *_field1;
    struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *>> _field2;
    struct GKCPolygonObstacle *_field3;
    struct GKCPolygonObstacle *_field4;
    int _field5;
    id _field6;
    id _field7;
};

struct GKCHybridStrategist {
    struct vector<id<GKGameModel>, std::__1::allocator<id<GKGameModel>>> _field1;
    struct vector<std::__1::vector<long, std::__1::allocator<long>>, std::__1::allocator<std::__1::vector<long, std::__1::allocator<long>>>> _field2;
    id _field3;
    id _field4;
    id _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    _Bool _field10;
    _Bool _field11;
};

struct GKCMeshGraph {
    CDUnknownFunctionPointerType *_field1;
    struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *>> _field2;
    id _field3;
    struct Clipper _field4;
    struct vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>>> _field5;
    struct vector<GKCPolygonObstacle *, std::__1::allocator<GKCPolygonObstacle *>> _field6;
    struct CDT *_field7;
    struct map<p2t::Triangle *, GKTriangleGraphNodes, std::__1::less<p2t::Triangle *>, std::__1::allocator<std::__1::pair<p2t::Triangle *const, GKTriangleGraphNodes>>> _field8;
    struct vector<GKCPolygonObstacle *, std::__1::allocator<GKCPolygonObstacle *>> _field9;
    struct vector<GKCPolygonObstacle *, std::__1::allocator<GKCPolygonObstacle *>> _field10;
    struct vector<GKPolygonObstacle *, std::__1::allocator<GKPolygonObstacle *>> _field11;
    struct map<GKCPolygonObstacle *, GKCPolygonObstacle *, std::__1::less<GKCPolygonObstacle *>, std::__1::allocator<std::__1::pair<GKCPolygonObstacle *const, GKCPolygonObstacle *>>> _field12;
    struct map<GKCPolygonObstacle *, GKCPolygonObstacle *, std::__1::less<GKCPolygonObstacle *>, std::__1::allocator<std::__1::pair<GKCPolygonObstacle *const, GKCPolygonObstacle *>>> _field13;
    struct unordered_map<p2t::Point *, GKCGraphNode2D *, std::__1::hash<p2t::Point *>, std::__1::equal_to<p2t::Point *>, std::__1::allocator<std::__1::pair<p2t::Point *const, GKCGraphNode2D *>>> _field14;
    struct unordered_map<p2t::Triangle *, GKCGraphNode2D *, std::__1::hash<p2t::Triangle *>, std::__1::equal_to<p2t::Triangle *>, std::__1::allocator<std::__1::pair<p2t::Triangle *const, GKCGraphNode2D *>>> _field15;
    struct unordered_map<p2t::Edge *, GKCGraphNode2D *, std::__1::hash<p2t::Edge *>, std::__1::equal_to<p2t::Edge *>, std::__1::allocator<std::__1::pair<p2t::Edge *const, GKCGraphNode2D *>>> _field16;
    struct unordered_map<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>, std::__1::hash<p2t::Point *>, std::__1::equal_to<p2t::Point *>, std::__1::allocator<std::__1::pair<p2t::Point *const, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>>> _field17;
    _Bool _field18;
    _Bool _field19;
    _Bool _field20;
    id _field21;
    float _field22;
};

struct GKCMinmaxStrategist {
    struct vector<id<GKGameModel>, std::__1::allocator<id<GKGameModel>>> _field1;
    struct list<GKCMoveData, std::__1::allocator<GKCMoveData>> _field2;
    struct vector<std::__1::vector<long, std::__1::allocator<long>>, std::__1::allocator<std::__1::vector<long, std::__1::allocator<long>>>> _field3;
    id _field4;
    id _field5;
    id _field6;
    long long _field7;
    long long _field8;
    long long _field9;
    long long _field10;
    long long _field11;
    long long _field12;
    long long _field13;
    long long _field14;
    long long _field15;
    long long _field16;
    long long _field17;
    _Bool _field18;
    _Bool _field19;
    _Bool _field20;
};

struct GKCMonteCarloStrategist {
    id _field1;
    id _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    _Bool _field5;
    _Bool _field6;
};

struct GKCOctree<NSObject> {
    CDUnknownFunctionPointerType *_field1;
    struct GKCOctreeNode<NSObject> *_field2;
};

struct GKCOctreeNode<NSObject> {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    struct GKCOctreeNode<NSObject> *_field3;
    struct GKCOctreeNode<NSObject> *_field4[8];
    struct vector<NSObject *, std::__1::allocator<NSObject *>> _field5;
    id _field6;
};

struct GKCPolygonObstacle {
    CDUnknownFunctionPointerType *_field1;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _field2;
    struct PolygonObstacle _field3;
    id _field4;
};

struct GKCQuadTree<NSObject> {
    CDUnknownFunctionPointerType *_field1;
    struct GKCQuadTreeNode<NSObject> *_field2;
};

struct GKCQuadTreeNode<NSObject> {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    struct GKCQuadTreeNode<NSObject> *_field3;
    struct GKCQuadTreeNode<NSObject> *_field4[4];
    struct vector<NSObject *, std::__1::allocator<NSObject *>> _field5;
    id _field6;
};

struct GKCRTree<NSObject, float __attribute__((ext_vector_type(2)))> {
    struct GKCRTreeNode<NSObject, float __attribute__((ext_vector_type(2)))> _field1;
};

struct GKCRTreeNode<NSObject, float __attribute__((ext_vector_type(2)))> {
    unsigned int _field1;
    struct vector<GKCRTreeNode<NSObject, float __attribute__((ext_vector_type(2)))>, std::__1::allocator<GKCRTreeNode<NSObject, float __attribute__((ext_vector_type(2)))>>> _field2;
    id _field3;
};

struct GKQuad {
    MISSING_TYPE *quadMin__quadMax;
};

struct GKSimpleVehicle {
    CDUnknownFunctionPointerType *_vptr$AbstractLocalSpace;
    struct Vec3 _side;
    struct Vec3 _up;
    struct Vec3 _forward;
    struct Vec3 _position;
    float WanderSide;
    float WanderUp;
    struct Vec3 hisPositionAtNearestApproach;
    struct Vec3 ourPositionAtNearestApproach;
    _Bool gaudyPursuitAnnotation;
    int serialNumber;
    float _mass;
    float _radius;
    float _speed;
    float _maxForce;
    float _maxSpeed;
    float _curvature;
    struct Vec3 _lastForward;
    struct Vec3 _lastPosition;
    struct Vec3 _smoothedPosition;
    float _smoothedCurvature;
    struct Vec3 _smoothedAcceleration;
    _Bool m_rightHanded;
};

struct GKTriangle {
    MISSING_TYPE *_field1[3];
};

struct IntersectNode;

struct Join;

struct LocalMinimum;

struct Obstacle {
    CDUnknownFunctionPointerType *_field1;
};

struct OutRec;

struct PolygonObstacle {
    CDUnknownFunctionPointerType *_field1;
    struct vector<OpenSteer::Vec3, std::__1::allocator<OpenSteer::Vec3>> _field2;
};

struct PolylinePathway {
    CDUnknownFunctionPointerType *_vptr$Pathway;
    int pointCount;
    struct Vec3 *points;
    float radius;
    _Bool cyclic;
    float segmentLength;
    float segmentProjection;
    struct Vec3 local;
    struct Vec3 chosen;
    struct Vec3 segmentNormal;
    float *lengths;
    struct Vec3 *normals;
    float totalPathLength;
};

struct SphericalObstacle {
    CDUnknownFunctionPointerType *_vptr$Obstacle;
    float radius;
    struct Vec3 center;
    int _seenFrom;
};

struct TEdge;

struct Vec3 {
    float x;
    float y;
    float z;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Edge *, GKCGraphNode2D *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Edge *, GKCGraphNode2D *>, void *>*> *_field1;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, GKCGraphNode2D *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, GKCGraphNode2D *>, void *>*> *_field1;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>, void *>*> *_field1;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Triangle *, GKCGraphNode2D *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Triangle *, GKCGraphNode2D *>, void *>*> *_field1;
};

struct __list_node_base<GKCMoveData, void *> {
    struct __list_node_base<GKCMoveData, void *> *_field1;
    struct __list_node_base<GKCMoveData, void *> *_field2;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
};

struct float2 {
    float _field1;
    float _field2;
};

struct less<long long>;

struct list<GKCMoveData, std::__1::allocator<GKCMoveData>> {
    struct __list_node_base<GKCMoveData, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<GKCMoveData, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct map<GKCPolygonObstacle *, GKCPolygonObstacle *, std::__1::less<GKCPolygonObstacle *>, std::__1::allocator<std::__1::pair<GKCPolygonObstacle *const, GKCPolygonObstacle *>>> {
    struct __tree<std::__1::__value_type<GKCPolygonObstacle *, GKCPolygonObstacle *>, std::__1::__map_value_compare<GKCPolygonObstacle *, std::__1::__value_type<GKCPolygonObstacle *, GKCPolygonObstacle *>, std::__1::less<GKCPolygonObstacle *>, true>, std::__1::allocator<std::__1::__value_type<GKCPolygonObstacle *, GKCPolygonObstacle *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<GKCPolygonObstacle *, GKCPolygonObstacle *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<GKCPolygonObstacle *, std::__1::__value_type<GKCPolygonObstacle *, GKCPolygonObstacle *>, std::__1::less<GKCPolygonObstacle *>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<p2t::Triangle *, GKTriangleGraphNodes, std::__1::less<p2t::Triangle *>, std::__1::allocator<std::__1::pair<p2t::Triangle *const, GKTriangleGraphNodes>>> {
    struct __tree<std::__1::__value_type<p2t::Triangle *, GKTriangleGraphNodes>, std::__1::__map_value_compare<p2t::Triangle *, std::__1::__value_type<p2t::Triangle *, GKTriangleGraphNodes>, std::__1::less<p2t::Triangle *>, true>, std::__1::allocator<std::__1::__value_type<p2t::Triangle *, GKTriangleGraphNodes>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<p2t::Triangle *, GKTriangleGraphNodes>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<p2t::Triangle *, std::__1::__value_type<p2t::Triangle *, GKTriangleGraphNodes>, std::__1::less<p2t::Triangle *>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct pair<id, GKCDecisionNode *>;

struct priority_queue<long long, std::__1::vector<long long, std::__1::allocator<long long>>, std::__1::less<long long>> {
    struct vector<long long, std::__1::allocator<long long>> _field1;
    struct less<long long> _field2;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Edge *, GKCGraphNode2D *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Edge *, GKCGraphNode2D *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Edge *, GKCGraphNode2D *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Edge *, GKCGraphNode2D *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Edge *, GKCGraphNode2D *>, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Edge *, GKCGraphNode2D *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Edge *, GKCGraphNode2D *>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, GKCGraphNode2D *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, GKCGraphNode2D *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, GKCGraphNode2D *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, GKCGraphNode2D *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, GKCGraphNode2D *>, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, GKCGraphNode2D *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, GKCGraphNode2D *>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Triangle *, GKCGraphNode2D *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Triangle *, GKCGraphNode2D *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Triangle *, GKCGraphNode2D *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Triangle *, GKCGraphNode2D *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Triangle *, GKCGraphNode2D *>, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Triangle *, GKCGraphNode2D *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Triangle *, GKCGraphNode2D *>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_map<p2t::Edge *, GKCGraphNode2D *, std::__1::hash<p2t::Edge *>, std::__1::equal_to<p2t::Edge *>, std::__1::allocator<std::__1::pair<p2t::Edge *const, GKCGraphNode2D *>>> {
    struct __hash_table<std::__1::__hash_value_type<p2t::Edge *, GKCGraphNode2D *>, std::__1::__unordered_map_hasher<p2t::Edge *, std::__1::__hash_value_type<p2t::Edge *, GKCGraphNode2D *>, std::__1::hash<p2t::Edge *>, true>, std::__1::__unordered_map_equal<p2t::Edge *, std::__1::__hash_value_type<p2t::Edge *, GKCGraphNode2D *>, std::__1::equal_to<p2t::Edge *>, true>, std::__1::allocator<std::__1::__hash_value_type<p2t::Edge *, GKCGraphNode2D *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Edge *, GKCGraphNode2D *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Edge *, GKCGraphNode2D *>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Edge *, GKCGraphNode2D *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Edge *, GKCGraphNode2D *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Edge *, GKCGraphNode2D *>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<p2t::Edge *, std::__1::__hash_value_type<p2t::Edge *, GKCGraphNode2D *>, std::__1::hash<p2t::Edge *>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<p2t::Edge *, std::__1::__hash_value_type<p2t::Edge *, GKCGraphNode2D *>, std::__1::equal_to<p2t::Edge *>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct unordered_map<p2t::Point *, GKCGraphNode2D *, std::__1::hash<p2t::Point *>, std::__1::equal_to<p2t::Point *>, std::__1::allocator<std::__1::pair<p2t::Point *const, GKCGraphNode2D *>>> {
    struct __hash_table<std::__1::__hash_value_type<p2t::Point *, GKCGraphNode2D *>, std::__1::__unordered_map_hasher<p2t::Point *, std::__1::__hash_value_type<p2t::Point *, GKCGraphNode2D *>, std::__1::hash<p2t::Point *>, true>, std::__1::__unordered_map_equal<p2t::Point *, std::__1::__hash_value_type<p2t::Point *, GKCGraphNode2D *>, std::__1::equal_to<p2t::Point *>, true>, std::__1::allocator<std::__1::__hash_value_type<p2t::Point *, GKCGraphNode2D *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, GKCGraphNode2D *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, GKCGraphNode2D *>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, GKCGraphNode2D *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, GKCGraphNode2D *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, GKCGraphNode2D *>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<p2t::Point *, std::__1::__hash_value_type<p2t::Point *, GKCGraphNode2D *>, std::__1::hash<p2t::Point *>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<p2t::Point *, std::__1::__hash_value_type<p2t::Point *, GKCGraphNode2D *>, std::__1::equal_to<p2t::Point *>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct unordered_map<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>, std::__1::hash<p2t::Point *>, std::__1::equal_to<p2t::Point *>, std::__1::allocator<std::__1::pair<p2t::Point *const, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>>> {
    struct __hash_table<std::__1::__hash_value_type<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>, std::__1::__unordered_map_hasher<p2t::Point *, std::__1::__hash_value_type<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>, std::__1::hash<p2t::Point *>, true>, std::__1::__unordered_map_equal<p2t::Point *, std::__1::__hash_value_type<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>, std::__1::equal_to<p2t::Point *>, true>, std::__1::allocator<std::__1::__hash_value_type<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<p2t::Point *, std::__1::__hash_value_type<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>, std::__1::hash<p2t::Point *>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<p2t::Point *, std::__1::__hash_value_type<p2t::Point *, std::__1::vector<p2t::Edge *, std::__1::allocator<p2t::Edge *>>>, std::__1::equal_to<p2t::Point *>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct unordered_map<p2t::Triangle *, GKCGraphNode2D *, std::__1::hash<p2t::Triangle *>, std::__1::equal_to<p2t::Triangle *>, std::__1::allocator<std::__1::pair<p2t::Triangle *const, GKCGraphNode2D *>>> {
    struct __hash_table<std::__1::__hash_value_type<p2t::Triangle *, GKCGraphNode2D *>, std::__1::__unordered_map_hasher<p2t::Triangle *, std::__1::__hash_value_type<p2t::Triangle *, GKCGraphNode2D *>, std::__1::hash<p2t::Triangle *>, true>, std::__1::__unordered_map_equal<p2t::Triangle *, std::__1::__hash_value_type<p2t::Triangle *, GKCGraphNode2D *>, std::__1::equal_to<p2t::Triangle *>, true>, std::__1::allocator<std::__1::__hash_value_type<p2t::Triangle *, GKCGraphNode2D *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Triangle *, GKCGraphNode2D *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Triangle *, GKCGraphNode2D *>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Triangle *, GKCGraphNode2D *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Triangle *, GKCGraphNode2D *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<p2t::Triangle *, GKCGraphNode2D *>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<p2t::Triangle *, std::__1::__hash_value_type<p2t::Triangle *, GKCGraphNode2D *>, std::__1::hash<p2t::Triangle *>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<p2t::Triangle *, std::__1::__hash_value_type<p2t::Triangle *, GKCGraphNode2D *>, std::__1::equal_to<p2t::Triangle *>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>;

struct vector<ClipperLib::IntersectNode *, std::__1::allocator<ClipperLib::IntersectNode *>> {
    struct IntersectNode **_field1;
    struct IntersectNode **_field2;
    struct __compressed_pair<ClipperLib::IntersectNode **, std::__1::allocator<ClipperLib::IntersectNode *>> {
        struct IntersectNode **_field1;
    } _field3;
};

struct vector<ClipperLib::Join *, std::__1::allocator<ClipperLib::Join *>> {
    struct Join **_field1;
    struct Join **_field2;
    struct __compressed_pair<ClipperLib::Join **, std::__1::allocator<ClipperLib::Join *>> {
        struct Join **_field1;
    } _field3;
};

struct vector<ClipperLib::LocalMinimum, std::__1::allocator<ClipperLib::LocalMinimum>> {
    struct LocalMinimum *_field1;
    struct LocalMinimum *_field2;
    struct __compressed_pair<ClipperLib::LocalMinimum *, std::__1::allocator<ClipperLib::LocalMinimum>> {
        struct LocalMinimum *_field1;
    } _field3;
};

struct vector<ClipperLib::OutRec *, std::__1::allocator<ClipperLib::OutRec *>> {
    struct OutRec **_field1;
    struct OutRec **_field2;
    struct __compressed_pair<ClipperLib::OutRec **, std::__1::allocator<ClipperLib::OutRec *>> {
        struct OutRec **_field1;
    } _field3;
};

struct vector<ClipperLib::TEdge *, std::__1::allocator<ClipperLib::TEdge *>> {
    struct TEdge **_field1;
    struct TEdge **_field2;
    struct __compressed_pair<ClipperLib::TEdge **, std::__1::allocator<ClipperLib::TEdge *>> {
        struct TEdge **_field1;
    } _field3;
};

struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *>> {
    struct GKCGraphNode **_field1;
    struct GKCGraphNode **_field2;
    struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *>> {
        struct GKCGraphNode **_field1;
    } _field3;
};

struct vector<GKCPolygonObstacle *, std::__1::allocator<GKCPolygonObstacle *>> {
    struct GKCPolygonObstacle **_field1;
    struct GKCPolygonObstacle **_field2;
    struct __compressed_pair<GKCPolygonObstacle **, std::__1::allocator<GKCPolygonObstacle *>> {
        struct GKCPolygonObstacle **_field1;
    } _field3;
};

struct vector<GKCRTreeNode<NSObject, float __attribute__((ext_vector_type(2)))>, std::__1::allocator<GKCRTreeNode<NSObject, float __attribute__((ext_vector_type(2)))>>> {
    struct GKCRTreeNode<NSObject, float __attribute__((ext_vector_type(2)))> *_field1;
    struct GKCRTreeNode<NSObject, float __attribute__((ext_vector_type(2)))> *_field2;
    struct __compressed_pair<GKCRTreeNode<NSObject, float __attribute__((ext_vector_type(2)))>*, std::__1::allocator<GKCRTreeNode<NSObject, float __attribute__((ext_vector_type(2)))>>> {
        struct GKCRTreeNode<NSObject, float __attribute__((ext_vector_type(2)))> *_field1;
    } _field3;
};

struct vector<GKPolygonObstacle *, std::__1::allocator<GKPolygonObstacle *>> {
    id *_field1;
    id *_field2;
    struct __compressed_pair<GKPolygonObstacle *__strong *, std::__1::allocator<GKPolygonObstacle *>> {
        id *_field1;
    } _field3;
};

struct vector<NSObject *, std::__1::allocator<NSObject *>> {
    id *_field1;
    id *_field2;
    struct __compressed_pair<NSObject *__strong *, std::__1::allocator<NSObject *>> {
        id *_field1;
    } _field3;
};

struct vector<OpenSteer::Vec3, std::__1::allocator<OpenSteer::Vec3>> {
    struct Vec3 *_field1;
    struct Vec3 *_field2;
    struct __compressed_pair<OpenSteer::Vec3 *, std::__1::allocator<OpenSteer::Vec3>> {
        struct Vec3 *_field1;
    } _field3;
};

struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> {
    struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> {
        void *_field1;
    } **_field1;
};

struct vector<id<GKGameModel>, std::__1::allocator<id<GKGameModel>>> {
    id *_field1;
    id *_field2;
    struct __compressed_pair<__strong id<GKGameModel>*, std::__1::allocator<id<GKGameModel>>> {
        id *_field1;
    } _field3;
};

struct vector<long long, std::__1::allocator<long long>> {
    long long *_field1;
    long long *_field2;
    struct __compressed_pair<long long *, std::__1::allocator<long long>> {
        long long *_field1;
    } _field3;
};

struct vector<long, std::__1::allocator<long>>;

struct vector<std::__1::pair<id, GKCDecisionNode *>, std::__1::allocator<std::__1::pair<id, GKCDecisionNode *>>> {
    struct pair<id, GKCDecisionNode *> *_field1;
    struct pair<id, GKCDecisionNode *> *_field2;
    struct __compressed_pair<std::__1::pair<id, GKCDecisionNode *>*, std::__1::allocator<std::__1::pair<id, GKCDecisionNode *>>> {
        struct pair<id, GKCDecisionNode *> *_field1;
    } _field3;
};

struct vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>>> {
    struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> *_field1;
    struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> *_field2;
    struct __compressed_pair<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>*, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>>> {
        struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> *_field1;
    } _field3;
};

struct vector<std::__1::vector<long, std::__1::allocator<long>>, std::__1::allocator<std::__1::vector<long, std::__1::allocator<long>>>> {
    struct vector<long, std::__1::allocator<long>> *_field1;
    struct vector<long, std::__1::allocator<long>> *_field2;
    struct __compressed_pair<std::__1::vector<long, std::__1::allocator<long>>*, std::__1::allocator<std::__1::vector<long, std::__1::allocator<long>>>> {
        struct vector<long, std::__1::allocator<long>> *_field1;
    } _field3;
};

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    MISSING_TYPE *_field1[3];
} CDStruct_d80e62f2;
