/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class ASSettingsTaskUserInformationGetResponse, NSNumber;

@interface ASSettingsTaskUserInformationResponse : ASItem

{
    NSNumber *_status;
    ASSettingsTaskUserInformationGetResponse *_getResponse;
}

@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) ASSettingsTaskUserInformationGetResponse *getResponse;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

@end
