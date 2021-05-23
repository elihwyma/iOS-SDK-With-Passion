/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface AWDMailError : PBCodable

{
    long long _genericErrorCode;
    int _errorCode;
    struct {
        unsigned int genericErrorCode:1;
        unsigned int errorCode:1;
    } _has;
}

@property (nonatomic) _Bool hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) _Bool hasGenericErrorCode;
@property (nonatomic) long long genericErrorCode;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)errorCodeAsString:(int)arg1;
- (int)StringAsErrorCode:(id)arg1;

@end
