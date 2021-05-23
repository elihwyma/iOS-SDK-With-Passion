/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNNavigationState.h>

@class MNCommuteSession, NSString;

@interface MNNavigationStatePredictingDestination : MNNavigationState

{
    MNCommuteSession *_commuteSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)type;
- (void)enterState;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;
- (void)stopPredictingDestinations;
- (id)traceManager;
- (void)leaveState;
- (_Bool)requiresHighMemoryThreshold;
- (unsigned long long)desiredLocationProviderType;
- (void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2;
- (void)commuteSessionDidArrive:(id)arg1;

@end
