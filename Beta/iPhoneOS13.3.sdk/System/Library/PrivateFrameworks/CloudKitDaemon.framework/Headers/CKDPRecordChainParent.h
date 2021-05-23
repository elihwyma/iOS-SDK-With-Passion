/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecordReference, NSData;

@interface CKDPRecordChainParent : PBCodable

{
    NSData *_publicKeyID;
    CKDPRecordReference *_reference;
}

@property (nonatomic, readonly) _Bool hasPublicKeyID;
@property (retain, nonatomic) NSData *publicKeyID;
@property (nonatomic, readonly) _Bool hasReference;
@property (retain, nonatomic) CKDPRecordReference *reference;

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
