/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSString;

@interface ASPolicy : ASItem

{
    NSString *_type;
    NSString *_key;
    NSString *_status;
}

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (id)key;
- (id)type;
- (void)_setKey:(id)arg1;
- (int)status;
- (void)_setType:(id)arg1;
- (void)_setStatus:(id)arg1;
- (id)perDomainDictsForPolicy;

@end
