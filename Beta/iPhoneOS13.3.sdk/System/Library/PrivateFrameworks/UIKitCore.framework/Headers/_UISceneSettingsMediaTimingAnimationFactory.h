/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CAMediaTimingFunction, NSString;

__attribute__((visibility("hidden")))
@interface _UISceneSettingsMediaTimingAnimationFactory : NSObject

{
    CAMediaTimingFunction *__timingFunctionForAnimation;
}

@property (retain, nonatomic, getter=_timingFunctionForAnimation) CAMediaTimingFunction *_timingFunctionForAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (_Bool)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;

@end
