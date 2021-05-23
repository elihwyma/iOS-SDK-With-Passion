/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARCoachingState.h>

@interface ARCoachingStateDeactivating : ARCoachingState

{
    ARCoachingState *_nextState;
}

- (void)enter;
- (_Bool)isViewActiveForState;
- (id)doAction:(long long)arg1;

@end
