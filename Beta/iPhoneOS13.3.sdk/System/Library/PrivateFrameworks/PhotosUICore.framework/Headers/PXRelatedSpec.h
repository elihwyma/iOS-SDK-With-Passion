/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeatureSpec.h>

@interface PXRelatedSpec : PXFeatureSpec

{
    long long _numberOfColumns;
    struct CGSize _interEntrySpacing;
}

@property (nonatomic, readonly) long long numberOfColumns;
@property (nonatomic, readonly) struct CGSize interEntrySpacing;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor)arg1;

@end
