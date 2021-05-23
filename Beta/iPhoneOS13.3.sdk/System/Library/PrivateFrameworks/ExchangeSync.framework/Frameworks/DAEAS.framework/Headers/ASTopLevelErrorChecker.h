/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSDictionary, NSNumber;

@interface ASTopLevelErrorChecker : ASItem

{
    NSNumber *_foundStatus;
    NSDictionary *_parseRules;
}

@property (retain, nonatomic) NSDictionary *parseRules;
@property (retain, nonatomic) NSNumber *foundStatus;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;

- (void)unknownToken:(int)arg1 receivedForCodePage:(int)arg2;
- (id)asParseRules;
- (id)initWithCodePage:(int)arg1 statusToken:(int)arg2;

@end
