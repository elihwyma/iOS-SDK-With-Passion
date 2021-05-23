/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSArray, NSMutableArray, NSNumber;

@interface ASResolveRecipientsResponse : ASItem

{
    NSNumber *_easStatus;
    NSMutableArray *_mResponses;
    NSArray *_responses;
}

@property (retain, nonatomic) NSMutableArray *mResponses;
@property (retain, nonatomic) NSArray *responses;
@property (retain, nonatomic, setter=setEASStatus:) NSNumber *easStatus;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void)addResponse:(id)arg1;

@end
