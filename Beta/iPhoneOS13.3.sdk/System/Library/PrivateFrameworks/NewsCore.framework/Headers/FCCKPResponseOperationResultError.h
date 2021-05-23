/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class FCCKPResponseOperationResultErrorClient, FCCKPResponseOperationResultErrorExtension, FCCKPResponseOperationResultErrorServer, NSString;

@interface FCCKPResponseOperationResultError : PBCodable <Swift>

{
    FCCKPResponseOperationResultErrorClient *_clientError;
    NSString *_errorDescription;
    NSString *_errorKey;
    FCCKPResponseOperationResultErrorExtension *_extensionError;
    int _retryAfterSeconds;
    FCCKPResponseOperationResultErrorServer *_serverError;
    struct {
        unsigned int retryAfterSeconds:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasClientError;
@property (retain, nonatomic) FCCKPResponseOperationResultErrorClient *clientError;
@property (nonatomic, readonly) _Bool hasServerError;
@property (retain, nonatomic) FCCKPResponseOperationResultErrorServer *serverError;
@property (nonatomic, readonly) _Bool hasExtensionError;
@property (retain, nonatomic) FCCKPResponseOperationResultErrorExtension *extensionError;
@property (nonatomic) _Bool hasRetryAfterSeconds;
@property (nonatomic) int retryAfterSeconds;
@property (nonatomic, readonly) _Bool hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;
@property (nonatomic, readonly) _Bool hasErrorKey;
@property (retain, nonatomic) NSString *errorKey;

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
