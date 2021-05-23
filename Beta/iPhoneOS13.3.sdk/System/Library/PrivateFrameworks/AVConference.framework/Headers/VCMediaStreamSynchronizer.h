/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCMediaStreamSynchronizer : NSObject

{
    struct tagVCMediaStreamSyncTime _source;
    struct tagVCMediaStreamSyncTime _destination;
    unsigned int _destinationPlayoutSampleRTPTimestamp;
    int _destinationRTPTimestampWraps;
    double _sourcePlayoutSampleSystemTime;
    unsigned int _sourcePlayoutSampleRTPTimestamp;
    int _sourceRTPTimestampWraps;
    int _sourceState;
    NSObject<OS_dispatch_queue> *_mediaStreamSynchronizerQueue;
    struct tagHANDLE *_videoPlayerHandle;
    CDUnknownBlockType _destinationHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)differenceBetweenRtpTimestamp:(unsigned int)arg1 rtpTimestamp:(unsigned int)arg2;

- (void)dealloc;
- (void)updateSourceState:(int)arg1;
- (void)updateSourceNTPTime:(double)arg1 withRTPTimeStamp:(unsigned int)arg2;
- (void)updateSourcePlayoutSampleRTPTimestamp:(unsigned int)arg1 systemTime:(double)arg2 uuid:(id)arg3;
- (id)initWithSourceSampleRate:(unsigned int)arg1 destinationSampleRate:(unsigned int)arg2;
- (void)setDestinationAlarmHandler:(CDUnknownBlockType)arg1;
- (void)updateDestinationNTPTime:(double)arg1 withRTPTimeStamp:(unsigned int)arg2;
- (void)scheduleDestinationPlaybackWithRTPTimestamp:(unsigned int)arg1;
- (double)sourceTimeForDestinationRTPTimestamp:(unsigned int)arg1;
- (void)callDestinationAlarmHandlerWithTimestamp:(unsigned int)arg1 isClosing:(_Bool)arg2;
- (CDStruct_1b6d18a9)calculatePlayoutTimeWithRTPTimestamp:(unsigned int)arg1;

@end
