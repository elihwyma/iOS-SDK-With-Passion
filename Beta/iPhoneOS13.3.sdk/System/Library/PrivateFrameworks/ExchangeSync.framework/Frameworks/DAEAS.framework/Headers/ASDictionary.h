/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSDictionary, NSMutableDictionary;

@interface ASDictionary : ASItem

{
    NSMutableDictionary *_items;
    NSDictionary *_subclassRuleSet;
    NSMutableDictionary *_placeHolder;
}

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;

- (id)description;
- (void)_setItems:(id)arg1;
- (void)applyPlaceHolder;
- (void)clearPlaceHolder;
- (void)setObject:(id)arg1 forDCCPT:(int)arg2;
- (id)initWithSubclassRuleSet:(id)arg1;
- (id)commonValue;
- (id)asParseRules;

@end
