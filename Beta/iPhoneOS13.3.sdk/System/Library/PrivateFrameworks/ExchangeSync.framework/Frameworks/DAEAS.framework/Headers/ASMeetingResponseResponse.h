/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSArray, NSMutableArray;

@interface ASMeetingResponseResponse : ASItem

{
    NSMutableArray *_mSingularResponses;
}

@property (retain, nonatomic) NSMutableArray *mSingularResponses;
@property (nonatomic, readonly) NSArray *singularResponses;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)init;
- (id)description;
- (void)_addSingularResponse:(id)arg1;

@end
