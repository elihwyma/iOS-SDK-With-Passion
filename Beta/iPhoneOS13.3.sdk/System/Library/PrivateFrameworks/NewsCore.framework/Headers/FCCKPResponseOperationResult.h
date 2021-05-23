/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class FCCKPResponseOperationResultError;

@interface FCCKPResponseOperationResult : PBCodable <Swift>

{
    int _code;
    FCCKPResponseOperationResultError *_error;
    struct {
        unsigned int code:1;
    } _has;
}

@property (nonatomic) _Bool hasCode;
@property (nonatomic) int code;
@property (nonatomic, readonly) _Bool hasError;
@property (retain, nonatomic) FCCKPResponseOperationResultError *error;

- (void)dealloc;
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
