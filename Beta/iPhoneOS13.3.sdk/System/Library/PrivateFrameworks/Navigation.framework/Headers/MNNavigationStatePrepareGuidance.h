/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNNavigationState.h>

@class MNNavigationSessionManager, NSArray;

@interface MNNavigationStatePrepareGuidance : MNNavigationState

{
    NSArray *_previewRoutes;
    unsigned long long _selectedRouteIndex;
    MNNavigationSessionManager *_navigationSessionManager;
}

- (unsigned long long)type;
- (void)enterState;
- (void)stopNavigation;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
- (id)traceManager;
- (void)leaveState;
- (_Bool)requiresHighMemoryThreshold;
- (unsigned long long)desiredLocationProviderType;
- (_Bool)shouldClearStoredRoutes;
- (id)initWithStateManager:(id)arg1 previewRoutes:(id)arg2 selectedRouteIndex:(unsigned long long)arg3;

@end
