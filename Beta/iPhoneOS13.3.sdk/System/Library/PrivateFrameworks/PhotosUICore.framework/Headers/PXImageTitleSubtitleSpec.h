/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXViewSpec.h>

@class PXImageViewSpec, PXTitleSubtitleLabelSpec;

@interface PXImageTitleSubtitleSpec : PXViewSpec

{
    PXTitleSubtitleLabelSpec *_titleSubtitleSpec;
    PXImageViewSpec *_imageSpec;
}

@property (retain, nonatomic) PXTitleSubtitleLabelSpec *titleSubtitleSpec;
@property (retain, nonatomic) PXImageViewSpec *imageSpec;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
