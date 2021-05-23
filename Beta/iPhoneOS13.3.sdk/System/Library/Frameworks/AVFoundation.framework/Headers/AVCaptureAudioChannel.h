/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject

{
    AVCaptureAudioChannelInternal *_internal;
    _Bool _enabled;
    float _volume;
}

@property (nonatomic, readonly) float averagePowerLevel;
@property (nonatomic, readonly) float peakHoldLevel;
@property (nonatomic) float volume;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (void)dealloc;
- (void)invalidate;
- (id)initWithConnection:(id)arg1;

@end
