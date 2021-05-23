/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, _SKUIClickThroughWindow, _SKUIStatusBarAlertViewController;

__attribute__((visibility("hidden")))
@interface SKUIStatusBarAlertCenter : NSObject

{
    double _duration;
    CDUnknownBlockType _actionBlock;
    _SKUIClickThroughWindow *_window;
    _SKUIStatusBarAlertViewController *_rootViewController;
}

@property (nonatomic, readonly) _SKUIClickThroughWindow *window;
@property (nonatomic, readonly) _SKUIStatusBarAlertViewController *rootViewController;
@property (nonatomic) double duration;
@property (nonatomic, getter=isVisible) _Bool visible;
@property (copy, nonatomic) CDUnknownBlockType actionBlock;
@property (copy, nonatomic, readonly) NSString *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedCenter;

- (id)init;
- (void)dismiss;
- (void)showMessage:(id)arg1 withStyle:(long long)arg2 forDuration:(double)arg3 actionBlock:(CDUnknownBlockType)arg4;
- (void)unscheduleDismiss;
- (void)scheduleDismiss;
- (void)statusBarAlertViewControllerWasTapped:(id)arg1;

@end
