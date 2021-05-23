/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol UIIntervalAnimating, UIViewAnimationComposing;

__attribute__((visibility("hidden")))
@interface _UIViewAnimationWithComposerWrapper : NSObject

{
    id <UIIntervalAnimating> _animation;
    id <UIViewAnimationComposing> _composer;
}

@property (retain, nonatomic) id <UIIntervalAnimating> animation;
@property (retain, nonatomic) id <UIViewAnimationComposing> composer;

+ (id)instanceWithAnimation:(id)arg1 composer:(id)arg2;

@end
