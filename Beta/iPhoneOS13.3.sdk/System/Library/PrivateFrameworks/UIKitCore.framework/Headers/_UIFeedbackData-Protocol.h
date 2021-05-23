/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class _UIFeedbackParameters;

@protocol _UIFeedbackData <Swift>

@property (nonatomic, readonly) unsigned long long effectiveEventType;
@property (nonatomic, readonly) double effectiveDelay;
@property (nonatomic, readonly) _UIFeedbackParameters *hapticParameters;
@property (nonatomic, readonly) _UIFeedbackParameters *audioParameters;
@property (nonatomic, readonly) unsigned long long effectiveEnabledFeedbackTypes;
@property (nonatomic, readonly) unsigned int effectiveSystemSoundID;

@end
