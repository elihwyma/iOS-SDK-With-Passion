/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARCoachingState.h>

@interface ARCoachingStateActivated : ARCoachingState

{
    ARCoachingState *_nextState;
}

- (void)enter;
- (id)doAction:(long long)arg1;

@end
