/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface CKDPShareVettingInitiateResponse : PBCodable

{
    int _vettingError;
    struct {
        unsigned int vettingError:1;
    } _has;
}

@property (nonatomic) _Bool hasVettingError;
@property (nonatomic) int vettingError;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)vettingErrorAsString:(int)arg1;
- (int)StringAsVettingError:(id)arg1;

@end
