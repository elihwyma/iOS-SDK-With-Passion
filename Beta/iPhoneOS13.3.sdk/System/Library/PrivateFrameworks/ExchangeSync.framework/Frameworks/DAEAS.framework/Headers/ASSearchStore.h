/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface ASSearchStore : ASItem

{
    NSNumber *_status;
    NSNumber *_total;
    NSString *_range;
    NSMutableArray *_mResults;
}

@property (retain, nonatomic) NSMutableArray *mResults;
@property (nonatomic, readonly) NSArray *results;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *total;
@property (copy, nonatomic) NSString *range;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;

- (id)description;
- (void)addResult:(id)arg1;
- (id)asParseRules;

@end
