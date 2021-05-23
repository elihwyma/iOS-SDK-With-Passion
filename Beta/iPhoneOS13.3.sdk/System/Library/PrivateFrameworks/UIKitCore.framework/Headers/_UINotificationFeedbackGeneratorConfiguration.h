/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@class NSDictionary;

@interface _UINotificationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration

{
    _Bool _includePrivateEvents;
    NSDictionary *_feedbacks;
}

@property (nonatomic) _Bool includePrivateEvents;
@property (retain, nonatomic) NSDictionary *feedbacks;

+ (id)defaultConfiguration;
+ (id)privateConfiguration;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)feedbackKeyPaths;
- (_Bool)defaultEnabled;

@end
