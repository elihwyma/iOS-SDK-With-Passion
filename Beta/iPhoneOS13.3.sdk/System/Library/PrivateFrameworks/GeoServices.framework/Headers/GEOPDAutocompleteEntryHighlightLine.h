/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteEntryHighlightLine : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_line;
    NSMutableArray *_spans;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_line:1;
        unsigned int read_spans:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_line:1;
        unsigned int wrote_spans:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasLine;
@property (retain, nonatomic) NSString *line;
@property (retain, nonatomic) NSMutableArray *spans;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)spanType;

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
- (unsigned long long)spansCount;
- (void)_readLine;
- (void)_readSpans;
- (void)_addNoFlagsSpan:(id)arg1;
- (void)clearSpans;
- (id)spanAtIndex:(unsigned long long)arg1;
- (void)addSpan:(id)arg1;

@end
