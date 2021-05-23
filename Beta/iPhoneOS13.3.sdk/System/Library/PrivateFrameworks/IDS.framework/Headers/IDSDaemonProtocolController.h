/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class IDSGroupContextNotifyingObserver, NSXPCConnection;

@protocol IDSGroupContextCacheMiddlewareDaemonProtocol, IDSGroupContextDataSourceDaemonProtocol;

@interface IDSDaemonProtocolController : NSObject

{
    NSXPCConnection *_connection;
    IDSGroupContextNotifyingObserver *_observer;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic, readonly) id <IDSGroupContextDataSourceDaemonProtocol> groupContextDataSource;
@property (nonatomic, readonly) id <IDSGroupContextCacheMiddlewareDaemonProtocol> groupContextCacheMiddleware;
@property (retain, nonatomic) IDSGroupContextNotifyingObserver *observer;

+ (id)sharedInstance;

- (id)init;

@end
