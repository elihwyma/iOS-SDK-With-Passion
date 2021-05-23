/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAssociatedApp : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_alternateAppAdamIds;
    NSString *_preferredAppAdamId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_alternateAppAdamIds:1;
        unsigned int read_preferredAppAdamId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_alternateAppAdamIds:1;
        unsigned int wrote_preferredAppAdamId:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasPreferredAppAdamId;
@property (retain, nonatomic) NSString *preferredAppAdamId;
@property (retain, nonatomic) NSMutableArray *alternateAppAdamIds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)associatedAppForPlaceData:(id)arg1;
+ (Class)alternateAppAdamIdType;

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
- (void)_readPreferredAppAdamId;
- (void)_readAlternateAppAdamIds;
- (void)_addNoFlagsAlternateAppAdamId:(id)arg1;
- (unsigned long long)alternateAppAdamIdsCount;
- (void)clearAlternateAppAdamIds;
- (id)alternateAppAdamIdAtIndex:(unsigned long long)arg1;
- (void)addAlternateAppAdamId:(id)arg1;

@end
