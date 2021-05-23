/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NTPBConfig;

@interface NTPBABConfigBucket : PBCodable

{
    long long _bucketCeiling;
    long long _bucketFloor;
    NTPBConfig *_config;
    struct {
        unsigned int bucketCeiling:1;
        unsigned int bucketFloor:1;
    } _has;
}

@property (nonatomic) _Bool hasBucketFloor;
@property (nonatomic) long long bucketFloor;
@property (nonatomic) _Bool hasBucketCeiling;
@property (nonatomic) long long bucketCeiling;
@property (nonatomic, readonly) _Bool hasConfig;
@property (retain, nonatomic) NTPBConfig *config;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
