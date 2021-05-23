/*
 Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

#import <NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@protocol HTSHTTPServerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HTSHTTPServer : NSObject

{
    int _listenSocket4;
    NSMutableArray *_activeConnections;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_source> *_listenSource4;
    NSString *_nodename;
    unsigned long long _bytesWritten;
    double _lastReplenishTime;
    NSMutableDictionary *_authTokens;
    _Bool _digestAuthenticationEnabled;
    _Bool _pipeliningEnabled;
    unsigned short _port;
    int _cacheMaxAge;
    id <HTSHTTPServerDelegate> _delegate;
    double _latency;
    double _latencyStddev;
    double _kbps;
    double _bandwidthStddev;
    unsigned long long _totalBytesWritten;
    struct __CFHTTPMessage *_currentRequest;
    NSString *_documentRoot;
}

@property (nonatomic) struct __CFHTTPMessage *currentRequest;
@property (nonatomic) id <HTSHTTPServerDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) unsigned short port;
@property (nonatomic, readonly) NSString *urlString;
@property (copy, nonatomic) NSString *documentRoot;
@property (nonatomic) _Bool digestAuthenticationEnabled;
@property (nonatomic) double latency;
@property (nonatomic) double latencyStddev;
@property (nonatomic) double kbps;
@property (nonatomic) double bandwidthStddev;
@property (nonatomic) int cacheMaxAge;
@property (nonatomic) _Bool pipeliningEnabled;
@property (nonatomic, readonly) unsigned long long totalBytesWritten;

- (id)init;
- (void)dealloc;
- (_Bool)_listenOnPort:(unsigned short)arg1;
- (void)resetNetworkSetup;
- (id)initWithPort:(unsigned short)arg1 documentRoot:(id)arg2;
- (void)_cleanupListenSocket;
- (double)_currentLatency;
- (void)_handleGeneralRequest:(id)arg1 fromConnection:(id)arg2;
- (id)_mimeTypeForExtension:(id)arg1;
- (void)_returnResponse:(id)arg1 toConnection:(id)arg2 closeAfterSending:(_Bool)arg3;
- (id)_restrictedFilePathForRelativePath:(id)arg1;
- (void)_respondWithData:(id)arg1 mimeType:(id)arg2 toRequest:(id)arg3 connection:(id)arg4;
- (id)_authenticationResponseForRequest:(id)arg1;
- (void)_connectionComplete:(id)arg1;
- (void)_connection:(id)arg1 hadError:(id)arg2;
- (void)_connection:(id)arg1 didReceiveRequest:(id)arg2;
- (unsigned long long)availableBandwidth;
- (void)consumedBandwidth:(unsigned long long)arg1;

@end
