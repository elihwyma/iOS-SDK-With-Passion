/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NPKProtoPassSyncStateChangeProcessed : PBCodable

{
    NSData *_acceptedChangeUUID;
    _Bool _changeAccepted;
    _Bool _fullPassRequired;
    struct {
        unsigned int changeAccepted:1;
        unsigned int fullPassRequired:1;
    } _has;
}

@property (retain, nonatomic) NSData *acceptedChangeUUID;
@property (nonatomic) _Bool hasChangeAccepted;
@property (nonatomic) _Bool changeAccepted;
@property (nonatomic) _Bool hasFullPassRequired;
@property (nonatomic) _Bool fullPassRequired;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
