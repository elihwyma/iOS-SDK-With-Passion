/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSNumber, NSString;

@interface ASSettingsTaskOofMessage : ASItem

{
    NSNumber *_audience;
    NSNumber *_enabled;
    NSString *_replyMessage;
    NSString *_bodyType;
}

@property (retain, nonatomic) NSNumber *audience;
@property (retain, nonatomic) NSNumber *enabled;
@property (retain, nonatomic) NSString *replyMessage;
@property (retain, nonatomic) NSString *bodyType;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)appliesToInternal:(id)arg1;
- (void)appliesToExternalKnown:(id)arg1;
- (void)appliesToExternalUnknown:(id)arg1;

@end
