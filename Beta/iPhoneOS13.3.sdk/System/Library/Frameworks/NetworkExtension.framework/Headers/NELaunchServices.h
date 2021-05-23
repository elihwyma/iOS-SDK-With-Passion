/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@interface NELaunchServices : NSObject

+ (id)pluginProxyWithIdentifier:(id)arg1 type:(id)arg2 pluginClass:(long long)arg3 extensionPoint:(id)arg4;
+ (id)pluginClassToExtensionPoint:(long long)arg1;
+ (id)copyLSProxyForUID:(unsigned int)arg1;
+ (id)bundleProxyForIdentifier:(id)arg1 uid:(unsigned int)arg2 plugins:(id *)arg3;

@end
