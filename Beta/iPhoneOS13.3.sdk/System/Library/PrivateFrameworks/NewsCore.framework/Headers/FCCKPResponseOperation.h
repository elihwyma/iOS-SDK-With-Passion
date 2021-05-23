/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class FCCKPOperation, FCCKPQueryRetrieveResponse, FCCKPRecordRetrieveResponse, FCCKPResponseOperationResult;

@interface FCCKPResponseOperation : PBCodable <Swift>

{
    unsigned int _operationCost;
    FCCKPQueryRetrieveResponse *_queryRetrieveResponse;
    FCCKPRecordRetrieveResponse *_recordRetrieveResponse;
    FCCKPOperation *_response;
    FCCKPResponseOperationResult *_result;
    struct {
        unsigned int operationCost:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasRecordRetrieveResponse;
@property (retain, nonatomic) FCCKPRecordRetrieveResponse *recordRetrieveResponse;
@property (nonatomic, readonly) _Bool hasQueryRetrieveResponse;
@property (retain, nonatomic) FCCKPQueryRetrieveResponse *queryRetrieveResponse;
@property (nonatomic) _Bool hasOperationCost;
@property (nonatomic) unsigned int operationCost;
@property (nonatomic, readonly) _Bool hasResponse;
@property (retain, nonatomic) FCCKPOperation *response;
@property (nonatomic, readonly) _Bool hasResult;
@property (retain, nonatomic) FCCKPResponseOperationResult *result;

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
