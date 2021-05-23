/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLObject.h>

@class MISSING_TYPE;

@interface MDLVoxelArray : MDLObject

{
    struct unordered_map<unsigned long long, int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, int>>> _voxels;
    struct {
        MISSING_TYPE *minimumExtent__maximumExtent;
    } _extent;
    struct MDLAABB _bounds;
    float _voxelExtent;
    struct MortonCode mortonCoder;
    struct unique_ptr<ModelIO::Octree, std::__1::default_delete<ModelIO::Octree>> _octreeData;
    _Bool _levelSet;
    float _interiorThickness;
    float _exteriorThickness;
    MISSING_TYPE *_originatingOffset;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) struct voxelIndexExtent;
@property (nonatomic, readonly) struct boundingBox;
@property (nonatomic, readonly) _Bool isValidSignedShellField;
@property (nonatomic) float shellFieldInteriorThickness;
@property (nonatomic) float shellFieldExteriorThickness;

- (id)init;
- (id).cxx_construct;
- (void)recalculateExtents;
- (MISSING_TYPE *)spatialLocationOfIndex: /* Error: Ran out of types for this method. */;
- (void)dilateNarrowBandInteriorWidthTo:(float)arg1 AndExteriorWidthTo:(float)arg2;
- (void)erodeNarrowBandInteriorWidthTo:(float)arg1 AndExteriorWidthTo:(float)arg2;
- (id)coarseMeshUsingAllocator:(id)arg1;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 patchRadius:(float)arg3;
- (void)convertToSignedShellField;
- (void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 patchRadius:(float)arg3;
- (id)initWithData:(id)arg1 boundingBox:(struct)arg2 voxelExtent:(float)arg3;
- (_Bool)voxelExistsAtIndex:(_Bool)arg1 allowAnyX:(_Bool)arg2 allowAnyY:(_Bool)arg3 allowAnyZ:(_Bool)arg4 allowAnyShell: /* Error: Ran out of types for this method. */;
- (id)voxelsWithinExtent:(struct)arg1;
- (id)voxelIndices;
- (void)setVoxelAtIndex: /* Error: Ran out of types for this method. */;
- (void)unionWithVoxels:(id)arg1;
- (void)intersectWithVoxels:(id)arg1;
- (void)differenceWithVoxels:(id)arg1;
- (MISSING_TYPE *)indexOfSpatialLocation: /* Error: Ran out of types for this method. */;
- (struct)voxelBoundingBoxAtIndex: /* Error: Ran out of types for this method. */;
- (id)coarseMesh;
- (id)meshUsingAllocator:(id)arg1;
- (id)coarseVoxelMeshWithStyle:(unsigned long long)arg1;
- (vector_3203cf93)boxesPerLayer;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorShells:(int)arg3 exteriorShells:(int)arg4 patchRadius:(float)arg5;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorNBWidth:(float)arg3 exteriorNBWidth:(float)arg4 patchRadius:(float)arg5;
- (void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 interiorShells:(int)arg3 exteriorShells:(int)arg4 patchRadius:(float)arg5;
- (void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 interiorNBWidth:(float)arg3 exteriorNBWidth:(float)arg4 patchRadius:(float)arg5;

@end
