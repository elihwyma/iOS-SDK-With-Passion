/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class IDSDataChannelLinkContext, IDSDatagramChannel, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VCDatagramChannelIDS

{
    unsigned int _token;
    IDSDatagramChannel *_idsChannel;
    NSString *_destination;
    int _driverSocket;
    CDUnknownBlockType _eventHandler;
}

@property (readonly) NSArray *connectedLinks;
@property (readonly) IDSDataChannelLinkContext *defaultLink;
@property (readonly) unsigned int token;
@property (readonly) NSString *destination;

- (void)dealloc;
- (void)invalidate;
- (int)start;
- (void)setEventHandler:(CDUnknownBlockType)arg1;
- (void)setReadHandler:(CDUnknownBlockType)arg1;
- (void)osChannelInfoLog;
- (void)setChannelPreferences:(id)arg1;
- (void)writeDatagrams:(const void **)arg1 datagramsSize:(unsigned int *)arg2 datagramsInfo:(CDStruct_54fea20c *)arg3 datagramsCount:(int)arg4 options:(struct **)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(CDStruct_54fea20c)arg3 options:(CDStruct_c3727dd2 *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)readyToRead;
- (void)setWiFiAssist:(_Bool)arg1;
- (void)requestSessionInfoWithOptions:(id)arg1;
- (id)initWithSocketDescriptor:(int)arg1 token:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithDestination:(id)arg1 token:(unsigned int)arg2 error:(id *)arg3;
- (id)datagramChannelWithDestination:(id)arg1 error:(id *)arg2;
- (id)sharedIDSService;
- (int)setupDriverSocket;
- (void)optInStreamIDs:(id)arg1;
- (void)optOutStreamIDs:(id)arg1;

@end
