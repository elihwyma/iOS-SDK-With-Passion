/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPListPosition;

__attribute__((visibility("hidden")))
@interface CKDPListRange : PBCodable

{
    CKDPListPosition *_left;
    CKDPListPosition *_right;
}

@property (nonatomic, readonly) _Bool hasLeft;
@property (retain, nonatomic) CKDPListPosition *left;
@property (nonatomic, readonly) _Bool hasRight;
@property (retain, nonatomic) CKDPListPosition *right;

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
