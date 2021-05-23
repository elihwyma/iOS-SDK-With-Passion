/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARCoachingState.h>

@interface ARCoachingStateHidden : ARCoachingState

{
    double _autoActivateTime;
}

- (void)exit;
- (void)enter;
- (_Bool)isViewActiveForState;
- (id)doAction:(long long)arg1;

@end
