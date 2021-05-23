/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <PBCodable.h>

@class CKDPIdentifier;

@interface CKDPRecordZoneIdentifier : PBCodable

{
    CKDPIdentifier *_ownerIdentifier;
    CKDPIdentifier *_value;
}

@property (nonatomic, readonly) _Bool hasValue;
@property (retain, nonatomic) CKDPIdentifier *value;
@property (nonatomic, readonly) _Bool hasOwnerIdentifier;
@property (retain, nonatomic) CKDPIdentifier *ownerIdentifier;

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
