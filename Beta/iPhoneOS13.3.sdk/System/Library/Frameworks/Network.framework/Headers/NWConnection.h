/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSError, NWConcrete_nw_connection, NWEndpoint, NWParameters, NWPath;

@interface NWConnection : NSObject

{
    _Bool _internalIsViable;
    _Bool _internalHasBetterPath;
    long long _internalConnectionState;
    NSError *_internalError;
    NWPath *_internalPath;
    NWConcrete_nw_connection *_internalConnection;
}

@property long long internalConnectionState;
@property _Bool internalIsViable;
@property _Bool internalHasBetterPath;
@property (retain) NSError *internalError;
@property (retain) NWPath *internalPath;
@property (nonatomic, readonly) unsigned int tlsConnectionTime;
@property (retain, nonatomic) NWConcrete_nw_connection *internalConnection;
@property (nonatomic, readonly) NWPath *currentPath;
@property (nonatomic, readonly) NWEndpoint *endpoint;
@property (nonatomic, readonly) NWParameters *parameters;
@property (nonatomic, readonly) long long connectionState;
@property (nonatomic, readonly) NWEndpoint *connectedLocalEndpoint;
@property (nonatomic, readonly) NWEndpoint *connectedRemoteEndpoint;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly, getter=isViable) _Bool viable;
@property (nonatomic, readonly) _Bool hasBetterPath;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)connectionWithEndpoint:(id)arg1 parameters:(id)arg2;
+ (id)connectionWithConnectedSocket:(int)arg1;
+ (id)connectionWithInternalConnection:(id)arg1;

- (id)description;
- (void)cancel;
- (void)start;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (id)initWithInternalConnection:(id)arg1;
- (id)initWithConnectedSocket:(int)arg1;
- (int)getConnectedSocket;
- (void)forceCancel;
- (void)cancelCurrentEndpoint;
- (id)copyError;
- (id)copyCurrentPath;
- (void)dumpTimestamps;

@end
