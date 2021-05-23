/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface ASSettingsTaskOofGetResponse : ASItem

{
    NSNumber *_oofState;
    NSString *_startTime;
    NSString *_endTime;
    NSArray *_oofMessages;
    NSMutableArray *_mOofMessages;
}

@property (retain, nonatomic) NSMutableArray *mOofMessages;
@property (retain, nonatomic) NSNumber *oofState;
@property (retain, nonatomic) NSString *startTime;
@property (retain, nonatomic) NSString *endTime;
@property (retain, nonatomic) NSArray *oofMessages;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (id)convertToDAOofParams;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)addOofMessages:(id)arg1;

@end
