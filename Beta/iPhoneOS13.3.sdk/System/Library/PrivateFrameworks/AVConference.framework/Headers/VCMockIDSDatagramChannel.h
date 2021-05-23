/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <IDS/IDSDatagramChannel.h>

@class NSLock, VCMockIDSDataChannelLinkContext;

__attribute__((visibility("hidden")))
@interface VCMockIDSDatagramChannel : IDSDatagramChannel

{
    VCMockIDSDataChannelLinkContext *_linkContext;
    CDUnknownBlockType _eventHandler;
    CDUnknownBlockType _readHandler;
    CDUnknownBlockType _readHandlerWithOptions;
    CDUnknownBlockType _writeDatagramsBlock;
    CDUnknownBlockType _writeDatagramBlock;
    CDUnknownBlockType _readyToReadBlock;
    NSLock *_blockSettingLock;
    struct _VCSingleLinkedList _datagramPackets;
    struct __CFAllocator *_datagramPacketAllocator;
    unsigned long long _datagramPacketNextSequenceNumber;
    _Bool _usingOptions;
    double _emulatedRxPLR;
}

- (void)invalidate;
- (void)start;
- (void)setEventHandler:(CDUnknownBlockType)arg1;
- (void)setReadHandler:(CDUnknownBlockType)arg1;
- (void)readDatagramWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)readDatagramsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)osChannelInfoLog;
- (void)setChannelPreferences:(id)arg1;
- (int)underlyingFileDescriptor;
- (void)writeDatagrams:(const void **)arg1 datagramsSize:(unsigned int *)arg2 datagramsInfo:(CDStruct_54fea20c *)arg3 datagramsCount:(int)arg4 options:(struct **)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 flags:(CDStruct_54fea20c)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(CDStruct_54fea20c)arg3 options:(CDStruct_c3727dd2 *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)setReadHandlerWithOptions:(CDUnknownBlockType)arg1;
- (int)readyToRead;
- (void)requestSessionInfoWithOptions:(id)arg1;
- (void)reportFirstPacketTimeForMKI:(id)arg1;
- (_Bool)enqueueDatagramPacket:(const void *)arg1 datagramSize:(unsigned int)arg2 options:(CDStruct_c3727dd2 *)arg3 error:(id *)arg4;
- (void)dequeueDatagramPacket:(CDUnknownBlockType)arg1;
- (void)readDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramOptions:(CDStruct_c3727dd2 *)arg3;
- (id)initRequiresOptions:(_Bool)arg1;
- (void)setWriteDatagramsBlock:(CDUnknownBlockType)arg1;
- (void)setWriteDatagramBlock:(CDUnknownBlockType)arg1;
- (void)setReadyToReadBlock:(CDUnknownBlockType)arg1;

@end
