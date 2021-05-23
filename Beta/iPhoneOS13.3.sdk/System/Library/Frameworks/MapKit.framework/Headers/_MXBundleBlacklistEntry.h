/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString, _MXVersion;

__attribute__((visibility("hidden")))
@interface _MXBundleBlacklistEntry : NSObject

{
    NSString *_bundleIdentifier;
    _MXVersion *_minimum;
    _MXVersion *_maximum;
}

+ (id)blacklistEntriesFromDefaultsValue:(id)arg1;

- (_Bool)_isVersionValueAllowed:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 minimumDisallowedVersion:(id)arg2 maximumDisallowedVersion:(id)arg3;
- (_Bool)isBundleProxyAllowed:(id)arg1;
- (_Bool)isExtensionAllowed:(id)arg1;

@end
