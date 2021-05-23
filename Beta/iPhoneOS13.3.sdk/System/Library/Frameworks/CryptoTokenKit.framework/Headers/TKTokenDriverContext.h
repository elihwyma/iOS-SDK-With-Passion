/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <CryptoTokenKit/TKTokenBaseContext.h>

@class NSString, NSXPCConnection, TKTokenDriver;

__attribute__((visibility("hidden")))
@interface TKTokenDriverContext : TKTokenBaseContext

{
    NSXPCConnection *_configurationConnection;
    id _initialKeepAlive;
    TKTokenDriver *_driver;
}

@property (nonatomic, readonly) TKTokenDriver *driver;
@property (nonatomic, readonly) double idleTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setup;
- (id)configurationForTokenID:(id)arg1;
- (id)configurationProxy;
- (void)auditAuthOperation:(id)arg1 auditToken:(CDStruct_6ad76789)arg2 success:(_Bool)arg3;
- (void)acquireTokenWithInstanceID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)acquireTokenWithSlot:(id)arg1 AID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)configureWithReply:(CDUnknownBlockType)arg1;
- (void)releaseTokenWithInstanceID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)startRequestWithError:(id *)arg1;

@end
