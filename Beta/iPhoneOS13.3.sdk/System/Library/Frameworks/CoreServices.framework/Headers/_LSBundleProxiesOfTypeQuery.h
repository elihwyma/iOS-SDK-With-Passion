/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSBundleQuery.h>

__attribute__((visibility("hidden")))
@interface _LSBundleProxiesOfTypeQuery : _LSBundleQuery

{
    unsigned long long _type;
}

@property (nonatomic, readonly) unsigned long long type;

+ (_Bool)supportsSecureCoding;
+ (id)queryWithType:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)bundleUnitMeetsRequirements:(unsigned int)arg1 bundleData:(const struct LSBundleData *)arg2 context:(struct LSContext *)arg3;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_requiresDatabaseMappingEntitlement;

@end
