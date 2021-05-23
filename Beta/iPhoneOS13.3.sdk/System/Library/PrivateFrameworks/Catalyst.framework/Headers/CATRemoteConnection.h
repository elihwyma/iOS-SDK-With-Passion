/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class CATHTTPMessageParser, CATRemoteConnectionSocketOptions, CATSerialOperationQueue, NSArray, NSError, NSInputStream, NSMutableArray, NSMutableData, NSOutputStream, NSString;

@protocol CATRemoteConnectionDelegate, OS_dispatch_source;

@interface CATRemoteConnection : NSObject

{
    CATHTTPMessageParser *mMessageParser;
    long long mState;
    NSMutableArray *mPendingSendContexts;
    NSObject<OS_dispatch_source> *mConnectionTimeoutTimer;
    NSError *mInterruptionError;
    NSMutableData *mReadBuffer;
    NSArray *mTrustedCertificates;
    long long mPeerTrustState;
    CATSerialOperationQueue *mStreamEventQueue;
    _Bool _usesSSL;
    id <CATRemoteConnectionDelegate> _delegate;
    NSString *_name;
    double _connectionTimeoutInterval;
    CATRemoteConnectionSocketOptions *_socketOptions;
    NSArray *_customTrustEvaluationPolicies;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    unsigned long long _bufferSize;
}

@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) NSOutputStream *outputStream;
@property (nonatomic) _Bool usesSSL;
@property (nonatomic) unsigned long long bufferSize;
@property (weak, nonatomic) id <CATRemoteConnectionDelegate> delegate;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) struct __SecTrust *peerTrust;
@property (nonatomic) double connectionTimeoutInterval;
@property (copy, nonatomic) CATRemoteConnectionSocketOptions *socketOptions;
@property (copy, nonatomic) NSArray *customTrustEvaluationPolicies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)createConnectionPairWithConnection:(id *)arg1 andConnection:(id *)arg2 bufferSize:(unsigned long long)arg3;
+ (void)createConnectionPairWithConnection:(id *)arg1 andConnection:(id *)arg2;

- (void)dealloc;
- (void)open;
- (void)close;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)initWithNetService:(id)arg1;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;
- (void)_stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)messageParser:(id)arg1 didParseRequestData:(id)arg2;
- (void)messageParser:(id)arg1 didParseResponseData:(id)arg2 moreComing:(_Bool)arg3;
- (void)messageParser:(id)arg1 didParseRequestWithURL:(id)arg2;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 bufferSize:(unsigned long long)arg3;
- (void)enqueueSendContext:(id)arg1;
- (_Bool)secureUsingIdentity:(struct __SecIdentity *)arg1 trustedCertificates:(id)arg2 isServer:(_Bool)arg3;
- (void)connectionDidInterruptWithError:(id)arg1;
- (void)connectionTimedOut;
- (void)unscheduleStreams;
- (void)sendDidFail:(id)arg1 withError:(id)arg2;
- (void)delegateDidClose;
- (void)delegateWillSecure;
- (int)applyCustomEvaluationPoliciesToTrust:(struct __SecTrust *)arg1;
- (void)delegateDidSecure;
- (void)connectionShouldSendData;
- (void)connectionDidReceiveData;
- (_Bool)trySendingDataWithContext:(id)arg1 error:(id *)arg2;
- (void)sendDidSucceed:(id)arg1;
- (void)delegateDidWriteDataForContextIfNeeded:(id)arg1;
- (void)delegateDidSendData:(id)arg1 userInfo:(id)arg2;
- (void)delegateDidSendDataWithStream:(id)arg1 userInfo:(id)arg2;
- (void)delegateDidFailToSendData:(id)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)delegateDidFailToSendDataWithStream:(id)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)delegateDidInterruptWithError:(id)arg1;
- (void)delegateDidWriteDataFromStream:(id)arg1 totalBytesWritten:(unsigned long long)arg2 totalBytesExpectedToWrite:(unsigned long long)arg3 userInfo:(id)arg4;
- (void)delegateDidReceiveData:(id)arg1;
- (void)delegateDidReceiveStreamData:(id)arg1 moreComing:(_Bool)arg2;
- (void)delegateDidReceiveDataRequestWithURL:(id)arg1;
- (void)configureStreamSocketOptions;
- (void)delegateDidOpen;
- (void)tryEvaluatingPeerTrustWithStream:(id)arg1;
- (void)sendData:(id)arg1 userInfo:(id)arg2;
- (void)sendDataWithStream:(id)arg1 length:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)secureUsingClientIdentity:(struct __SecIdentity *)arg1 trustedCertificates:(id)arg2;
- (void)secureUsingServerIdentity:(struct __SecIdentity *)arg1 trustedCertificates:(id)arg2;
- (void)scheduleStreams;
- (void)trustDecisionDidRespondWithDecisionToAllowUntrustedConnection:(_Bool)arg1;

@end
