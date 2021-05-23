/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BKSProcessAssertion, FBProcessManager, NSString;

@interface SBLegacyVOIPRefreshWakeTracker : NSObject

{
    FBProcessManager *_processManager;
    BKSProcessAssertion *_appKeepAliveAssertion;
}

@property (retain, nonatomic) BKSProcessAssertion *appKeepAliveAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (double)wakeDuration;
- (id)initWithProcessManager:(id)arg1;
- (void)_activateAppIfNeeded:(id)arg1;
- (id)_createAssertionForBundleID:(id)arg1;
- (_Bool)beginWakeForApplication:(id)arg1;
- (void)endWake;

@end
