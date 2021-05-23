/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSBundleQuery.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSApplicationProxyForIdentifierQuery : _LSBundleQuery

{
    NSString *_identifier;
}

@property (copy, nonatomic, readonly) NSString *identifier;

+ (_Bool)supportsSecureCoding;
+ (id)queryWithIdentifier:(id)arg1;
+ (id)alwaysAllowedBundleIdentifiers;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_requiresDatabaseMappingEntitlement;

@end
