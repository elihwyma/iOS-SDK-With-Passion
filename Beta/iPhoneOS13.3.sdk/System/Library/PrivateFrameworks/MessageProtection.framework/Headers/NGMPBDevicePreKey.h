/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <PBCodable.h>

@class NGMPBP256Key, NSData;

__attribute__((visibility("hidden")))
@interface NGMPBDevicePreKey : PBCodable

{
    double _timestamp;
    NGMPBP256Key *_dhKey;
    NSData *_prekeySignature;
}

@property (nonatomic, readonly) _Bool hasDhKey;
@property (retain, nonatomic) NGMPBP256Key *dhKey;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSData *prekeySignature;

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
