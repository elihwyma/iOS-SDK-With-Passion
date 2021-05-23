/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewInProcessAnimationState.h>

@class _UICompoundObjectMap;

__attribute__((visibility("hidden")))
@interface UIViewPropertyCollectingAnimationState : UIViewInProcessAnimationState

{
    _UICompoundObjectMap *_capturedProperties;
}

@property (retain, nonatomic) _UICompoundObjectMap *capturedProperties;

- (id)init;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;

@end
