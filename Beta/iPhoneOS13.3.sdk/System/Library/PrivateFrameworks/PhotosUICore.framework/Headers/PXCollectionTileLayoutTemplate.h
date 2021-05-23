/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutTemplate.h>

@interface PXCollectionTileLayoutTemplate : PXLayoutTemplate

{
    struct CGRect _imageRect;
    struct CGRect _titleSubtitleRect;
}

@property (nonatomic, readonly) struct CGRect imageRect;
@property (nonatomic, readonly) struct CGRect titleSubtitleRect;

- (void)prepare;

@end
