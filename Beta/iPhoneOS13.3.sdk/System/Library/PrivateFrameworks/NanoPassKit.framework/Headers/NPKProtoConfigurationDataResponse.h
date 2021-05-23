/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NPKProtoConfigurationDataResponse : PBCodable

{
    NSData *_configurationDataBytes;
    _Bool _pending;
    CDStruct_eab6c78c _has;
}

@property (nonatomic) _Bool hasPending;
@property (nonatomic) _Bool pending;
@property (nonatomic, readonly) _Bool hasConfigurationDataBytes;
@property (retain, nonatomic) NSData *configurationDataBytes;

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
