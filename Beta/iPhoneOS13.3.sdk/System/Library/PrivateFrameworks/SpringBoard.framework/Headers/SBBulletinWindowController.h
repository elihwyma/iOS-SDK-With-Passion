/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, SBBulletinRootViewController, SBBulletinWindow, UIViewController, UIWindow;

@interface SBBulletinWindowController : NSObject

{
    SBBulletinWindow *_bulletinWindow;
    _Bool _rotatingKeyboard;
    _Bool _aboveAssistant;
    NSMutableSet *_windowClients;
    NSMutableSet *_keyClients;
    NSMutableSet *_busyClients;
    NSMutableSet *_busyReasons;
    SBBulletinRootViewController *_rootVC;
    _Bool _wantsKeyWindow;
}

@property (nonatomic, getter=_wantsKeyWindow, setter=_setWantsKeyWindow:) _Bool wantsKeyWindow;
@property (nonatomic, readonly) UIViewController *rootViewController;
@property (nonatomic, readonly) UIWindow *window;
@property (nonatomic, getter=isWindowAboveAssistant) _Bool windowAboveAssistant;

+ (id)sharedInstance;
+ (_Bool)_isSecure;

- (id)init;
- (void)dealloc;
- (_Bool)isBusy;
- (void)setBusy:(_Bool)arg1 forReason:(id)arg2;
- (void)addBusyClient:(id)arg1;
- (void)removeBusyClient:(id)arg1;
- (void)addWindowClient:(id)arg1;
- (void)removeWindowClient:(id)arg1;
- (void)_resignAsKeyWindow;
- (void)_becomeKeyWindow;
- (void)_didBecomeKeyWindow:(id)arg1;
- (void)_didResignKeyWindow:(id)arg1;
- (void)updateKeyWindowStatusIfNecessary;
- (_Bool)_isBusyForReason:(id)arg1;
- (void)addWindowClient:(id)arg1 withChildViewController:(id)arg2;
- (void)removeWindowClient:(id)arg1 withChildViewController:(id)arg2;
- (_Bool)_hasKeyWindowClients;

@end
