/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface _UICoreUIEffectViewEntry : _UIVisualEffectViewEntry

{
    CALayer *_materialLayer;
}

@property (retain, nonatomic) CALayer *materialLayer;

- (void)removeEffectFromView:(id)arg1;
- (_Bool)canTransitionToEffect:(id)arg1;
- (_Bool)shouldAnimateProperty:(id)arg1;
- (void)addEffectToView:(id)arg1;
- (_Bool)isSameTypeOfEffect:(id)arg1;

@end
