/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NEDNSSettings : NSObject

{
    _Bool _matchDomainsNoSearch;
    NSArray *_servers;
    NSArray *_searchDomains;
    NSString *_domainName;
    NSArray *_matchDomains;
}

@property (readonly) NSArray *servers;
@property (copy) NSArray *searchDomains;
@property (copy) NSString *domainName;
@property (copy) NSArray *matchDomains;
@property _Bool matchDomainsNoSearch;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithServers:(id)arg1;

@end
