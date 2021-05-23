/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface PPPBMusicDataCollectionArray : PBCodable

{
    NSString *_assetVersion;
    NSMutableArray *_experimentalGroups;
    NSMutableArray *_records;
    _Bool _hasMusicSubscription;
    struct {
        unsigned int hasMusicSubscription:1;
    } _has;
}

@property (retain, nonatomic) NSMutableArray *records;
@property (nonatomic) _Bool hasHasMusicSubscription;
@property (nonatomic) _Bool hasMusicSubscription;
@property (retain, nonatomic) NSMutableArray *experimentalGroups;
@property (nonatomic, readonly) _Bool hasAssetVersion;
@property (retain, nonatomic) NSString *assetVersion;

+ (Class)recordsType;
+ (Class)experimentalGroupsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addRecords:(id)arg1;
- (unsigned long long)recordsCount;
- (void)clearRecords;
- (id)recordsAtIndex:(unsigned long long)arg1;
- (void)clearExperimentalGroups;
- (void)addExperimentalGroups:(id)arg1;
- (unsigned long long)experimentalGroupsCount;
- (id)experimentalGroupsAtIndex:(unsigned long long)arg1;

@end
