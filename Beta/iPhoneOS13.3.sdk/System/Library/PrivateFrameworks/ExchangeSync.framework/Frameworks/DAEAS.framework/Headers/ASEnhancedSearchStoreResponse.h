/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface ASEnhancedSearchStoreResponse : ASItem

{
    NSString *_store;
    NSNumber *_status;
    NSNumber *_total;
    NSString *_range;
    NSMutableArray *_mResults;
}

@property (retain, nonatomic) NSMutableArray *mResults;
@property (nonatomic, readonly) NSArray *results;
@property (copy, nonatomic) NSString *store;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *total;
@property (copy, nonatomic) NSString *range;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void)addResult:(id)arg1;

@end
