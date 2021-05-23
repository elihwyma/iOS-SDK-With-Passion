/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPZoneRetrieveChangesResponse : PBCodable

{
    NSMutableArray *_changedZones;
    int _status;
    NSData *_syncContinuationToken;
    CDStruct_47fe53f2 _has;
}

@property (retain, nonatomic) NSMutableArray *changedZones;
@property (nonatomic, readonly) _Bool hasSyncContinuationToken;
@property (retain, nonatomic) NSData *syncContinuationToken;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;

+ (Class)changedZonesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (void)addChangedZones:(id)arg1;
- (unsigned long long)changedZonesCount;
- (void)clearChangedZones;
- (id)changedZonesAtIndex:(unsigned long long)arg1;

@end
