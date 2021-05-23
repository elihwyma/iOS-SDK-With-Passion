/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber, NSString;

@interface ASChangedFolderStore : ASItem

{
    NSNumber *_status;
    NSString *_syncKey;
    NSArray *_updatedFolders;
}

@property (retain, nonatomic) NSString *syncKey;
@property (retain, nonatomic) NSArray *updatedFolders;
@property (retain, nonatomic) NSNumber *status;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

@end
