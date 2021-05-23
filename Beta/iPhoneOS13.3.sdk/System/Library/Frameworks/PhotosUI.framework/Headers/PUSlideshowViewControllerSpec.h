/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewControllerSpec.h>

@class PUSlideshowViewControllerSpecChange;

__attribute__((visibility("hidden")))
@interface PUSlideshowViewControllerSpec : PUViewControllerSpec

{
    _Bool _isChromeVisible;
    _Bool _isAirplayScreenAvailable;
    _Bool _isAirplayRouteAvailable;
    _Bool _shouldShowChromeBars;
    _Bool _shouldShowPlaceholder;
    _Bool _shouldObserveAirplayRoute;
    _Bool _shouldShowAirplayButton;
    unsigned long long _mode;
}

@property (nonatomic, readonly) PUSlideshowViewControllerSpecChange *currentChange;
@property (nonatomic, setter=_setShouldShowPlaceholder:) _Bool shouldShowPlaceholder;
@property (nonatomic, setter=_setShouldShowChromeBars:) _Bool shouldShowChromeBars;
@property (nonatomic, setter=_setShouldObserveAirplayRoute:) _Bool shouldObserveAirplayRoute;
@property (nonatomic, setter=_setShouldShowAirplayButton:) _Bool shouldShowAirplayButton;
@property (nonatomic, setter=setChromeVisible:) _Bool isChromeVisible;
@property (nonatomic, setter=setAirplayScreenAvailable:) _Bool isAirplayScreenAvailable;
@property (nonatomic, setter=setAirplayRouteAvailable:) _Bool isAirplayRouteAvailable;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) _Bool shouldUseChromeBars;
@property (nonatomic, readonly) _Bool shouldUseTapGesture;
@property (nonatomic, readonly) _Bool shouldRegisterToAirplay;
@property (nonatomic, readonly) _Bool shouldPauseWhenAppResignsActive;

- (id)init;
- (id)initWithMode:(unsigned long long)arg1;
- (void)updateIfNeeded;
- (id)newSpecChange;

@end
