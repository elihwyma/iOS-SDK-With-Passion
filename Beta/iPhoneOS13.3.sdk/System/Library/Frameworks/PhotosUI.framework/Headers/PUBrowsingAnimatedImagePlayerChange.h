/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewModelChange.h>

__attribute__((visibility("hidden")))
@interface PUBrowsingAnimatedImagePlayerChange : PUViewModelChange

{
    _Bool _animatedImageDidChange;
    _Bool _animatedImageLoadingAllowedDidChange;
}

@property (nonatomic, setter=_setAnimatedImageDidChange:) _Bool animatedImageDidChange;
@property (nonatomic, setter=_setAnimatedImageLoadingAllowedDidChange:) _Bool animatedImageLoadingAllowedDidChange;

- (_Bool)hasChanges;

@end
