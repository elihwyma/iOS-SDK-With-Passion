/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class ASSettingsTaskOofGetResponse, NSNumber;

@interface ASSettingsTaskOofResponse : ASItem

{
    NSNumber *_status;
    ASSettingsTaskOofGetResponse *_oofGetResult;
}

@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) ASSettingsTaskOofGetResponse *oofGetResult;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

@end
