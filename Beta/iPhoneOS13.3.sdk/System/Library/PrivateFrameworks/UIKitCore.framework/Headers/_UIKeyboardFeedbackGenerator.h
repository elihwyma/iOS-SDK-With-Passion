/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UIKeyboardFeedbackGeneratorConfiguration;

@interface _UIKeyboardFeedbackGenerator : UIFeedbackGenerator

{
    double _lastTypedKeyTimestamp;
}

@property (nonatomic, readonly, getter=_keyboardConfiguration) _UIKeyboardFeedbackGeneratorConfiguration *keyboardConfiguration;
@property (nonatomic, getter=_lastTypedKeyTimestamp, setter=_setLastTypedKeyTimestamp:) double lastTypedKeyTimestamp;

+ (Class)_configurationClass;

- (void)_activated;
- (double)_autoDeactivationTimeout;
- (id)_stats_key;
- (void)_playFeedbackForActionType:(long long)arg1 withCustomization:(CDUnknownBlockType)arg2;
- (float)scaleVolumeSlow:(float)arg1 fast:(float)arg2 timeSpan:(double)arg3;
- (id)_feedbackWithUpdatedVolume:(id)arg1;
- (void)actionOccurred:(long long)arg1;

@end
