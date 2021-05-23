/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOSearchAttribution : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributionURLs;
    NSString *_sourceIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _sourceVersion;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_attributionURLs:1;
        unsigned int read_sourceIdentifier:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_attributionURLs:1;
        unsigned int wrote_sourceIdentifier:1;
        unsigned int wrote_sourceVersion:1;
    } _flags;
}

@property (retain, nonatomic) NSString *sourceIdentifier;
@property (nonatomic) unsigned int sourceVersion;
@property (retain, nonatomic) NSMutableArray *attributionURLs;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)attributionURLsType;

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
- (void)_readSourceIdentifier;
- (void)_readAttributionURLs;
- (void)_addNoFlagsAttributionURLs:(id)arg1;
- (unsigned long long)attributionURLsCount;
- (void)clearAttributionURLs;
- (id)attributionURLsAtIndex:(unsigned long long)arg1;
- (void)addAttributionURLs:(id)arg1;

@end
