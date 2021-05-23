/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray, NSString, VCAudioRedBuilder;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCTextTransmitter : NSObject

{
    struct _VCTextTransmitterConfiguration _config;
    double _txIntervalMin;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _startTime;
    VCAudioRedBuilder *_redBuilder;
    int _redPayloadType;
    int _currentPayloadType;
    _Bool _isIdle;
    NSLock *_textFramesSendQueueLock;
    NSMutableArray *_textFramesSendQueue;
    NSObject<OS_dispatch_source> *_heartbeat;
    double _idleDuration;
    unsigned int _emptyFramesToBeSent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (_Bool)start;
- (id)initWithConfiguration:(struct _VCTextTransmitterConfiguration *)arg1;
- (void)heartbeat;
- (void)sendText:(struct NSString *)arg1;
- (void)sendCharacter:(unsigned short)arg1;
- (unsigned int)getCharTimestampForSystemTime:(double)arg1;
- (void)updatePayloadHistory:(id)arg1 timestamp:(unsigned int)arg2 payloadType:(int *)arg3 payload:(char **)arg4 payloadLength:(int *)arg5;
- (_Bool)startHeartbeat;
- (void)stopHeartbeat;
- (void)sendTextFrameWithRedundancy:(id)arg1 marker:(int)arg2;

@end
