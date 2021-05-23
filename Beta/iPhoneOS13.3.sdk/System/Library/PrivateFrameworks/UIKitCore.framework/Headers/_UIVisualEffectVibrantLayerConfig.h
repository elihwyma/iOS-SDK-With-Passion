/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIVisualEffectLayerConfig.h>

@class NSDictionary, UIColor;

@interface _UIVisualEffectVibrantLayerConfig : _UIVisualEffectLayerConfig

{
    UIColor *_vibrantColor;
    UIColor *_tintColor;
    NSDictionary *_filterAttributes;
}

@property (nonatomic, readonly) UIColor *vibrantColor;
@property (nonatomic, readonly) UIColor *tintColor;
@property (copy, nonatomic, readonly) NSDictionary *filterAttributes;

+ (id)layerWithVibrantColor:(id)arg1 tintColor:(id)arg2 filterType:(id)arg3 filterAttributes:(id)arg4;
+ (id)layerWithVibrantColor:(id)arg1 tintColor:(id)arg2 filterType:(id)arg3;

- (id)description;
- (void)configureLayerView:(id)arg1;
- (void)deconfigureLayerView:(id)arg1;

@end
