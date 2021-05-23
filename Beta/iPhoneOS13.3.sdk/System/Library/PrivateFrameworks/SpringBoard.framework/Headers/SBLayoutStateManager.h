/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBLayoutStateManager : NSObject

+ (id)_initialLayoutState;
+ (Class)_layoutStateClass;

- (id)layoutStateForApplicationTransitionContext:(id)arg1;
- (id)_layoutStateForApplicationTransitionContext:(id)arg1;

@end
