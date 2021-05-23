/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UIImpactFeedbackGeneratorConfiguration;

@interface UIImpactFeedbackGenerator : UIFeedbackGenerator

{
    long long _style;
}

@property (nonatomic, readonly, getter=_impactConfiguration) _UIImpactFeedbackGeneratorConfiguration *impactConfiguration;

+ (Class)_configurationClass;

- (id)initWithStyle:(long long)arg1;
- (void)_impactOccurredWithIntensity:(double)arg1;
- (id)_ui_descriptionBuilder;
- (id)_stats_key;
- (id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2;
- (id)_styleString;
- (void)impactOccurred;
- (void)impactOccurredWithIntensity:(double)arg1;

@end
