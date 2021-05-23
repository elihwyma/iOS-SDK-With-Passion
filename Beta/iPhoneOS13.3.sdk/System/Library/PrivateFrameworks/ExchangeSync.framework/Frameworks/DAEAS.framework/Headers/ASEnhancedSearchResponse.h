/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSArray, NSMutableArray, NSNumber;

@interface ASEnhancedSearchResponse : ASItem

{
    int _expectedResultType;
    NSNumber *_status;
    NSMutableArray *_mResults;
}

@property (retain, nonatomic) NSMutableArray *mResults;
@property (nonatomic, readonly) NSArray *stores;
@property (copy, nonatomic) NSNumber *status;
@property (nonatomic) int expectedResultType;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void)addStoreResponse:(id)arg1;

@end
