/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSValue.h>

@interface NSValue (PXTileIdentifier)

@property (nonatomic, readonly) struct PXTileIdentifier PXTileIdentifierValue;
@property (readonly) struct UIEdgeInsets PXEdgeInsetsValue;
@property (nonatomic, readonly) struct PXSimpleIndexPath px_simpleIndexPathValue;
@property (nonatomic, readonly) struct PXViewSpecDescriptor px_viewSpecDescriptorValue;
@property (nonatomic, readonly) CDStruct_15189878 PXDisplayAssetTypedCountValue;
@property (nonatomic, readonly) CDStruct_aa0b146f PXDisplayAssetDetailedCountsValue;

+ (id)valueWithPXTileIdentifier:(struct PXTileIdentifier)arg1;
+ (id)valueWithPXEdgeInsets:(struct UIEdgeInsets)arg1;
+ (id)px_valueWithSimpleIndexPath:(struct PXSimpleIndexPath)arg1;
+ (id)px_valueWithMemoryFontsSpecIdentifier:(struct PXMemoryFontsSpecIdentifier)arg1;
+ (id)px_valueWithViewSpecDescriptor:(struct PXViewSpecDescriptor)arg1;
+ (id)valueWithPXTileGeometry:(struct PXTileGeometry)arg1;
+ (id)valueWithPXDisplayAssetTypedCount:(CDStruct_15189878)arg1;
+ (id)valueWithPXDisplayAssetDetailedCounts:(CDStruct_aa0b146f)arg1;

- (struct PXMemoryFontsSpecIdentifier)px_memoryFontsSpecIdentifierValue;
- (struct PXTileGeometry)PXTileGeometryValue;

@end
