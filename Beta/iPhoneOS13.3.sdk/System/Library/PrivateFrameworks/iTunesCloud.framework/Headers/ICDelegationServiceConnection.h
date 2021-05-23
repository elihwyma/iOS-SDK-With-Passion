/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICDelegationServicePairingSession, ICDelegationServiceSecuritySettings, MSVMessageParser, MSVStreamReader, MSVStreamWriter, NSMutableDictionary, NSString;

@protocol ICDelegationServiceConnectionDelegate, OS_dispatch_queue;

@interface ICDelegationServiceConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    id <ICDelegationServiceConnectionDelegate> _delegate;
    _Bool _isPaired;
    _Bool _isStarted;
    MSVMessageParser *_messageParser;
    unsigned int _nextRequestID;
    ICDelegationServicePairingSession *_pairingSession;
    NSMutableDictionary *_pendingRequestIDToRequestContext;
    MSVStreamReader *_streamReader;
    NSObject<OS_dispatch_queue> *_streamReaderQueue;
    MSVStreamWriter *_streamWriter;
    NSObject<OS_dispatch_queue> *_streamWriterQueue;
    long long _connectionRole;
    ICDelegationServiceSecuritySettings *_securitySettings;
}

@property (weak, nonatomic) id <ICDelegationServiceConnectionDelegate> delegate;
@property (nonatomic, readonly) long long connectionRole;
@property (nonatomic, readonly) ICDelegationServiceSecuritySettings *securitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)parser:(id)arg1 didParseMessage:(id)arg2;
- (void)_streamEncounteredError:(id)arg1;
- (void)_streamDidClose;
- (void)_streamDidParseMessage:(id)arg1;
- (void)_sendRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_sendResponse:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (unsigned int)_nextRequestUniqueID;
- (void)_sendMessage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_finishPendingRequestsWithError:(id)arg1;
- (void)delegationServicePairingSession:(id)arg1 sendData:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)initWithConnectionRole:(long long)arg1 inputStream:(id)arg2 outputStream:(id)arg3 securitySettings:(id)arg4;
- (void)sendResponse:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end
