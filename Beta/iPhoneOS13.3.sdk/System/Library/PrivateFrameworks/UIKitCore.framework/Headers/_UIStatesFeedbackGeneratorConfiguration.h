/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@class NSDictionary, NSString;

@interface _UIStatesFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration

{
    NSDictionary *_stateChangeConfigurations;
    NSString *_initialState;
}

@property (retain, nonatomic) NSString *initialState;
@property (retain, nonatomic) NSDictionary *stateChangeConfigurations;

+ (id)keyFromState:(id)arg1 toState:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)feedbackKeyPaths;

@end
