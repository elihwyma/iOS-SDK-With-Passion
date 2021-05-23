/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPShare;

__attribute__((visibility("hidden")))
@interface CKDPShareAcceptResponse : PBCodable

{
    CKDPShare *_share;
}

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

@end
