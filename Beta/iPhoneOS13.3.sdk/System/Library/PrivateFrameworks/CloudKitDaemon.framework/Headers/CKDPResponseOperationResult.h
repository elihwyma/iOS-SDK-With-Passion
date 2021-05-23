/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPResponseOperationResultError;

@interface CKDPResponseOperationResult : PBCodable

{
    int _code;
    CKDPResponseOperationResultError *_error;
    CDStruct_9ab06576 _has;
}

@property (nonatomic) _Bool hasCode;
@property (nonatomic) int code;
@property (nonatomic, readonly) _Bool hasError;
@property (retain, nonatomic) CKDPResponseOperationResultError *error;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)codeAsString:(int)arg1;
- (int)StringAsCode:(id)arg1;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

@end
