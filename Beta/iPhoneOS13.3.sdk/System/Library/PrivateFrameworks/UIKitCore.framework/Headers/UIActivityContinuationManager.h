/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSProgress, NSString;

@protocol UIActivityContinuationManagerApplicationContext;

__attribute__((visibility("hidden")))
@interface UIActivityContinuationManager : NSObject

{
    id <UIActivityContinuationManagerApplicationContext> _context;
    NSString *_currentActivityContinuationType;
    NSString *_currentActivityContinuationUUIDString;
    NSProgress *_currentActivityContinuationProgress;
}

@property (copy, nonatomic, getter=_currentActivityContinuationType, setter=_setCurrentActivityContinuationType:) NSString *currentActivityContinuationType;
@property (copy, nonatomic, getter=_currentActivityContinuationUUIDString, setter=_setCurrentActivityContinuationUUIDString:) NSString *currentActivityContinuationUUIDString;
@property (retain, nonatomic, getter=_currentActivityContinuationProgress, setter=_setCurrentActivityContinuationProgress:) NSProgress *currentActivityContinuationProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)userActivityWillSave:(id)arg1;
- (id)_fetchUserActivityWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithApplicationContext:(id)arg1;
- (_Bool)activityContinuationsAreBeingTracked;
- (id)activityContinuationDictionaryWithAction:(id)arg1;
- (void)handleActivityContinuation:(id)arg1 isSuspended:(_Bool)arg2;
- (void)addResponder:(id)arg1 document:(id)arg2 forUserActivity:(id)arg3;
- (void)removeResponder:(id)arg1 document:(id)arg2 forUserActivity:(id)arg3;
- (void)_clearCurrentActivityContinuationCancelingProgress:(_Bool)arg1;
- (void)_didFailToContinueUserActivityWithType:(id)arg1 error:(id)arg2;
- (_Bool)_delegateHandledContinueActivityWithType:(id)arg1;
- (void)_hideCurrentActivityContinuationProgressUI;
- (void)_displayCurrentActivityContinuationProgressUI;
- (_Bool)_continueUserActivity:(id)arg1;
- (void)_endCurrentActivityContinuationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_endCurrentActivityContinuationAndDisplayError:(id)arg1;
- (void)_userActivityWillSave:(id)arg1;
- (void)_cleanupUserActivity:(id)arg1 activityIdentifier:(id)arg2;

@end
