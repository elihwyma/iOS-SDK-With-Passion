/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface CCUIAnimationBatch : NSObject

{
    NSMutableDictionary *_animationsByParameters;
}

- (id)init;
- (void)addAnimation:(id)arg1;
- (void)iterateAnimationsWithBlock:(CDUnknownBlockType)arg1;
- (void)iterateAnimationsOfType:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
