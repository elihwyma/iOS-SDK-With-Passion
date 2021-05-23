/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CAAnimation, CALayer, NSString;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCycleLayerAnimation : NSObject

{
    CALayer *_layer;
    CAAnimation *_animation;
    CAAnimation *_originalAnimation;
    NSString *_key;
}

@property (retain, nonatomic) CALayer *layer;
@property (retain, nonatomic) CAAnimation *animation;
@property (retain, nonatomic) CAAnimation *originalAnimation;
@property (copy, nonatomic) NSString *key;

+ (id)cycleAnimationWithLayer:(id)arg1 animation:(id)arg2 key:(id)arg3;

- (id)description;

@end
