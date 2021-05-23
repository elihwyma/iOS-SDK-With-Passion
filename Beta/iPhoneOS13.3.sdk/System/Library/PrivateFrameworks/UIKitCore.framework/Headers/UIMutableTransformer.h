/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITransformer.h>

@protocol UIMutableTransformerDelegate;

@interface UIMutableTransformer : UITransformer

{
    id <UIMutableTransformerDelegate> _delegate;
}

@property (weak, nonatomic, setter=_setDelegate:) id <UIMutableTransformerDelegate> _delegate;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_ensureTransformsStructuresExists;
- (void)_updateTransform;
- (void)addTransform:(id)arg1 reason:(id)arg2;
- (void)replaceTransform:(id)arg1 withTransform:(id)arg2 reason:(id)arg3;
- (void)removeTransform:(id)arg1;
- (void)removeAll;

@end
