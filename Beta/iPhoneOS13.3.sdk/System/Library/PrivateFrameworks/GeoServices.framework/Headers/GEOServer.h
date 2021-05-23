/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEODaemon;

@interface GEOServer : NSObject

{
    GEODaemon *_daemon;
}

@property (weak, nonatomic) GEODaemon *daemon;

+ (id)identifier;
+ (_Bool)canHandleIncomingMessage:(id)arg1;
+ (_Bool)shouldStartImmediately;
+ (Class)peerClass;
+ (_Bool)usesModernRequestReply;
+ (Class)requestClassForMethod:(id)arg1;

- (id)description;
- (void)handleRequest:(id)arg1;
- (void)peerDidConnect:(id)arg1;
- (void)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2;
- (void)peerDidDisconnect:(id)arg1;

@end
