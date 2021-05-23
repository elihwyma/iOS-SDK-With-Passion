/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKPolygonGroup.h>

__attribute__((visibility("hidden")))
@interface VKVenueGroup : VKPolygonGroup

{
    struct optional<md::MeshSet<ggl::VenueWall::MeshMesh, ggl::VenueWall::DefaultVbo>> _venueWallMeshInfo;
    struct optional<md::MeshSet<ggl::VenueWall::EndCapMesh, ggl::VenueWall::EndCapVbo>> _venueWallEndCapMeshInfo;
    struct optional<md::MeshSet<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh, ggl::Venue3DStroke::HorizontalDefaultVbo>> _venueWallHorizontalStrokeMeshInfo;
    struct optional<md::MeshSet<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh, ggl::Venue3DStroke::VerticalDefaultVbo>> _venueWallVerticalStrokeMeshInfo;
    vector_e4fc2931 _venueWallMeshes;
    vector_da5ada59 _venueWallEndMeshes;
    vector_8c4a3c5e _venueWallHorizontalStrokeMeshes;
    vector_5b05785e _venueWallVerticalStrokeMeshes;
    struct unordered_map<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge>>, std::__1::hash<SectionKey>, std::__1::equal_to<std::__1::pair<void *, unsigned long>>, std::__1::allocator<std::__1::pair<const std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge>>>>> _venueWalls;
    unsigned long long _buildingId;
    float _maximumSectionLength;
    shared_ptr_479d1306 _wallTexture;
    int _layer;
}

@property (nonatomic, readonly) int layer;
@property (nonatomic, readonly) unsigned long long buildingId;
@property (nonatomic, readonly) float maximumSectionLength;
@property (nonatomic, readonly) struct Texture2D *wallTexture;
@property (nonatomic, readonly) const vector_e4fc2931 *venueWallMeshes;
@property (nonatomic, readonly) const vector_da5ada59 *venueWallEndMeshes;
@property (nonatomic, readonly) const vector_8c4a3c5e *venueWallHorizontalStrokeMeshes;
@property (nonatomic, readonly) const vector_5b05785e *venueWallVerticalStrokeMeshes;

- (id).cxx_construct;
- (void)willAddDataWithAccessor:(struct ResourceAccessor *)arg1;
- (void)didFinishAddingData;
- (unsigned long long)verticalStrokeCountForSection:(const struct PolygonSection *)arg1 styles:(const vector_0496561e *)arg2 edges:(const vector_304c695f *)arg3;
- (struct StrokeBufferSizing)bufferSizingForStrokesOnSection:(const struct PolygonSection *)arg1 styles:(const vector_0496561e *)arg2 edges:(const vector_304c695f *)arg3;
- (void)prepareToStrokeSection:(const struct PolygonSection *)arg1 key:(const pair_1503616b *)arg2 styles:(vector_0496561e *)arg3 paddedCount:(unsigned int)arg4;
- (const vector_304c695f *)generateEdgeListForPolygonSection:(const struct PolygonSection *)arg1 key:(const pair_1503616b *)arg2;
- (void)prepareToGenerateWallsForSection:(const struct PolygonSection *)arg1 styles:(vector_0496561e *)arg2 edges:(const vector_304c695f *)arg3;
- (void)prepareToGenerateWallStrokesForSection:(const struct PolygonSection *)arg1 styles:(const vector_0496561e *)arg2 edges:(const vector_304c695f *)arg3;
- (void)addStrokeForSection:(const struct PolygonSection *)arg1 paddedCount:(unsigned int)arg2 key:(pair_1503616b)arg3 attributes:(id)arg4 styles:(vector_0496561e *)arg5 cullingMask:(unsigned int)arg6 accessor:(struct ResourceAccessor *)arg7;
- (void)addWallsForSection:(const struct PolygonSection *)arg1 edges:(const vector_304c695f *)arg2 attributes:(id)arg3 styles:(vector_0496561e *)arg4 cullingMask:(unsigned int)arg5 accessor:(struct ResourceAccessor *)arg6;
- (void)addWallStrokesForSection:(const struct PolygonSection *)arg1 edges:(const vector_304c695f *)arg2 attributes:(id)arg3 styles:(vector_0496561e *)arg4 cullingMask:(unsigned int)arg5 accessor:(struct ResourceAccessor *)arg6;
- (void)updateTextures:(unsigned char)arg1 textureManager:(shared_ptr_f2399894 *)arg2;
- (id)initWithStyleQuery:(shared_ptr_c5d816ee *)arg1 tileZoom:(float)arg2 layer:(int)arg3 buildingId:(unsigned long long)arg4 contentScale:(float)arg5;

@end
