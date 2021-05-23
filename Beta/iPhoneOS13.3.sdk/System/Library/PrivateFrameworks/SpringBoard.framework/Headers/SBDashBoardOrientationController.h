/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol BSInvalidatable;

@interface SBDashBoardOrientationController : NSObject

{
    id <BSInvalidatable> _deferOrientationUpdatesAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 logMessage:(id)arg3;
- (void)deferOrientationUpdatesWithReason:(id)arg1;
- (void)cancelOrientationUpdateDeferral;

@end
