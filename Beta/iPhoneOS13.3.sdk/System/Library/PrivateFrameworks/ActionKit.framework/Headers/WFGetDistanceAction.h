/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFGetDistanceAction : WFAction

+ (unsigned long long)transportTypeFromString:(id)arg1;

- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)getDirectDistanceFromOrigin:(id)arg1 toDestination:(id)arg2;
- (void)getDistanceFromOrigin:(id)arg1 toDestination:(id)arg2 transportType:(unsigned long long)arg3;
- (void)finishRunningWithDistance:(double)arg1;
- (_Bool)originIsCurrentLocation;
- (_Bool)destinationIsCurrentLocation;
- (_Bool)locationParameterIsCurrentLocation:(id)arg1;
- (id)noLocationError;

@end
