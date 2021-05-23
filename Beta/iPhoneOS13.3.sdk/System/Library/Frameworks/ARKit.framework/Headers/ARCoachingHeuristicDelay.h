/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARCoachingHeuristic.h>

@interface ARCoachingHeuristicDelay : ARCoachingHeuristic

{
    double _endTime;
    double _duration;
}

- (long long)requirements;
- (id)initWithDuration:(double)arg1;
- (void)updateWithFrame:(id)arg1;

@end
