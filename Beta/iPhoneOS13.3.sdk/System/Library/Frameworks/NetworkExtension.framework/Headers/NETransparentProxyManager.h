/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEVPNManager.h>

@interface NETransparentProxyManager : NEVPNManager

+ (void)loadAllFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;

- (id)init;
- (_Bool)isProtocolTypeValid:(long long)arg1;
- (void)additionalSetup;
- (void)loadFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
