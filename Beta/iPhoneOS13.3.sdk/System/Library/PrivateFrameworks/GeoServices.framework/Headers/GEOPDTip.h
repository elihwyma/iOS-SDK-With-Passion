/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDUser, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTip : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_snippets;
    NSString *_tipId;
    double _tipTime;
    GEOPDUser *_tipster;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_tipTime:1;
        unsigned int read_unknownFields:1;
        unsigned int read_snippets:1;
        unsigned int read_tipId:1;
        unsigned int read_tipster:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_snippets:1;
        unsigned int wrote_tipId:1;
        unsigned int wrote_tipTime:1;
        unsigned int wrote_tipster:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *snippets;
@property (nonatomic) _Bool hasTipTime;
@property (nonatomic) double tipTime;
@property (nonatomic, readonly) _Bool hasTipster;
@property (retain, nonatomic) GEOPDUser *tipster;
@property (nonatomic, readonly) _Bool hasTipId;
@property (retain, nonatomic) NSString *tipId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)tipsForPlaceData:(id)arg1;
+ (Class)snippetType;

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
- (void)_readSnippets;
- (void)_addNoFlagsSnippet:(id)arg1;
- (unsigned long long)snippetsCount;
- (void)clearSnippets;
- (id)snippetAtIndex:(unsigned long long)arg1;
- (void)addSnippet:(id)arg1;
- (void)_readTipster;
- (void)_readTipId;

@end
