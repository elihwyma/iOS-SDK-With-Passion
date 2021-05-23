/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class AVObservationController, AVSecondScreenConnection, CADisplay, UIScreen, UIWindow, UIWindowScene;

__attribute__((visibility("hidden")))
@interface AVSecondScreen : NSObject

{
    _Bool _TVOutScreen;
    AVObservationController *_observationController;
    UIWindow *_window;
    UIWindowScene *_windowScene;
    UIScreen *_screen;
    AVSecondScreenConnection *_secondScreenConnection;
    long long _state;
    CADisplay *_debugInfoDisplay;
}

@property (nonatomic, readonly) AVObservationController *observationController;
@property (retain, nonatomic) UIWindow *window;
@property (weak, nonatomic, readonly) UIWindowScene *windowScene;
@property (weak, nonatomic, readonly) UIScreen *screen;
@property (retain, nonatomic) AVSecondScreenConnection *secondScreenConnection;
@property (nonatomic, readonly) long long state;
@property (retain, nonatomic) CADisplay *debugInfoDisplay;
@property (nonatomic, readonly, getter=isTVOutScreen) _Bool TVOutScreen;
@property (nonatomic, readonly) struct CGRect sceneBounds;

- (void)dealloc;
- (void)setState:(long long)arg1;
- (_Bool)isAvailable;
- (id)initWithScene:(id)arg1;
- (void)connectWithSecondScreenConnection:(id)arg1;
- (void)_updatePreferredDisplayCriteria;
- (_Bool)_isWindowSceneAvailable;

@end
