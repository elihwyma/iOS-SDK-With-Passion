/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEVPNManager.h>

@interface NETunnelProviderManager : NEVPNManager

@property (readonly) long long routingMethod;

+ (id)copyDesignatedRequirementForProvider:(id *)arg1 extensionPoint:(id)arg2;
+ (void)loadAllFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;

- (id)init;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)isProtocolTypeValid:(long long)arg1;
- (void)additionalSetup;
- (void)loadFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithSessionType:(int)arg1 tunnelType:(long long)arg2;
- (id)copyAppRules;

@end
