/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSError, NSMutableDictionary, NSString;

@protocol CDXClientDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CDXClient : NSObject

{
    id <CDXClientDelegate> delegate_;
    long long holePunchAttemptCount_;
    NSData *preblob_;
    NSMutableDictionary *sessionLookup_;
    NSError *error_;
    int fd_;
    unsigned long long holePunchSID_;
    unsigned long long prevHolePunchSID_;
    NSString *server_;
    unsigned short port_;
    unsigned short localPort_;
    long long restartCount_;
    struct sockaddr_in cdxaddr_ipv4;
    struct addrinfo *cdxMappedIPv4Addr;
    double holePunchInterval_;
    _Bool preblobIsUpToDate_;
    _Bool willReconfigureShortly_;
    struct __SCDynamicStore *scDynamicStore_;
    struct __CFRunLoopSource *scDynamicStoreRunLoopSource_;
    NSObject<OS_dispatch_queue> *queue_;
    NSObject<OS_dispatch_source> *source_;
    NSObject<OS_dispatch_source> *holePunchTimer_;
    CDUnknownBlockType preblobCallback_;
    void *padding_[10];
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) CDUnknownBlockType preblobCallback;
@property (nonatomic) id <CDXClientDelegate> delegate;
@property (readonly) NSData *preblob;
@property (nonatomic, readonly) NSError *error;

+ (id)sharedClient;

- (void)dealloc;
- (void)invalidate;
- (void)start;
- (void)setError:(id)arg1;
- (void)restart;
- (void)networkDidChange;
- (id)initWithOptions:(id)arg1 delegate:(id)arg2;
- (void)invalidateSession:(id)arg1;
- (_Bool)sendRaw:(id)arg1;
- (void)stopListeningOnSockets;
- (void)stopHolePunchTimer;
- (const struct sockaddr *)currentSockAddr;
- (unsigned char)currentSockAddrLen;
- (void)sendHolePunch;
- (void)setPreblob:(id)arg1;
- (void)resetHolepunchTimer;
- (void)handleFDEvent;
- (void)mapIPv4AddrToIPv6:(struct sockaddr_in *)arg1;
- (void)startListeningOnSockets;
- (_Bool)handleHolePunchEvent;
- (id)createSessionWithTicket:(id)arg1 sessionKey:(id)arg2;

@end
