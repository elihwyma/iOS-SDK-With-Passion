/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASEmailItem.h>

@class NSString;

@interface ASItemOperationsFetchResult : ASEmailItem

{
    NSString *_classString;
}

@property (retain, nonatomic) NSString *classString;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)init;
- (_Bool)_isSearchResult;

@end
