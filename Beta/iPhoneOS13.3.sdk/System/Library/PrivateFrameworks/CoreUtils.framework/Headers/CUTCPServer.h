/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUBonjourAdvertiser, CUNetLinkManager, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUTCPServer : NSObject

{
    struct NSMutableSet *_connections;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSObject<OS_dispatch_source> *_listenerSourceV4;
    NSObject<OS_dispatch_source> *_listenerSourceV6;
    struct LogCategory *_ucat;
    unsigned int _flags;
    unsigned int _maxConnectionCount;
    int _tcpListenPort;
    int _tcpListeningPort;
    CUBonjourAdvertiser *_bonjourAdvertiser;
    CDUnknownBlockType _connectionAcceptHandler;
    CDUnknownBlockType _connectionStartedHandler;
    CDUnknownBlockType _connectionEndedHandler;
    CDUnknownBlockType _connectionPrepareHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CUNetLinkManager *_netLinkManager;
    CDUnion_fab80606 _interfaceAddress;
}

@property (retain, nonatomic) CUBonjourAdvertiser *bonjourAdvertiser;
@property (copy, nonatomic) CDUnknownBlockType connectionAcceptHandler;
@property (copy, nonatomic) CDUnknownBlockType connectionStartedHandler;
@property (copy, nonatomic) CDUnknownBlockType connectionEndedHandler;
@property (copy, nonatomic) CDUnknownBlockType connectionPrepareHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (nonatomic) CDUnion_fab80606 interfaceAddress;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned int maxConnectionCount;
@property (retain, nonatomic) CUNetLinkManager *netLinkManager;
@property (nonatomic) int tcpListenPort;
@property (nonatomic) int tcpListeningPort;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (id)detailedDescription;
- (_Bool)activateDirectAndReturnError:(id *)arg1;
- (void)_handleConnectionAccept:(int)arg1;
- (void)_handleConnectionInvalidated:(id)arg1 addr:(const CDUnion_fab80606 *)arg2;

@end
