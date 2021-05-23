/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, NTPBAppConfigurationResource, NTPBAsset, NTPBCacheCoordinatorHints, NTPBDate, NTPBIssueReadingHistoryItem, NTPBNetworkSessionList, NTPBPersonalizationLocalData, NTPBPrivateDataControllerSyncState, NTPBReadingHistoryItem;

@interface NTPBKeyValuePair : PBCodable

{
    NTPBAppConfigurationResource *_appConfigurationResource;
    NTPBAsset *_asset;
    NTPBCacheCoordinatorHints *_cacheCoordinatorHintsValue;
    NSData *_dataValue;
    NTPBDate *_dateValue;
    NTPBIssueReadingHistoryItem *_issueReadingHistoryItem;
    NSString *_key;
    NTPBNetworkSessionList *_networkSessionList;
    NTPBPersonalizationLocalData *_personalizationLocalData;
    NTPBPrivateDataControllerSyncState *_privateDataControllerSyncState;
    NTPBReadingHistoryItem *_readingHistoryItem;
    NSData *_recordData;
    NSString *_stringValue;
    int _valueType;
    struct {
        unsigned int valueType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) _Bool hasValueType;
@property (nonatomic) int valueType;
@property (nonatomic, readonly) _Bool hasDataValue;
@property (retain, nonatomic) NSData *dataValue;
@property (nonatomic, readonly) _Bool hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic, readonly) _Bool hasDateValue;
@property (retain, nonatomic) NTPBDate *dateValue;
@property (nonatomic, readonly) _Bool hasCacheCoordinatorHintsValue;
@property (retain, nonatomic) NTPBCacheCoordinatorHints *cacheCoordinatorHintsValue;
@property (nonatomic, readonly) _Bool hasRecordData;
@property (retain, nonatomic) NSData *recordData;
@property (nonatomic, readonly) _Bool hasReadingHistoryItem;
@property (retain, nonatomic) NTPBReadingHistoryItem *readingHistoryItem;
@property (nonatomic, readonly) _Bool hasNetworkSessionList;
@property (retain, nonatomic) NTPBNetworkSessionList *networkSessionList;
@property (nonatomic, readonly) _Bool hasPersonalizationLocalData;
@property (retain, nonatomic) NTPBPersonalizationLocalData *personalizationLocalData;
@property (nonatomic, readonly) _Bool hasAppConfigurationResource;
@property (retain, nonatomic) NTPBAppConfigurationResource *appConfigurationResource;
@property (nonatomic, readonly) _Bool hasPrivateDataControllerSyncState;
@property (retain, nonatomic) NTPBPrivateDataControllerSyncState *privateDataControllerSyncState;
@property (nonatomic, readonly) _Bool hasIssueReadingHistoryItem;
@property (retain, nonatomic) NTPBIssueReadingHistoryItem *issueReadingHistoryItem;
@property (nonatomic, readonly) _Bool hasAsset;
@property (retain, nonatomic) NTPBAsset *asset;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
