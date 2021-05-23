/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPResponseOperationResultErrorAuxiliaryError, CKDPResponseOperationResultErrorClient, CKDPResponseOperationResultErrorExtension, CKDPResponseOperationResultErrorServer, NSString;

@interface CKDPResponseOperationResultError : PBCodable

{
    CKDPResponseOperationResultErrorAuxiliaryError *_auxiliaryError;
    CKDPResponseOperationResultErrorClient *_clientError;
    NSString *_errorDescription;
    NSString *_errorInternal;
    NSString *_errorKey;
    CKDPResponseOperationResultErrorExtension *_extensionError;
    int _retryAfterSeconds;
    CKDPResponseOperationResultErrorServer *_serverError;
    struct {
        unsigned int retryAfterSeconds:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasClientError;
@property (retain, nonatomic) CKDPResponseOperationResultErrorClient *clientError;
@property (nonatomic, readonly) _Bool hasServerError;
@property (retain, nonatomic) CKDPResponseOperationResultErrorServer *serverError;
@property (nonatomic, readonly) _Bool hasExtensionError;
@property (retain, nonatomic) CKDPResponseOperationResultErrorExtension *extensionError;
@property (nonatomic, readonly) _Bool hasAuxiliaryError;
@property (retain, nonatomic) CKDPResponseOperationResultErrorAuxiliaryError *auxiliaryError;
@property (nonatomic) _Bool hasRetryAfterSeconds;
@property (nonatomic) int retryAfterSeconds;
@property (nonatomic, readonly) _Bool hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;
@property (nonatomic, readonly) _Bool hasErrorKey;
@property (retain, nonatomic) NSString *errorKey;
@property (nonatomic, readonly) _Bool hasErrorInternal;
@property (retain, nonatomic) NSString *errorInternal;

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
