/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSBundleQuery.h>

__attribute__((visibility("hidden")))
@interface _LSApplicationProxiesWithFlagsQuery : _LSBundleQuery

{
    unsigned int _plistFlags;
    unsigned long long _bundleFlags;
}

@property (nonatomic, readonly) unsigned int plistFlags;
@property (nonatomic, readonly) unsigned long long bundleFlags;

+ (_Bool)supportsSecureCoding;
+ (id)queryWithPlistFlags:(unsigned int)arg1 bundleFlags:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_requiresDatabaseMappingEntitlement;

@end
