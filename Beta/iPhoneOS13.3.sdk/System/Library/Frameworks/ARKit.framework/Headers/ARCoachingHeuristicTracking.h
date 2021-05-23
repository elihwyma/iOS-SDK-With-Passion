/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARCoachingHeuristic.h>

@interface ARCoachingHeuristicTracking : ARCoachingHeuristic

{
    long long _requirements;
}

- (long long)requirements;
- (void)updateWithFrame:(id)arg1;
- (_Bool)satisfied;

@end
