/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@interface CACUserAttentionSignalProviderFactory : NSObject

{
    double _samplingInterval;
    double _attentionLossTimeout;
    unsigned long long _supportedAttentionAwarenessEvents;
}

+ (id)_attentionAwarenessConfigurationWithIdentifier:(id)arg1 eventMask:(unsigned long long)arg2 samplingInterval:(double)arg3 attentionLossTimeout:(double)arg4;

- (id)wakeGestureManager;
- (unsigned long long)_faceAttentionAwarenessEventMask;
- (unsigned long long)_touchAttentionAwarenessEventMask;
- (id)initWithSamplingInterval:(double)arg1 attentionLossTimeout:(double)arg2 supportedAttentionAwarenessEvents:(unsigned long long)arg3;
- (id)faceAttentionAwarenessClient;
- (id)touchAttentionAwarenessClient;

@end
