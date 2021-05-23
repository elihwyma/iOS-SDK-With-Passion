/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class FCCKPIdentifier;

@interface FCCKPRecordZoneIdentifier : PBCodable <Swift>

{
    FCCKPIdentifier *_ownerIdentifier;
    FCCKPIdentifier *_value;
}

@property (nonatomic, readonly) _Bool hasValue;
@property (retain, nonatomic) FCCKPIdentifier *value;
@property (nonatomic, readonly) _Bool hasOwnerIdentifier;
@property (retain, nonatomic) FCCKPIdentifier *ownerIdentifier;

- (void)dealloc;
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
