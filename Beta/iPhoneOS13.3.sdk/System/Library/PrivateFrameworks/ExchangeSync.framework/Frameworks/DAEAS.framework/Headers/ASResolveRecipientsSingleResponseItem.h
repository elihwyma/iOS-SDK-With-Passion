/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface ASResolveRecipientsSingleResponseItem : ASItem

{
    NSString *_emailAddress;
    NSNumber *_easStatus;
    NSMutableArray *_mRecipients;
}

@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic, setter=setEASStatus:) NSNumber *easStatus;
@property (retain, nonatomic) NSMutableArray *mRecipients;
@property (nonatomic, readonly) NSArray *recipients;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void)addRecipient:(id)arg1;

@end
