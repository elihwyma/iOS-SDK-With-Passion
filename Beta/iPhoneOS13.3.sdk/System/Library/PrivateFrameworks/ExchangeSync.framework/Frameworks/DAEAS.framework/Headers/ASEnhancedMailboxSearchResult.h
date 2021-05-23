/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASEmailItem.h>

@class NSString;

@interface ASEnhancedMailboxSearchResult : ASEmailItem

{
    NSString *_className;
}

@property (retain, nonatomic) NSString *className;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)init;
- (id)description;
- (_Bool)_isSearchResult;

@end
