/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class NSMapTable, NSString, NSXPCListener, TKToken;

__attribute__((visibility("hidden")))
@interface TKTokenConnection : NSObject

{
    TKToken *_token;
    NSXPCListener *_listener;
    NSMapTable *_sessions;
    id _initialKeepAlive;
}

@property (nonatomic, readonly) TKToken *token;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (nonatomic, readonly) NSMapTable *sessions;
@property (retain, nonatomic) id initialKeepAlive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithToken:(id)arg1;

@end
