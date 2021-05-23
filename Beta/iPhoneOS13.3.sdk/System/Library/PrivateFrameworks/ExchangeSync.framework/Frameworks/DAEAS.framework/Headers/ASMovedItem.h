/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSNumber, NSString;

@interface ASMovedItem : ASItem

{
    NSString *_srcMsgId;
    NSNumber *_status;
    NSString *_dstMsgId;
}

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)status;
- (void)setStatus:(id)arg1;
- (id)srcMsgId;
- (id)dstMsgId;
- (void)setDstMsgId:(id)arg1;
- (void)setSrcMsgId:(id)arg1;

@end
