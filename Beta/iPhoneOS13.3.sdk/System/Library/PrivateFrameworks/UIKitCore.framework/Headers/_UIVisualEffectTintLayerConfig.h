/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIVisualEffectLayerConfig.h>

@class UIColor;

@interface _UIVisualEffectTintLayerConfig : _UIVisualEffectLayerConfig

{
    UIColor *_tintColor;
}

@property (nonatomic, readonly) UIColor *tintColor;

+ (id)layerWithTintColor:(id)arg1 filterType:(id)arg2;
+ (id)layerWithTintColor:(id)arg1;

- (id)description;
- (void)configureLayerView:(id)arg1;
- (void)deconfigureLayerView:(id)arg1;

@end
