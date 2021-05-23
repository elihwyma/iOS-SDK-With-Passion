/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _TVRCMRAudioBufferWrapper : NSObject

{
    void *_buffer;
    float _gain;
    double _sampleRate;
    double _timestamp;
}

@property (nonatomic) unsigned long long packetCount;
@property (nonatomic) double sampleRate;
@property (nonatomic) double timestamp;
@property (nonatomic) float gain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void *)audioBuffer;
- (void)writeAudioData:(void *)arg1 length:(unsigned long long)arg2;
- (void)writePacketDescriptions:(void *)arg1 length:(unsigned long long)arg2;
- (id)initWithSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maxPacketSize:(unsigned long long)arg3;

@end
