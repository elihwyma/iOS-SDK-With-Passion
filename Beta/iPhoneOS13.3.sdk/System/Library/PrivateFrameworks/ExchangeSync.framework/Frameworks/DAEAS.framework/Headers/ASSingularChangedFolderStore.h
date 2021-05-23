/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASChangedFolderStore.h>

@class NSString;

@interface ASSingularChangedFolderStore : ASChangedFolderStore

{
    NSString *_serverId;
}

@property (retain, nonatomic) NSString *serverId;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

@end
