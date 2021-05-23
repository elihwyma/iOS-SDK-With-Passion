/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBLockScreenEmergencyCallViewController, UIViewController;

@protocol SBLockScreenEmergencyDialerDelegate;

@interface SBLockScreenEmergencyDialerController : NSObject

{
    SBLockScreenEmergencyCallViewController *_viewController;
    _Bool _active;
    id <SBLockScreenEmergencyDialerDelegate> _delegate;
}

@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly) UIViewController *viewController;
@property (weak, nonatomic) id <SBLockScreenEmergencyDialerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)deactivate;
- (void)emergencyCallViewController:(id)arg1 didExitWithError:(id)arg2;
- (void)dismissEmergencyCallViewController:(id)arg1;

@end
