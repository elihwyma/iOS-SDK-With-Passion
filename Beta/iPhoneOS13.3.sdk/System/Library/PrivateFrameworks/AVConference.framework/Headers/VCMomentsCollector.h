/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString, VCMoments;

__attribute__((visibility("hidden")))
@interface VCMomentsCollector : NSObject

{
    long long _streamToken;
    VCMoments *_moments;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1;
- (void)stream:(id)arg1 addAudioSampleBuffer:(struct opaqueVCAudioBufferList *)arg2 timestamp:(unsigned int)arg3;
- (void)stream:(id)arg1 addVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 cameraStatusBits:(unsigned char)arg3 timestamp:(unsigned int)arg4;

@end
