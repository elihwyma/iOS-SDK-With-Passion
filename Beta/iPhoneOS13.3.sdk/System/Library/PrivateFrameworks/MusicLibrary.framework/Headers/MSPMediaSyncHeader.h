/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <ProtocolBuffer/PBCodable.h>

@interface MSPMediaSyncHeader : PBCodable

{
    int _syncType;
    int _totalPackages;
    struct {
        unsigned int syncType:1;
        unsigned int totalPackages:1;
    } _has;
}

@property (nonatomic) _Bool hasTotalPackages;
@property (nonatomic) int totalPackages;
@property (nonatomic) _Bool hasSyncType;
@property (nonatomic) int syncType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)syncTypeAsString:(int)arg1;
- (int)StringAsSyncType:(id)arg1;

@end
