/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMCameraSource.h>

@class _HMCameraStream;

@interface HMCameraStream : HMCameraSource

{
    _HMCameraStream *_stream;
}

@property (retain, nonatomic) _HMCameraStream *stream;
@property (nonatomic, readonly) unsigned long long audioStreamSetting;

- (id)initWithStream:(id)arg1;
- (id)audioVolume;
- (void)setAudioStreamSetting:(unsigned long long)arg1;
- (void)updateAudioVolume:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
