/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSPointerArray;

__attribute__((visibility("hidden")))
@interface VCAudioRedBuilder : NSObject

{
    int _redPayloadType;
    unsigned int _sampleRate;
    unsigned int _numPayloads;
    unsigned int _maxDelay;
    _Bool _includeSequenceOffset;
    struct tagVCAudioRedPayload _latestPrimaryPayload;
    NSPointerArray *_selectedRedPayloads;
    struct tagVCAudioRedPayload _redPayloadToSend;
    unsigned char _redPayloadBufferToSend[1472];
    struct tagVCAudioRedPayload _payloadHistory[9];
    unsigned int _payloadHistoryCount;
    char *_payloadBufferHistory;
    int _payloadBufferHistoryIndex;
}

@property (nonatomic) unsigned int numPayloads;
@property (nonatomic) unsigned int maxDelay;
@property (nonatomic, readonly) int redPayloadType;

+ (unsigned int)redOverheadForNumPayloads:(unsigned int)arg1;

- (void)dealloc;
- (id)redPayloadDescription:(struct tagVCAudioRedPayload *)arg1;
- (id)redundantPayloadsDescription:(id)arg1;
- (char *)resetOutputPayload:(struct tagVCAudioRedPayload *)arg1;
- (unsigned int)timestampOffsetFor20msBlocks:(int)arg1;
- (_Bool)isPayloadTimestampWithinThreshold:(struct tagVCAudioRedPayload *)arg1 forTimestamp:(unsigned int)arg2;
- (struct tagVCAudioRedPayload *)nearestRedPayloadForTimestamp:(unsigned int)arg1;
- (_Bool)redundantPayloads:(id)arg1 containsPointer:(void *)arg2;
- (id)selectRedPayloadsForPrimaryPayload:(struct tagVCAudioRedPayload *)arg1;
- (struct tagVCAudioRedPayload *)buildRedPayloadWithPrimaryPayload:(struct tagVCAudioRedPayload *)arg1 redPayloads:(id)arg2;
- (id)payloadHistoryDescription;
- (struct tagVCAudioRedPayload *)redPayloadForPrimaryPayload:(struct tagVCAudioRedPayload *)arg1;
- (void)updatePayloadHistory:(struct tagVCAudioRedPayload *)arg1;
- (id)initWithRedPayloadType:(int)arg1 sampleRate:(unsigned int)arg2 numPayloads:(unsigned int)arg3 maxDelay:(unsigned int)arg4 includeSequenceOffset:(_Bool)arg5;
- (struct tagVCAudioRedPayload *)getPrimaryPayloadWithBuffer:(char *)arg1 length:(int)arg2 payloadType:(int)arg3 timestamp:(unsigned int)arg4 priority:(unsigned char)arg5;

@end
