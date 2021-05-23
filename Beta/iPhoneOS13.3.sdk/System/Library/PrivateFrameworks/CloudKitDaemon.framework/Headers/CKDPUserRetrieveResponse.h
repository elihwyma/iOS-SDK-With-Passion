/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecord;

__attribute__((visibility("hidden")))
@interface CKDPUserRetrieveResponse : PBCodable

{
    CKDPRecord *_user;
}

@property (nonatomic, readonly) _Bool hasUser;
@property (retain, nonatomic) CKDPRecord *user;

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
