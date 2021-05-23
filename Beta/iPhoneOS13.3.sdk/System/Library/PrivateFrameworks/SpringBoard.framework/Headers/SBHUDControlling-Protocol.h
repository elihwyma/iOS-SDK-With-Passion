/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class NSString, UIViewController;

@protocol SBHUDViewControlling;

@protocol SBHUDControlling <Swift>

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) UIViewController<SBHUDViewControlling> *HUDViewController;
@property (nonatomic, readonly, getter=isDismissalScheduled) _Bool dismissalScheduled;
@property (nonatomic, readonly) _Bool isPresented;
@property (nonatomic, readonly) _Bool isPresenting;
@property (nonatomic, readonly) _Bool isDismissing;
@property (nonatomic, readonly) _Bool isDismissed;
@property (nonatomic, readonly) _Bool isVisible;

- (unsigned short)dismissAnimated: /* Error: Ran out of types for this method. */;
- (unsigned short)dismiss;
- (unsigned short)presentWithDismissalInterval:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)presentWithDismissalInterval: /* Error: Ran out of types for this method. */;
- (unsigned short)rescheduleDismissalTimer;
- (unsigned short)invalidateDismissalTimer;
- (unsigned short)scheduleDismissalTimer;

@end
