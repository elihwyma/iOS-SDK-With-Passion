/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class FCCKPOperation, FCCKPQueryRetrieveRequest, FCCKPRecordRetrieveRequest, FCCKPRequestOperationHeader;

@interface FCCKPRequestOperation : PBCodable <Swift>

{
    FCCKPRequestOperationHeader *_header;
    FCCKPQueryRetrieveRequest *_queryRetrieveRequest;
    FCCKPRecordRetrieveRequest *_recordRetrieveRequest;
    FCCKPOperation *_request;
}

@property (nonatomic, readonly) _Bool hasRecordRetrieveRequest;
@property (retain, nonatomic) FCCKPRecordRetrieveRequest *recordRetrieveRequest;
@property (nonatomic, readonly) _Bool hasQueryRetrieveRequest;
@property (retain, nonatomic) FCCKPQueryRetrieveRequest *queryRetrieveRequest;
@property (nonatomic, readonly) _Bool hasHeader;
@property (retain, nonatomic) FCCKPRequestOperationHeader *header;
@property (nonatomic, readonly) _Bool hasRequest;
@property (retain, nonatomic) FCCKPOperation *request;

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
