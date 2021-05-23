/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, _UIFeedbackParameters;

__attribute__((visibility("hidden")))
@interface _UIFeedbackData : NSObject

{
    unsigned int _effectiveSystemSoundID;
    unsigned long long _effectiveEventType;
    double _effectiveDelay;
    _UIFeedbackParameters *_hapticParameters;
    _UIFeedbackParameters *_audioParameters;
    unsigned long long _effectiveEnabledFeedbackTypes;
}

@property (nonatomic, setter=_setEffectiveEventType:) unsigned long long effectiveEventType;
@property (nonatomic, setter=_setEffectiveDelay:) double effectiveDelay;
@property (retain, nonatomic, setter=_setHapticParameters:) _UIFeedbackParameters *hapticParameters;
@property (retain, nonatomic, setter=_setAudioParameters:) _UIFeedbackParameters *audioParameters;
@property (nonatomic, setter=_setEffectiveEnabledFeedbackTypes:) unsigned long long effectiveEnabledFeedbackTypes;
@property (nonatomic, setter=_setEffectiveSystemSoundID:) unsigned int effectiveSystemSoundID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
