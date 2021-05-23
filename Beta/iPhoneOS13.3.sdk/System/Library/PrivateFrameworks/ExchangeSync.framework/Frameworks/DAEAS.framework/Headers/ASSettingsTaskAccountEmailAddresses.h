/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSMutableSet, NSString;

@interface ASSettingsTaskAccountEmailAddresses : ASItem

{
    NSMutableSet *_mEmailAddresses;
    NSString *_primarySMTPAddress;
}

@property (retain, nonatomic) NSMutableSet *mEmailAddresses;
@property (retain, nonatomic) NSString *primarySMTPAddress;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (id)emailAddresses;
- (void)addEmailAddress:(id)arg1;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

@end
