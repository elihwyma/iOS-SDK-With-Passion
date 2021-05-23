/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASPolicy.h>

@class NSString;

@interface ASWAPXMLPolicy : ASPolicy

{
    NSString *_data;
}

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)data;
- (void)_setData:(id)arg1;
- (id)_policyForWAPProvisioningXMLData;
- (id)_wbxmlPolicyDict;
- (id)perDomainDictsForPolicy;

@end
