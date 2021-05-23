/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKPolygonalItemGroup.h>

__attribute__((visibility("hidden")))
@interface VKBuildingGroup : VKPolygonalItemGroup

{
    struct optional<md::MeshSet<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh, ggl::BuildingFlatStroke::DefaultVbo>> _strokeMeshInfo;
    struct optional<md::MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo>> _fillMeshInfoForPointyRoofs;
    vector_4080291d _strokeMeshes;
    vector_74364602 _fillMeshesForPointyRoofs;
    struct unique_ptr<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>>> _extrusionFillMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> _extrusionStrokeMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>>> _pointyRoofFillMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> _pointyRoofStrokeMeshVendor;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _extrusionFillCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _extrusionStrokeCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _fillCullingGroupsForPointyRoofs;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _pointyRoofFillCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _pointyRoofStrokeCullingGroups;
    vector_b346fa92 _styleQueries;
    vector_b346fa92 _flatRoofStyleQueries;
    vector_b346fa92 _selectedStyleQueries;
    vector_b346fa92 _selectedFlatRoofStyleQueries;
}

- (id).cxx_construct;
- (vector_b346fa92 *)styleQueriesForPointyRoofs:(_Bool)arg1 selected:(_Bool)arg2;
- (vector_74364602 *)fillMeshesForPointyRoofs;
- (const MultiRange_4bdc93a8 *)commitRangesToPointyRoofTopRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_75855c3b)arg4;
- (vector_4080291d *)strokeMeshes;
- (void)updateWithStyleManager:(const shared_ptr_a3c46825 *)arg1;
- (unsigned char)maxAttributeSetsPerGroup;
- (id)initWithStyleQuery:(shared_ptr_c5d816ee *)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const Matrix_8746f91e *)arg3 contentScale:(float)arg4;
- (void)willAddDataWithAccessor:(struct ResourceAccessor *)arg1;
- (void)didFinishAddingData;
- (const MeshVendor_2955faa2 *)extrusionFillMeshVendor;
- (const MultiRange_4bdc93a8 *)commitRangesToExtrusionFillRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_75855c3b)arg4;
- (const MeshVendor_e321e873 *)pointyRoofFillMeshVendor;
- (const MultiRange_4bdc93a8 *)commitRangesToPointyRoofFillRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_75855c3b)arg4;
- (const MeshVendor_7adfd6de *)extrusionStrokeMeshVendor;
- (const MultiRange_4bdc93a8 *)commitRangesToExtrusionStrokeRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_75855c3b)arg4;
- (_Bool)canConstructPointyRoofForPolygon:(CDStruct_a190bee8 *)arg1 building:(CDStruct_985a2d1c *)arg2 buildingModel:(unsigned char)arg3 scaleThreshold:(float)arg4;
- (_Bool)addPointyRoofForBuilding:(CDStruct_985a2d1c *)arg1 buildingModel:(unsigned char)arg2 scaleThreshold:(float)arg3 styleIndex:(float)arg4;
- (void)addExtrusionForBuilding:(CDStruct_985a2d1c *)arg1 index:(unsigned long long)arg2 ofTotal:(unsigned long long)arg3;
- (const MeshVendor_7adfd6de *)pointyRoofStrokeMeshVendor;
- (const MultiRange_4bdc93a8 *)commitRangesToPointyRoofStrokeRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_75855c3b)arg4;
- (void)prepareForBuilding:(CDStruct_985a2d1c *)arg1 forRoofStyle:(unsigned char)arg2 scaleThreshold:(float)arg3;
- (void)addBuilding:(CDStruct_985a2d1c *)arg1 index:(unsigned long long)arg2 ofTotal:(unsigned long long)arg3 accessor:(struct ResourceAccessor *)arg4 triangulator:(Triangulator_edf345a1 *)arg5 prepareExtrusion:(_Bool)arg6 forRoofStyle:(unsigned char)arg7 scaleThreshold:(float)arg8;

@end
