/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber;

@interface ASSearchResponse : ASItem

{
    int _expectedResultType;
    NSArray *_stores;
    NSNumber *_status;
}

@property (retain, nonatomic) NSArray *stores;
@property (copy, nonatomic) NSNumber *status;
@property (nonatomic) int expectedResultType;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;

@end
