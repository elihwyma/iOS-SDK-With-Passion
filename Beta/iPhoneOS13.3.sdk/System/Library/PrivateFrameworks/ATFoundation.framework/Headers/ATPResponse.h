/*
 Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

@class ATPError;

@interface ATPResponse : PBCodable

{
    ATPError *_error;
}

@property (nonatomic, readonly) _Bool hasError;
@property (retain, nonatomic) ATPError *error;

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
