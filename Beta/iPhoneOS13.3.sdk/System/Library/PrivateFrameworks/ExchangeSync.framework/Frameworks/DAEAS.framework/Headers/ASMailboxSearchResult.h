/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASEmailItem.h>

@class NSArray, NSMutableArray;

@interface ASMailboxSearchResult : ASEmailItem

{
    NSMutableArray *_mClasses;
}

@property (retain, nonatomic) NSMutableArray *mClasses;
@property (nonatomic, readonly) NSArray *classes;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)init;
- (id)description;
- (void)addClass:(id)arg1;
- (_Bool)_isSearchResult;

@end
