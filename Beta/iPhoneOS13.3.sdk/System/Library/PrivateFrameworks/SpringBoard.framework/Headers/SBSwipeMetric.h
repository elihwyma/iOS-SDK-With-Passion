/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBAnalyticsStateMachineEventHandler.h>

@interface SBSwipeMetric : SBAnalyticsStateMachineEventHandler

{
    struct CGPoint _initialLocation;
    long long _interfaceOrientation;
    double _timestampDelta;
}

- (id)init;

@end
