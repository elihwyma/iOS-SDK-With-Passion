/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <PhotosUICore/PXFeatureSpec.h>

@class NSString;

@interface PMPXFeatureSpec : PXFeatureSpec

{
    NSString *_fontName;
    struct CGSize _size;
}

@property (retain, nonatomic) NSString *fontName;
@property (nonatomic) struct CGSize size;

- (id)viewSpecWithDescriptor:(struct PXViewSpecDescriptor)arg1;
- (id)specForFont:(id)arg1 size:(struct CGSize)arg2;
- (id)verticalExportSpecForFont:(id)arg1 size:(struct CGSize)arg2;

@end
