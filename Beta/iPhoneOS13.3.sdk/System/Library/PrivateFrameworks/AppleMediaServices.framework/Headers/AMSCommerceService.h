/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSCommerceService : NSObject

+ (id)sharedConnection;
+ (id)sharedConnectionAccessQueue;
+ (id)_createXPCConnection;
+ (void)setSharedConnection:(id)arg1;
+ (id)proxyObject;
+ (id)proxyObjectAsync;

@end
