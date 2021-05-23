/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSBundleQuery.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSApplicationProxyForUserActivityQuery : _LSBundleQuery

{
    NSString *_domainName;
    NSString *_activityType;
}

@property (copy, nonatomic, readonly) NSString *domainName;
@property (copy, nonatomic, readonly) NSString *activityType;

+ (_Bool)supportsSecureCoding;
+ (id)queryWithActivityType:(id)arg1;
+ (id)queryWithDomainName:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_requiresDatabaseMappingEntitlement;

@end
