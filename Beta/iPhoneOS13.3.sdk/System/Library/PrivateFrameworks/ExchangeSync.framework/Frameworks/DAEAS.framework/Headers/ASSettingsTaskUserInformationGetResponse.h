/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSArray, NSString;

@interface ASSettingsTaskUserInformationGetResponse : ASItem

{
    NSArray *_emailAddresses;
    NSString *_primarySMTPAddress;
    NSArray *_accounts;
}

@property (retain, nonatomic) NSArray *accounts;
@property (retain, nonatomic) NSArray *emailAddresses;
@property (retain, nonatomic) NSString *primarySMTPAddress;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

@end
