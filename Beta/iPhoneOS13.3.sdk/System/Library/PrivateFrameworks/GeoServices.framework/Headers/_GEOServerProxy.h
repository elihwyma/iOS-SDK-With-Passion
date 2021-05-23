/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOServer;

__attribute__((visibility("hidden")))
@interface _GEOServerProxy : NSObject

{
    Class _serverClass;
    GEOServer *_server;
}

@property (nonatomic, readonly) Class serverClass;
@property (nonatomic, readonly) GEOServer *server;

+ (id)proxyForServer:(id)arg1 daemon:(id)arg2;
+ (id)proxyForClass:(Class)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)startServerWithDaemon:(id)arg1;
- (_Bool)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2;
- (void)_setServer:(id)arg1 daemon:(id)arg2;
- (_Bool)isEqualToServerProxy:(id)arg1;

@end
