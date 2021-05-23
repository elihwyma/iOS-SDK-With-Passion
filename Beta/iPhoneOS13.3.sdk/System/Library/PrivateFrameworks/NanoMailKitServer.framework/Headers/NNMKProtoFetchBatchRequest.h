/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

@interface NNMKProtoFetchBatchRequest : PBRequest

{
    NSMutableArray *_fetchRequests;
    unsigned int _fullSyncVersion;
    _Bool _wantsBatchedResponse;
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int wantsBatchedResponse:1;
    } _has;
}

@property (nonatomic) _Bool hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (retain, nonatomic) NSMutableArray *fetchRequests;
@property (nonatomic) _Bool hasWantsBatchedResponse;
@property (nonatomic) _Bool wantsBatchedResponse;

+ (Class)fetchRequestType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addFetchRequest:(id)arg1;
- (unsigned long long)fetchRequestsCount;
- (void)clearFetchRequests;
- (id)fetchRequestAtIndex:(unsigned long long)arg1;

@end
