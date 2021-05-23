/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSData;

@protocol OS_xpc_object;

@interface CSAudioChunk : NSObject

{
    NSData *_data;
    unsigned long long _numChannels;
    unsigned long long _numSamples;
    unsigned long long _sampleByteDepth;
    unsigned long long _startSampleCount;
    unsigned long long _hostTime;
    NSData *_remoteVAD;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned long long numChannels;
@property (nonatomic, readonly) unsigned long long numSamples;
@property (nonatomic, readonly) unsigned long long sampleByteDepth;
@property (nonatomic, readonly) unsigned long long startSampleCount;
@property (nonatomic, readonly) unsigned long long hostTime;
@property (nonatomic, readonly) _Bool remoteVADAvailable;
@property (retain, nonatomic) NSData *remoteVAD;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcObject;

- (id)initWithXPCObject:(id)arg1;
- (id)dataForChannel:(unsigned long long)arg1;
- (id)subChunkFrom:(unsigned long long)arg1 numSamples:(unsigned long long)arg2;
- (id)dataWithRemoteVADWithScaleFactor:(float)arg1 numAudioSamplesPerRemoteVAD:(unsigned long long)arg2;
- (void)skipSamplesAtStartSuchThatNumSamplesReceivedSoFar:(unsigned long long)arg1 reachesACountOf:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithData:(id)arg1 numChannels:(unsigned long long)arg2 numSamples:(unsigned long long)arg3 sampleByteDepth:(unsigned long long)arg4 startSampleCount:(unsigned long long)arg5 hostTime:(unsigned long long)arg6 remoteVAD:(id)arg7;
- (id)subChunkFrom:(unsigned long long)arg1 numSamples:(unsigned long long)arg2 forChannel:(unsigned long long)arg3;
- (void)splitAudioChunkSuchThatNumSamplesReceivedSoFar:(unsigned long long)arg1 reachesACountOf:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_fidesRecordInfo;

@end
