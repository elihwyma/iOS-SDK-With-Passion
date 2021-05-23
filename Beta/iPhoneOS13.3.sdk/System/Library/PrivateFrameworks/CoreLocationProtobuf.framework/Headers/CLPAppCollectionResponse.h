/*
 Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

#import <PBCodable.h>

@class NSString;

@interface CLPAppCollectionResponse : PBCodable

{
    NSString *_msg;
    _Bool _success;
}

@property (nonatomic) _Bool success;
@property (nonatomic, readonly) _Bool hasMsg;
@property (retain, nonatomic) NSString *msg;

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
