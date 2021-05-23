/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPShare, CKDPShareIdentifier;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveChangesResponseShareChange : PBCodable

{
    int _changeType;
    CKDPShare *_share;
    CKDPShareIdentifier *_shareIdentifier;
    struct {
        unsigned int changeType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasShareIdentifier;
@property (retain, nonatomic) CKDPShareIdentifier *shareIdentifier;
@property (nonatomic) _Bool hasChangeType;
@property (nonatomic) int changeType;
@property (nonatomic, readonly) _Bool hasShare;
@property (retain, nonatomic) CKDPShare *share;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)changeTypeAsString:(int)arg1;
- (int)StringAsChangeType:(id)arg1;

@end
