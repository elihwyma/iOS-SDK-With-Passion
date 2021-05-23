/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber, NSString;

@interface ASProvisionResponse : ASItem

{
    NSArray *_policies;
    NSNumber *_status;
    _Bool _remoteWipe;
    _Bool _accountOnlyRemoteWipe;
    NSString *_policyType;
}

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;

- (id)init;
- (id)description;
- (id)status;
- (id)policies;
- (void)_setStatus:(id)arg1;
- (id)initWithPolicyType:(id)arg1;
- (id)policyType;
- (id)asParseRules;
- (void)_setPolicies:(id)arg1;
- (void)_setRemoteWipe:(id)arg1;
- (void)_setAccountOnlyRemoteWipe:(id)arg1;
- (void)setPolicyType:(id)arg1;
- (_Bool)remoteWipe;
- (_Bool)accountOnlyRemoteWipe;

@end
