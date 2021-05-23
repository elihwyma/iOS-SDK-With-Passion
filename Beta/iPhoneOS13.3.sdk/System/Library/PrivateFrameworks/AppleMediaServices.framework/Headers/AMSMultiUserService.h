/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AMSMultiUserService : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedConnection;
+ (id)machServiceName;
+ (id)serviceInterface;
+ (id)sharedConnectionAccessQueue;
+ (id)_createXPCConnection;
+ (void)setSharedConnection:(id)arg1;
+ (id)proxyObject;
+ (id)proxyObjectAsync;
+ (_Bool)isConnectionEntitled:(id)arg1;

@end
