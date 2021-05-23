/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@interface RMSControlSession : NSObject

+ (id)daapControlSession;
+ (id)localControlSession;
+ (id)proxyControlSession;

@end
