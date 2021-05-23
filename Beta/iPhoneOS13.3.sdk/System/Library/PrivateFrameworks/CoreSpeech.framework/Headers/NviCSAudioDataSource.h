/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAudioStream, NSHashTable, NSString, NviContext;

@protocol OS_dispatch_queue;

@interface NviCSAudioDataSource : NSObject

{
    NviContext *_nviCtx;
    NSHashTable *_receivers;
    CSAudioStream *_audioStream;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NviContext *nviCtx;
@property (retain, nonatomic) NSHashTable *receivers;
@property (retain, nonatomic) CSAudioStream *audioStream;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned long long sampleRate;
@property (nonatomic, readonly) unsigned long long numBytesPerSample;

- (id)init;
- (void)addReceiver:(id)arg1;
- (void)removeReceiver:(id)arg1;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)startWithNviContext:(id)arg1 didStartHandler:(CDUnknownBlockType)arg2;
- (void)stopWithDidStopHandler:(CDUnknownBlockType)arg1;
- (void)_createAudioStreamWithCurrentNviContext;
- (void)audioStreamProvider:(id)arg1 avBufferAvailable:(id)arg2;

@end
