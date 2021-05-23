/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRAVBufferedOutputStream.h>

@class AVOutputContext, AVOutputContextCommunicationChannel;

@interface MRAVOutputStream : MRAVBufferedOutputStream

{
    AVOutputContextCommunicationChannel *_communicationChannel;
    _Bool _channelOpen;
    _Bool _channelIsOpen;
    AVOutputContext *_outputContext;
    long long _connectionType;
}

@property (nonatomic) _Bool channelIsOpen;
@property (nonatomic, readonly) AVOutputContext *outputContext;
@property (nonatomic, readonly) AVOutputContextCommunicationChannel *communicationChannel;
@property (nonatomic, readonly, getter=isChannelOpen) _Bool channelOpen;
@property (nonatomic, readonly) long long connectionType;

- (void)dealloc;
- (id)description;
- (id)initWithURL:(id)arg1 append:(_Bool)arg2;
- (id)initToMemory;
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (_Bool)hasSpaceAvailable;
- (id)initWithOutputContext:(id)arg1 connectionType:(long long)arg2;
- (void)_outputContextDidCloseCommunicationChannelNotification:(id)arg1;
- (id)initWithCommunicationChannel:(id)arg1;

@end
