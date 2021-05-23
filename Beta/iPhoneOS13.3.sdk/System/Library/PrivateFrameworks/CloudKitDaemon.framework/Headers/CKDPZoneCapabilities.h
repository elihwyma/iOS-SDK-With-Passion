/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface CKDPZoneCapabilities : PBCodable

{
    int _sharingType;
    _Bool _atomicSaves;
    _Bool _ckql;
    _Bool _fetchChanges;
    _Bool _hierarchicalSharing;
    _Bool _sharing;
    _Bool _zoneSharing;
    struct {
        unsigned int sharingType:1;
        unsigned int atomicSaves:1;
        unsigned int ckql:1;
        unsigned int fetchChanges:1;
        unsigned int hierarchicalSharing:1;
        unsigned int sharing:1;
        unsigned int zoneSharing:1;
    } _has;
}

@property (nonatomic) _Bool hasAtomicSaves;
@property (nonatomic) _Bool atomicSaves;
@property (nonatomic) _Bool hasFetchChanges;
@property (nonatomic) _Bool fetchChanges;
@property (nonatomic) _Bool hasSharing;
@property (nonatomic) _Bool sharing;
@property (nonatomic) _Bool hasCkql;
@property (nonatomic) _Bool ckql;
@property (nonatomic) _Bool hasSharingType;
@property (nonatomic) int sharingType;
@property (nonatomic) _Bool hasZoneSharing;
@property (nonatomic) _Bool zoneSharing;
@property (nonatomic) _Bool hasHierarchicalSharing;
@property (nonatomic) _Bool hierarchicalSharing;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)sharingTypeAsString:(int)arg1;
- (int)StringAsSharingType:(id)arg1;

@end
