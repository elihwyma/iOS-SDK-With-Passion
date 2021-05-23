/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NEIPv6Settings : NSObject

{
    NSArray *_addresses;
    NSArray *_networkPrefixLengths;
    NSArray *_includedRoutes;
    NSArray *_excludedRoutes;
    long long _configMethod;
    NSString *_router;
}

@property long long configMethod;
@property (copy) NSString *router;
@property (readonly) NSArray *addresses;
@property (readonly) NSArray *networkPrefixLengths;
@property (copy) NSArray *includedRoutes;
@property (copy) NSArray *excludedRoutes;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithAddresses:(id)arg1 networkPrefixLengths:(id)arg2;
- (_Bool)hasDefaultRoute;

@end
