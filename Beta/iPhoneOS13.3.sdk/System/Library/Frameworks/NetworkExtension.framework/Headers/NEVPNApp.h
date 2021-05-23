/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEVPN.h>

@class NSArray;

@interface NEVPNApp : NEVPN

{
    _Bool _noRestriction;
    _Bool _restrictDomains;
    NSArray *_appRules;
}

@property (copy) NSArray *appRules;
@property _Bool noRestriction;
@property _Bool restrictDomains;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)arg1;
- (_Bool)removeAppRuleByID:(id)arg1;
- (id)copyAppRuleIDs;
- (id)copyAppRuleByID:(id)arg1;
- (id)copyUniqueSigningIdentifiers;
- (id)copyAppRuleBySigningIdentifier:(id)arg1;
- (_Bool)installSigningIdentifiersWithFlowDivertControlSocket:(int)arg1;
- (void)updateAppRulesForUID:(unsigned int)arg1;

@end
