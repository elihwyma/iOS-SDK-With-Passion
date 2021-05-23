/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NEAppRule : NSObject

{
    _Bool _noRestriction;
    _Bool _noDivertDNS;
    NSString *_matchSigningIdentifier;
    NSString *_matchDesignatedRequirement;
    NSString *_matchPath;
    NSArray *_matchDomains;
    NSArray *_additionalExecutables;
    NSArray *_matchAccountIdentifiers;
}

@property (copy) NSArray *additionalExecutables;
@property _Bool noRestriction;
@property (copy) NSArray *matchAccountIdentifiers;
@property _Bool noDivertDNS;
@property (readonly) NSString *matchSigningIdentifier;
@property (readonly) NSString *matchDesignatedRequirement;
@property (copy) NSString *matchPath;
@property (copy) NSArray *matchDomains;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithSigningIdentifier:(id)arg1;
- (_Bool)signingIdentifierAllowed:(id)arg1 domainsRequired:(out _Bool *)arg2;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)arg1;
- (_Bool)overlapsWithRule:(id)arg1;
- (_Bool)matchesProcessWithAuditToken:(id)arg1;

@end
