/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@interface NEHotspotHelper : NSObject

+ (_Bool)registerWithOptions:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (_Bool)logoff:(id)arg1;
+ (id)supportedNetworkInterfaces;

@end
