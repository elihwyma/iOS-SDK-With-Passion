/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIMotionEffect, UIView;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEngineClient : NSObject

{
    UIMotionEffect *_effect;
    UIView *_view;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithMotionEffect:(id)arg1 view:(id)arg2;

@end
