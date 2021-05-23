/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol RPBServing;

__attribute__((visibility("hidden")))
@interface RemoteRPBServer : NSObject

{
    unsigned int _serverID;
    NSXPCConnection *_xpcConnection;
    id <RPBServing> _proxyInterface;
}

@property unsigned int serverID;
@property (retain) NSXPCConnection *xpcConnection;
@property (retain) id <RPBServing> proxyInterface;

- (id)description;
- (id)initWithID:(unsigned int)arg1;

@end
