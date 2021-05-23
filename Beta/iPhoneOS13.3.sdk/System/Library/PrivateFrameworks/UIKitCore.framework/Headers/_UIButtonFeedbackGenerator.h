/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UIButtonFeedbackGeneratorConfiguration;

@interface _UIButtonFeedbackGenerator : UIFeedbackGenerator

@property (nonatomic, readonly, getter=_buttonConfiguration) _UIButtonFeedbackGeneratorConfiguration *buttonConfiguration;

+ (Class)_configurationClass;

- (id)initWithStyle:(long long)arg1;
- (void)userInteractionStarted;
- (void)userInteractionEnded;
- (void)userInteractionCancelled;
- (id)_stats_key;
- (id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2;

@end
