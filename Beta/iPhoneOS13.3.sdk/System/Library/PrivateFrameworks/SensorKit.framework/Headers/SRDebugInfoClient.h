/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface SRDebugInfoClient : NSObject

{
    _Bool _connectionDidInterrupt;
    NSXPCConnection *_connection;
}

@property (retain) NSXPCConnection *connection;
@property _Bool connectionDidInterrupt;

+ (void)initialize;
+ (id)clientInterface;
+ (id)remoteInterface;
+ (id)connectionToDaemon;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)initWithConnection:(id)arg1;
- (void)setupConnection;
- (void)listClientsWithReply:(CDUnknownBlockType)arg1;

@end
