/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXImageView.h>

@class SXGalleryItem;

@interface SXGalleryItemImageView : SXImageView

{
    SXGalleryItem *_galleryItem;
}

@property (nonatomic, readonly) SXGalleryItem *galleryItem;

- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)initWithGalleryItem:(id)arg1 imageResource:(id)arg2 resourceDataSource:(id)arg3 reachabilityProvider:(id)arg4;

@end
