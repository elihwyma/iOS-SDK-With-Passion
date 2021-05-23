/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface VKPolygonalItemGroup : NSObject

{
    unsigned int _cullingMask;
    struct optional<md::MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo>> _fillMeshInfo;
    vector_74364602 _fillMeshes;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _fillCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _strokeCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _venueCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _venueEndCapCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _venueWallHorizontalStrokeCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _venueWallVerticalStrokeCullingGroups;
    struct unordered_map<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge>>, std::__1::hash<SectionKey>, std::__1::equal_to<std::__1::pair<void *, unsigned long>>, std::__1::allocator<std::__1::pair<const std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge>>>>> _polygonEdges;
    unordered_set_bb7a56cc _featureIds;
    struct Box<float, 3> _boundingBox;
    float _tileZoom;
    float _contentScale;
    struct vector<ggl::Batcher, std::__1::allocator<ggl::Batcher>> _fillRenderItemBatchers;
    struct vector<ggl::Batcher, std::__1::allocator<ggl::Batcher>> _strokeRenderItemBatchers;
    Matrix_8746f91e _centroid;
    NSMutableOrderedSet *_attributeSets;
    vector_b346fa92 _styleQueries;
    vector_b346fa92 _selectedStyleQueries;
    shared_ptr_a3c46825 _styleManager;
    struct PolygonRouteAttributes _routeAttributes;
    _Bool _isFixedSize;
    _Bool _stylesUpToDate;
    _Bool _hasRouteAttributes;
}

@property (nonatomic, readonly) _Bool isFixedSize;
@property (nonatomic, readonly) Matrix_8746f91e centroid;
@property (nonatomic, readonly) float tileZoom;
@property (nonatomic, readonly) const Matrix_811b2232 *origin;
@property (nonatomic, readonly) const Matrix_811b2232 *maxPoint;
@property (nonatomic, readonly) Matrix_811b2232 size;
@property (nonatomic, readonly) unsigned int cullingMask;
@property (nonatomic, readonly) vector_74364602 *fillMeshes;
@property (nonatomic, readonly) NSOrderedSet *attributeSets;
@property (nonatomic, readonly) vector_b346fa92 *styleQueries;
@property (nonatomic, readonly) vector_b346fa92 *selectedStyleQueries;
@property (nonatomic, readonly) const unordered_set_bb7a56cc *featureIds;

- (void)dealloc;
- (id).cxx_construct;
- (void)setRouteAttributes:(const struct PolygonRouteAttributes *)arg1;
- (_Bool)hasFeatureId:(unsigned long long)arg1;
- (const MultiRange_4bdc93a8 *)commitRangesToFillRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_75855c3b)arg4;
- (const MultiRange_4bdc93a8 *)commitRangesToStrokeRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_75855c3b)arg4;
- (const MultiRange_4bdc93a8 *)commitRangesToVenueWallRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (const MultiRange_4bdc93a8 *)commitRangesToVenueWallEndCapRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (const MultiRange_4bdc93a8 *)commitRangesToHorizontalVenueWallStrokeRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (const MultiRange_4bdc93a8 *)commitRangesToVerticalVenueWallStrokeRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (void)updateCachedStyles;
- (void)clearRouteAttributes;
- (unsigned char)maxAttributeSetsPerGroup;
- (id)initWithStyleQuery:(shared_ptr_c5d816ee *)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const Matrix_8746f91e *)arg3 contentScale:(float)arg4;
- (unsigned char)indexForGeoFeatureAttributes:(id)arg1;
- (void)willAddDataWithAccessor:(struct ResourceAccessor *)arg1;
- (void)didFinishAddingData;
- (_Bool)canAcceptPolygon:(CDStruct_a190bee8 *)arg1;

@end
