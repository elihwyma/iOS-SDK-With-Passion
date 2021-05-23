/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/LSBundleProxy.h>

@interface LSVPNPluginProxy : LSBundleProxy

+ (_Bool)supportsSecureCoding;
+ (id)VPNPluginProxyForIdentifier:(id)arg1;
+ (id)VPNPluginProxyForIdentifier:(id)arg1 withContext:(struct LSContext *)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithBundleIdentifier:(id)arg1 withContext:(struct LSContext *)arg2;

@end
