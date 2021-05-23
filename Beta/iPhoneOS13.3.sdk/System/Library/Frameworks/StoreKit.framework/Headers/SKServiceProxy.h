/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSLock, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface SKServiceProxy : NSObject

{
    NSLock *_serviceConnectionLock;
    NSXPCConnection *_serviceConnection;
}

+ (id)serviceProxy;
+ (id)inAppServiceInterface;
+ (id)inAppClientInterface;

- (id)init;
- (id)objectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_serviceConnectionInvalidated;
- (id)serviceConnection;
- (id)inAppServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)inAppService;

@end
