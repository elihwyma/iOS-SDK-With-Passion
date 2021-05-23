/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class ASFolderItemsSyncResponse, NSArray, NSNumber, NSString;

@interface ASCollection : ASItem

{
    long long _dataclass;
    NSString *_syncKey;
    NSString *_collectionId;
    NSNumber *_status;
    NSNumber *_moreAvailable;
    NSArray *_changedItems;
    NSArray *_responseItems;
    ASFolderItemsSyncResponse *_parentResponse;
    int _sniffableType;
    _Bool _checkedShouldSniffInvites;
}

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)init;
- (id)description;
- (id)status;
- (void)setStatus:(id)arg1;
- (id)collectionId;
- (void)setCollectionId:(id)arg1;
- (id)moreAvailable;
- (long long)dataclass;
- (id)syncKey;
- (void)setMoreAvailable:(id)arg1;
- (void)setSyncKey:(id)arg1;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (id)responseItems;
- (void)setResponseItems:(id)arg1;
- (void)setDataclassString:(id)arg1;
- (void)setChangedItems:(id)arg1;
- (void)setParentResponse:(id)arg1;
- (id)changedItems;
- (int)sniffableTypeForAccount:(id)arg1;

@end
