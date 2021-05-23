/*
 Image: /System/Library/PrivateFrameworks/AccessoryiAP2Shim.framework/AccessoryiAP2Shim
 */

#import <Foundation/NSObject.h>

@interface ACCiAP2ShimServer : NSObject

+ (id)sharedInstance;
+ (void)resetServerState;
+ (id)stringForClientID:(unsigned int)arg1;
+ (void)postNotifydNotificationType:(id)arg1;
+ (void)postiAP2NotificationType:(id)arg1 notifyDict:(id)arg2;
+ (void)postiAP2AppNotificationType:(id)arg1 notifyDict:(id)arg2;
+ (void)postNSDistributeNotificationType:(id)arg1 notifyDict:(id)arg2;

@end
