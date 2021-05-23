/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h>

@class GEOPDClientMetadata, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOABAssignmentRequest : PBRequest

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDClientMetadata *_clientMetadata;
    NSString *_guid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _requestType;
    struct {
        unsigned int has_requestType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_clientMetadata:1;
        unsigned int read_guid:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_clientMetadata:1;
        unsigned int wrote_guid:1;
        unsigned int wrote_requestType:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) _Bool hasRequestType;
@property (nonatomic) int requestType;
@property (nonatomic, readonly) _Bool hasClientMetadata;
@property (retain, nonatomic) GEOPDClientMetadata *clientMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (id)requestTypeAsString:(int)arg1;
- (int)StringAsRequestType:(id)arg1;
- (void)clearSensitiveFields;
- (void)_readClientMetadata;
- (void)_readGuid;

@end
