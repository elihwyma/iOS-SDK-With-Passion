/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSXPCConnection;

@interface ASDRequestBroker : NSObject

{
    NSMutableDictionary *_activeRequests;
    NSXPCConnection *_connection;
}

@property (readonly) NSMutableDictionary *activeRequests;
@property (retain) NSXPCConnection *connection;

+ (id)interface;

- (id)init;
- (id)description;
- (void)markRequestAsComplete:(id)arg1;
- (void)markRequestAsActive:(id)arg1;
- (void)cancelAllRequestsWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)submitRequest:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (void)_startConnection;

@end
