/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASPolicy.h>

@class NSMutableDictionary;

@interface ASWBXMLPolicy : ASPolicy

{
    NSMutableDictionary *_policyData;
}

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)perDomainDictsForPolicy;
- (void)_setPolicyData:(id)arg1;
- (void)_cleanUpPolicyData:(id)arg1;

@end
