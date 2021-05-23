/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPListRange;

__attribute__((visibility("hidden")))
@interface CKDPFieldActionDeleteListRange : PBCodable

{
    CKDPListRange *_range;
}

@property (nonatomic, readonly) _Bool hasRange;
@property (retain, nonatomic) CKDPListRange *range;

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
