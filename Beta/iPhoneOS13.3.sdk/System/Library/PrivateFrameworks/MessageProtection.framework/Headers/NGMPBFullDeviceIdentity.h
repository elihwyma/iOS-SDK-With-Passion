/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <PBCodable.h>

@class NGMPBP256Key, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NGMPBFullDeviceIdentity : PBCodable

{
    NSMutableArray *_prekeys;
    NGMPBP256Key *_signingKey;
}

@property (retain, nonatomic) NGMPBP256Key *signingKey;
@property (retain, nonatomic) NSMutableArray *prekeys;

+ (Class)prekeysType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addPrekeys:(id)arg1;
- (unsigned long long)prekeysCount;
- (void)clearPrekeys;
- (id)prekeysAtIndex:(unsigned long long)arg1;

@end
