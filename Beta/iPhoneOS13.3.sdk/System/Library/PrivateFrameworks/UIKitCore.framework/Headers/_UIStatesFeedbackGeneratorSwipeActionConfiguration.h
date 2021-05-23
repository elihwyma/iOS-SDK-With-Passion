/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatesFeedbackGeneratorConfiguration.h>

@interface _UIStatesFeedbackGeneratorSwipeActionConfiguration : _UIStatesFeedbackGeneratorConfiguration

+ (id)defaultConfiguration;
+ (id)restingState;
+ (id)openState;
+ (id)confirmState;

- (long long)requiredSupportLevel;

@end
