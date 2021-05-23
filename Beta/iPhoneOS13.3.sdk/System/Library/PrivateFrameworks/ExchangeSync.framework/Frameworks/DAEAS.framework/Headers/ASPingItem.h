/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber;

@interface ASPingItem : ASItem

{
    NSArray *_folders;
    NSNumber *_heartBeatInterval;
    NSNumber *_maxFolders;
    NSNumber *_status;
}

@property (retain, nonatomic) NSArray *folders;
@property (retain, nonatomic) NSNumber *heartBeatInterval;
@property (retain, nonatomic) NSNumber *maxFolders;
@property (retain, nonatomic) NSNumber *status;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;

@end
