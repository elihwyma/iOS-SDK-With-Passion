/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSObject.h>

@class NSURL;

@protocol OS_dispatch_queue;

@interface RCExtAudioFilePipe : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _accessQueueID;
    struct OpaqueExtAudioFile *_audioFileRef;
    struct AudioStreamBasicDescription _outputFormatDescriptionStruct;
    struct AudioStreamBasicDescription _sourceFormatDescriptionStruct;
    NSURL *_sourceURL;
    unsigned long long _sourceFileSize;
}

@property (nonatomic, readonly) NSURL *sourceURL;
@property (nonatomic, readonly) struct AudioStreamBasicDescription *outputFormatDescription;
@property (nonatomic, readonly) struct AudioStreamBasicDescription *sourceFormatDescription;
@property (nonatomic, readonly) unsigned long long sourceFileSize;

- (void)dealloc;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)_accessExtAudioFileWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 outputFrameRate:(double)arg2 outputFormatID:(unsigned int)arg3;
- (long long)sourceFrameIndexForTime:(double)arg1;
- (_Bool)seekToSourceFrameIndex:(long long)arg1;
- (long long)sourceCurrentFrameIndex;
- (int)readConvertedFramesIntoBuffer:(id)arg1 requestedFrameCount:(int)arg2;

@end
