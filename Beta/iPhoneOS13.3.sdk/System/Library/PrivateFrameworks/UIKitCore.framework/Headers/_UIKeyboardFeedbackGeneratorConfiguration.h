/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@class NSDictionary;

@interface _UIKeyboardFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration

{
    NSDictionary *_feedbacks;
    double _slowTypingTime;
    double _fastTypingTime;
    double _fastTypingVolumeMultiplier;
}

@property (retain, nonatomic) NSDictionary *feedbacks;
@property (nonatomic) double slowTypingTime;
@property (nonatomic) double fastTypingTime;
@property (nonatomic) double fastTypingVolumeMultiplier;

+ (id)defaultConfiguration;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)feedbackKeyPaths;
- (long long)requiredSupportLevel;
- (_Bool)defaultEnabled;

@end
