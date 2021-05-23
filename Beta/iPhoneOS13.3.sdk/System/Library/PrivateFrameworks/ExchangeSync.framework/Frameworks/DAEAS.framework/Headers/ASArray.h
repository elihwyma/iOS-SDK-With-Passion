/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSDictionary, NSMutableArray;

@interface ASArray : ASItem

{
    NSMutableArray *_items;
    NSDictionary *_subclassRuleSet;
}

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;

- (id)description;
- (void)addItem:(id)arg1;
- (id)initWithSubclassRuleSet:(id)arg1;
- (id)commonValue;
- (id)asParseRules;

@end
