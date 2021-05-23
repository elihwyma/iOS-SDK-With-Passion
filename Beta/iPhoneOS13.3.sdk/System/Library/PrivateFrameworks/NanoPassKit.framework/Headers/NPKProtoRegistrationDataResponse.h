/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface NPKProtoRegistrationDataResponse : PBCodable

{
    NSString *_pushToken;
    NSData *_registrationDataBytes;
    _Bool _pending;
    CDStruct_eab6c78c _has;
}

@property (nonatomic) _Bool hasPending;
@property (nonatomic) _Bool pending;
@property (nonatomic, readonly) _Bool hasRegistrationDataBytes;
@property (retain, nonatomic) NSData *registrationDataBytes;
@property (nonatomic, readonly) _Bool hasPushToken;
@property (retain, nonatomic) NSString *pushToken;

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
