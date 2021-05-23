/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UINotificationFeedbackGeneratorConfiguration;

@interface UINotificationFeedbackGenerator : UIFeedbackGenerator

@property (nonatomic, readonly, getter=_eventConfiguration) _UINotificationFeedbackGeneratorConfiguration *eventConfiguration;

+ (Class)_configurationClass;

- (void)notificationOccurred:(long long)arg1;
- (double)_preparationTimeoutForStyle:(long long)arg1;
- (id)_stats_key;
- (id)_categoryForType:(long long)arg1;
- (void)_playEventType:(long long)arg1;
- (void)_stopEventType:(long long)arg1;
- (void)_privateNotificationOccurred:(long long)arg1;
- (void)_privateNotificationInterrupted:(long long)arg1;

@end
