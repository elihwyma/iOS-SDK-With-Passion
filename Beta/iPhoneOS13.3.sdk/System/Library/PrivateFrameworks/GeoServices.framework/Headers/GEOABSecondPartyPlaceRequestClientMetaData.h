/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDABClientDatasetMetadata, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOABSecondPartyPlaceRequestClientMetaData : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_clientConfigs;
    GEOPDABClientDatasetMetadata *_clientDatasetMetadata;
    NSMutableArray *_serverAbAssignments;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_clientConfigs:1;
        unsigned int read_clientDatasetMetadata:1;
        unsigned int read_serverAbAssignments:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_clientConfigs:1;
        unsigned int wrote_clientDatasetMetadata:1;
        unsigned int wrote_serverAbAssignments:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *serverAbAssignments;
@property (retain, nonatomic) NSMutableArray *clientConfigs;
@property (nonatomic, readonly) _Bool hasClientDatasetMetadata;
@property (retain, nonatomic) GEOPDABClientDatasetMetadata *clientDatasetMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)serverAbAssignmentType;
+ (Class)clientConfigType;

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
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readServerAbAssignments;
- (void)_addNoFlagsServerAbAssignment:(id)arg1;
- (void)_readClientConfigs;
- (void)_addNoFlagsClientConfig:(id)arg1;
- (void)_readClientDatasetMetadata;
- (unsigned long long)serverAbAssignmentsCount;
- (void)clearServerAbAssignments;
- (id)serverAbAssignmentAtIndex:(unsigned long long)arg1;
- (void)addServerAbAssignment:(id)arg1;
- (unsigned long long)clientConfigsCount;
- (void)clearClientConfigs;
- (id)clientConfigAtIndex:(unsigned long long)arg1;
- (void)addClientConfig:(id)arg1;

@end
