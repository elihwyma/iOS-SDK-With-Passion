/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/Swift-Protocol.h>

@class NSData;

@interface HKHealthWrapCodableMessageKey : PBCodable <Swift>

{
    NSData *_iv;
    NSData *_key;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSData *key;
@property (nonatomic, readonly) _Bool hasIv;
@property (retain, nonatomic) NSData *iv;

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
