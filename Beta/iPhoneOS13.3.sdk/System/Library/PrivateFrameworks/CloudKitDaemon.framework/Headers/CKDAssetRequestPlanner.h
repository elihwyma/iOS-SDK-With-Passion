/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface CKDAssetRequestPlanner : NSObject

{
    unsigned int _assetTokenRequestSizeLimit;
    NSArray *_assetRegisterAndPutBatches;
    NSArray *_assetGetChunkKeysBatches;
    NSArray *_assetTokenRequests;
    NSMutableDictionary *_rerefAssetBatchesByZoneID;
    NSMutableDictionary *_assetBatchesByZoneID;
    unsigned long long _mmcsEncryptionSupport;
    NSMutableOrderedSet *_items;
    NSMutableDictionary *_assetZoneByKey;
}

@property (retain, nonatomic) NSArray *assetRegisterAndPutBatches;
@property (retain, nonatomic) NSArray *assetGetChunkKeysBatches;
@property (retain, nonatomic) NSArray *assetTokenRequests;
@property (nonatomic) unsigned long long mmcsEncryptionSupport;
@property (retain, nonatomic) NSMutableOrderedSet *items;
@property (retain, nonatomic) NSMutableDictionary *assetZoneByKey;
@property (retain, nonatomic) NSMutableDictionary *assetBatchesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *rerefAssetBatchesByZoneID;
@property (nonatomic, readonly) unsigned int assetTokenRequestSizeLimit;

- (id)description;
- (id)CKPropertiesDescription;
- (void)addMMCSItem:(id)arg1;
- (void)addRereferencedMMCSItem:(id)arg1;
- (void)addMMCSSectionItem:(id)arg1;
- (_Bool)hasSuccessfulBatches;
- (id)initWithMMCSEncryptionSupport:(unsigned long long)arg1;
- (void)resetAssetTokenRequests;
- (void)planRegisterBatches;
- (void)planGetChunkKeysBatches;
- (void)planAssetRequests;
- (void)failBatch:(id)arg1;
- (_Bool)hasSuccessfulAssetTokenRequests;

@end
