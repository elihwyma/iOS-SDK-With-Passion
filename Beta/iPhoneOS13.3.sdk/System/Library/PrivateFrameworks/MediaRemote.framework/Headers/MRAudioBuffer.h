/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class AVAudioCompressedBuffer, NSDictionary;

@interface MRAudioBuffer : NSObject

{
    AVAudioCompressedBuffer *_buffer;
    NSDictionary *_formatSettings;
}

@property (nonatomic, readonly) AVAudioCompressedBuffer *buffer;
@property (nonatomic, readonly) NSDictionary *formatSettings;

- (id)initWithFormatSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maximumPacketSize:(unsigned long long)arg3;

@end
