/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatesFeedbackGeneratorConfiguration.h>

@interface _UIStatesFeedbackGeneratorPreviewConfiguration : _UIStatesFeedbackGeneratorConfiguration

+ (id)defaultConfiguration;
+ (id)revealState;
+ (id)previewState;
+ (id)commitState;
+ (id)cancelState;

- (long long)requiredSupportLevel;
- (_Bool)defaultEnabled;

@end
