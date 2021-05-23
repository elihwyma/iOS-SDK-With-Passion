/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol NWRemoteConnectionDirectorDelegate;

@interface NWRemoteConnectionDirector : NSObject

{
    unsigned long long _maximumDataChunkSize;
    NSObject<NWRemoteConnectionDirectorDelegate> *_delegate;
    struct nw_protocol *_directorProtocol;
    struct nw_protocol *_defaultOutputHandler;
    struct nw_hash_table *_protocolHashTable;
    NSMutableArray *_writeRequests;
}

@property (weak) NSObject<NWRemoteConnectionDirectorDelegate> *delegate;
@property struct nw_protocol *directorProtocol;
@property struct nw_protocol *defaultOutputHandler;
@property struct nw_hash_table *protocolHashTable;
@property (retain) NSMutableArray *writeRequests;
@property (nonatomic, readonly) struct nw_protocol *protocol;
@property (nonatomic) unsigned long long maximumDataChunkSize;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)setDefaultOutputProtocolHandler:(struct nw_protocol *)arg1;
- (id)createOpenConnectionMessageForClientID:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
- (id)createCloseConnectionMessageForClientID:(id)arg1;
- (id)createStartBrowseMessageForClientID:(id)arg1 descriptor:(id)arg2 parameters:(id)arg3;
- (id)createStopBrowseMessageForClientID:(id)arg1;
- (id)createSendDataMessageForClientID:(id)arg1 data:(id)arg2 receiveWindow:(unsigned int)arg3;
- (_Bool)receiveRemoteReply:(id)arg1;
- (unsigned long long)dataModeForFlowID:(id)arg1;
- (struct nw_protocol *)outputHandlerForFlowID:(id)arg1;
- (void)setOutputProtocolHandler:(struct nw_protocol *)arg1 forFlowID:(id)arg2 dataMode:(unsigned long long)arg3;
- (void)receiveData:(id)arg1 forClient:(id)arg2;

@end
