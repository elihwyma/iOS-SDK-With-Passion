/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKPolygonalItemGroup.h>

__attribute__((visibility("hidden")))
@interface VKPolygonGroup : VKPolygonalItemGroup

{
    struct optional<md::MeshSet<ggl::PolygonCommonStroke::MeshMesh, ggl::PolygonCommonStroke::DefaultVbo>> _strokeMeshInfo;
    vector_d473a3e0 _strokeMeshes;
    shared_ptr_479d1306 _sourceTexture;
    shared_ptr_479d1306 _targetTexture;
    shared_ptr_479d1306 _sourceRoofTexture;
    shared_ptr_479d1306 _targetRoofTexture;
    unsigned char _lastResolvedZoom;
}

@property (nonatomic, readonly) struct FeatureAttributeSet styleAttributes;
@property (nonatomic, readonly) vector_d473a3e0 *strokeMeshes;
@property (nonatomic, readonly) struct Texture2D *sourceTexture;
@property (nonatomic, readonly) struct Texture2D *targetTexture;
@property (nonatomic, readonly) struct Texture2D *sourceRoofTexture;
@property (nonatomic, readonly) struct Texture2D *targetRoofTexture;

- (void)dealloc;
- (id).cxx_construct;
- (void)setNeedsTextureUpdate;
- (id)initWithStyleQuery:(shared_ptr_c5d816ee *)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const Matrix_8746f91e *)arg3 contentScale:(float)arg4;
- (void)willAddDataWithAccessor:(struct ResourceAccessor *)arg1;
- (void)didFinishAddingData;
- (void)prepareForPolygon:(CDStruct_b92e1e41 *)arg1 hasNonWaterStyle:(_Bool)arg2;
- (void)addPolygon:(CDStruct_b92e1e41 *)arg1 hasNonWaterStyle:(_Bool)arg2 accessor:(struct ResourceAccessor *)arg3 triangulator:(Triangulator_edf345a1 *)arg4;
- (void)prepareToStrokeSection:(const struct PolygonSection *)arg1 key:(const pair_1503616b *)arg2 styles:(vector_0496561e *)arg3 paddedCount:(unsigned int)arg4;
- (void)addStrokeForSection:(const struct PolygonSection *)arg1 paddedCount:(unsigned int)arg2 key:(pair_1503616b)arg3 attributes:(id)arg4 styles:(vector_0496561e *)arg5 cullingMask:(unsigned int)arg6 accessor:(struct ResourceAccessor *)arg7;
- (void)updateTextures:(unsigned char)arg1 textureManager:(shared_ptr_f2399894 *)arg2;
- (shared_ptr_479d1306)_textureForName:(const basic_string_90719d97 *)arg1 textureManager:(shared_ptr_f2399894 *)arg2;
- (unsigned char)styleIndexForAttributes:(id)arg1 edgePair:(const CDStruct_1e94be47 *)arg2;
- (void)updateTexturesIfNecessary:(float)arg1 textureManager:(shared_ptr_f2399894 *)arg2;
- (unsigned int)createStrokePointStyleList:(CDStruct_b92e1e41 *)arg1 section:(unsigned long long)arg2 outPointStyles:(vector_0496561e *)arg3;
- (void)enclosePointsInBoundingBox:(Matrix_8746f91e *)arg1 count:(unsigned long long)arg2;
- (void)prepareToFillSection:(const struct PolygonSection *)arg1;
- (_Bool)addFillForSection:(const struct PolygonSection *)arg1 precision:(unsigned char)arg2 styleIndex:(unsigned int)arg3 cullingMask:(unsigned int)arg4 accessor:(struct ResourceAccessor *)arg5 triangulator:(Triangulator_edf345a1 *)arg6;
- (unsigned char)initialStyleIndexForSection:(const struct PolygonSection *)arg1 attributes:(id)arg2 styles:(const vector_0496561e *)arg3;

@end
