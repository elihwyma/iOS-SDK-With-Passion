/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNNavigationState.h>

@interface MNNavigationStateNoDestination : MNNavigationState

- (unsigned long long)type;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;
- (void)startPredictingDestinationsWithHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)desiredLocationProviderType;

@end
