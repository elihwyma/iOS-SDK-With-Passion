/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNNavigationStateManager, MNNavigationTraceManager;

@interface MNNavigationState : NSObject

{
    double _locationUpdateInterval;
    double _suggestionUpdateFrequency;
    MNNavigationStateManager *_stateManager;
}

@property (weak, nonatomic, readonly) MNNavigationStateManager *stateManager;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) _Bool requiresHighMemoryThreshold;
@property (nonatomic, readonly) unsigned long long desiredLocationProviderType;
@property (nonatomic, readonly) _Bool requiresLocationAccess;
@property (nonatomic, readonly) _Bool shouldClearStoredRoutes;
@property (nonatomic, readonly) double locationUpdateInterval;
@property (nonatomic, readonly) double suggestionUpdateFrequency;
@property (nonatomic, readonly) MNNavigationTraceManager *traceManager;

- (id)init;
- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)enterState;
- (id)initWithStateManager:(id)arg1;
- (void)leaveState;
- (void)preEnterState;
- (_Bool)_isSelectorValidForForwarding:(SEL)arg1;

@end
