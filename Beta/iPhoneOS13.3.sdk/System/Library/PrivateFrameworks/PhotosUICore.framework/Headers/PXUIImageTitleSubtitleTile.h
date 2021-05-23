/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXUIImageTile.h>

@class NSString, PXImageTitleSubtitleSpec, PXTitleSubtitleUILabel;

@interface PXUIImageTitleSubtitleTile : PXUIImageTile

{
    PXTitleSubtitleUILabel *_label;
    PXImageTitleSubtitleSpec *_spec;
    NSString *_title;
    NSString *_subtitle;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

- (void)prepareForReuse;
- (id)view;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;

@end
