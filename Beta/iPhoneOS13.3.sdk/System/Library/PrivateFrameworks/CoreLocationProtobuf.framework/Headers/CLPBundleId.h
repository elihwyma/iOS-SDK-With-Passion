/*
 Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

#import <PBCodable.h>

@class NSString;

@interface CLPBundleId : PBCodable

{
    double _timestamp;
    NSString *_fullName;
    NSString *_shortKey;
    struct {
        unsigned int timestamp:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) _Bool hasShortKey;
@property (retain, nonatomic) NSString *shortKey;
@property (nonatomic, readonly) _Bool hasFullName;
@property (retain, nonatomic) NSString *fullName;

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
