/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARCoachingState.h>

@class ARCoachingHeuristicCollection;

@interface ARCoachingStateRelocalizing : ARCoachingState

{
    ARCoachingState *_nextState;
    ARCoachingHeuristicCollection *_heuristics;
}

- (long long)requirements;
- (id)initWithView:(id)arg1;
- (void)enter;
- (id)doAction:(long long)arg1;

@end
