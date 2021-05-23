/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NPKProtoRemoteAdminPerformResponse : PBCodable

{
    int _httpStatus;
    NSData *_responseDictionary;
    unsigned int _resultCode;
    struct {
        unsigned int httpStatus:1;
    } _has;
}

@property (nonatomic) unsigned int resultCode;
@property (nonatomic, readonly) _Bool hasResponseDictionary;
@property (retain, nonatomic) NSData *responseDictionary;
@property (nonatomic) _Bool hasHttpStatus;
@property (nonatomic) int httpStatus;

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
