/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CABasicAnimation;

__attribute__((visibility("hidden")))
@interface _UIViewKeyValueAnimationFactoryTransition : NSObject

{
    CABasicAnimation *_fromAnimation;
    CABasicAnimation *_toAnimation;
}

@property (retain, nonatomic) CABasicAnimation *fromAnimation;
@property (retain, nonatomic) CABasicAnimation *toAnimation;

@end
