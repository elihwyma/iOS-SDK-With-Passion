/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, NSTimer, SBHUDController, UIViewController;

@protocol SBHUDViewControlling;

@interface _SBHUDModel : NSObject

{
    NSTimer *_dismissalTimer;
    _Bool _dismissed;
    _Bool _dismissing;
    _Bool _presenting;
    _Bool _presented;
    UIViewController<SBHUDViewControlling> *_HUDViewController;
    SBHUDController *_HUDController;
    double _dismissalInterval;
    NSString *_identifier;
}

@property (nonatomic, setter=setPresented:) _Bool isPresented;
@property (nonatomic, setter=setPresenting:) _Bool isPresenting;
@property (nonatomic, setter=setDismissing:) _Bool isDismissing;
@property (nonatomic, setter=setDismissed:) _Bool isDismissed;
@property (nonatomic, readonly) SBHUDController *HUDController;
@property (nonatomic, readonly) UIViewController<SBHUDViewControlling> *HUDViewController;
@property (nonatomic, readonly) double dismissalInterval;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly, getter=isDismissalScheduled) _Bool dismissalScheduled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isVisible;

+ (id)HUDModelForController:(id)arg1 viewController:(id)arg2 identifier:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dismiss;
- (void)presentWithDismissalInterval:(double)arg1 animated:(_Bool)arg2;
- (void)presentWithDismissalInterval:(double)arg1;
- (void)rescheduleDismissalTimer;
- (void)invalidateDismissalTimer;
- (void)hudViewController:(id)arg1 willDismissHUD:(id)arg2;
- (void)hudViewController:(id)arg1 didDismissHUD:(id)arg2;
- (void)hudViewController:(id)arg1 didPresentHUD:(id)arg2;
- (void)hudViewController:(id)arg1 willPresentHUD:(id)arg2;
- (void)scheduleDismissalTimer;

@end
