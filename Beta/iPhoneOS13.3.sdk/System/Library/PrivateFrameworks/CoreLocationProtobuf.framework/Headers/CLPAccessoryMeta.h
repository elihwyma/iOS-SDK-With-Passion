/*
 Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

#import <PBCodable.h>

@class NSString;

@interface CLPAccessoryMeta : PBCodable

{
    NSString *_make;
    NSString *_model;
    NSString *_version;
}

@property (nonatomic, readonly) _Bool hasMake;
@property (retain, nonatomic) NSString *make;
@property (nonatomic, readonly) _Bool hasModel;
@property (retain, nonatomic) NSString *model;
@property (nonatomic, readonly) _Bool hasVersion;
@property (retain, nonatomic) NSString *version;

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
