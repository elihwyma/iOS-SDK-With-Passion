/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSArray, NSURL;

@interface NEOnDemandRule : NSObject

{
    long long _action;
    NSArray *_DNSSearchDomainMatch;
    NSArray *_DNSServerAddressMatch;
    long long _interfaceTypeMatch;
    NSArray *_SSIDMatch;
    NSURL *_probeURL;
}

@property (readonly) long long action;
@property (copy) NSArray *DNSSearchDomainMatch;
@property (copy) NSArray *DNSServerAddressMatch;
@property long long interfaceTypeMatch;
@property (copy) NSArray *SSIDMatch;
@property (copy) NSURL *probeURL;

+ (_Bool)supportsSecureCoding;
+ (id)createOnDemandRulesFromLegacyDictionary:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAction:(long long)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)arg1;

@end
