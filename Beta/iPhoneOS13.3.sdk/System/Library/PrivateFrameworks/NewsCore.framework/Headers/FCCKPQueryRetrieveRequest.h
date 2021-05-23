/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBRequest.h>

#import <NewsCore/Swift-Protocol.h>

@class FCCKPQuery, FCCKPRecordZoneIdentifier, FCCKPRequestedFields, NSData;

@interface FCCKPQueryRetrieveRequest : PBRequest <Swift>

{
    NSData *_continuationMarker;
    unsigned int _limit;
    FCCKPQuery *_query;
    FCCKPRequestedFields *_requestedFields;
    FCCKPRecordZoneIdentifier *_zoneIdentifier;
    struct {
        unsigned int limit:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasQuery;
@property (retain, nonatomic) FCCKPQuery *query;
@property (nonatomic, readonly) _Bool hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;
@property (nonatomic) _Bool hasLimit;
@property (nonatomic) unsigned int limit;
@property (nonatomic, readonly) _Bool hasZoneIdentifier;
@property (retain, nonatomic) FCCKPRecordZoneIdentifier *zoneIdentifier;
@property (nonatomic, readonly) _Bool hasRequestedFields;
@property (retain, nonatomic) FCCKPRequestedFields *requestedFields;

+ (id)options;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
