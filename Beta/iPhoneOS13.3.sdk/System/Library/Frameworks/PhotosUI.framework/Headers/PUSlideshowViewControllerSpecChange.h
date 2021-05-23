/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewControllerSpecChange.h>

__attribute__((visibility("hidden")))
@interface PUSlideshowViewControllerSpecChange : PUViewControllerSpecChange

{
    _Bool _chromeVisibilityChanged;
    _Bool _shouldShowPlaceholderChanged;
    _Bool _shouldShowChromeBarsChanged;
    _Bool _shouldObserveAirplayRouteChanged;
    _Bool _shouldShowAirplayButtonChanged;
}

@property (nonatomic, setter=_setShouldShowPlaceholderChanged:) _Bool shouldShowPlaceholderChanged;
@property (nonatomic, setter=_setShouldShowChromeBarsChanged:) _Bool shouldShowChromeBarsChanged;
@property (nonatomic, setter=_setShouldObserveAirplayRouteChanged:) _Bool shouldObserveAirplayRouteChanged;
@property (nonatomic, setter=_setShouldShowAirplayButtonChanged:) _Bool shouldShowAirplayButtonChanged;
@property (nonatomic, readonly) _Bool chromeVisibilityChanged;

- (_Bool)changed;

@end
