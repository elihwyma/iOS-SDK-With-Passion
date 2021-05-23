/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUFeedCell.h>

@class PXBadgedThumbnailView;

__attribute__((visibility("hidden")))
@interface PUFeedBadgedThumbnailCell : PUFeedCell

{
    PXBadgedThumbnailView *_badgedThumbnailView;
}

@property (nonatomic, readonly) PXBadgedThumbnailView *badgedThumbnailView;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
