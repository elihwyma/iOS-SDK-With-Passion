/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class ASCollection, NSMutableArray, NSNumber;

@interface ASFolderItemsSyncResponse : ASItem

{
    long long _dataclass;
    NSNumber *_status;
    ASCollection *_collection;
    NSMutableArray *_meetingRequestDatas;
    NSMutableArray *_deliveryIdsToClear;
    NSMutableArray *_deliveryIdsToSoftClear;
}

@property (retain, nonatomic) ASCollection *collection;
@property (retain, nonatomic) NSMutableArray *meetingRequestDatas;
@property (retain, nonatomic) NSMutableArray *deliveryIdsToClear;
@property (retain, nonatomic) NSMutableArray *deliveryIdsToSoftClear;
@property (nonatomic) long long dataclass;
@property (retain, nonatomic) NSNumber *status;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void)setCollections:(id)arg1;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)addMeetingRequestData:(id)arg1;
- (void)addDeliveryIdToClear:(id)arg1;
- (void)addDeliveryIdToSoftClear:(id)arg1;
- (void)_processMeetingRequestDatasForAccount:(id)arg1;
- (id)initWithDataclass:(long long)arg1;

@end
