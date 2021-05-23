/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOURLOptions, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOURLPresent : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_items;
    GEOURLOptions *_options;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_items:1;
        unsigned int read_options:1;
        unsigned int wrote_items:1;
        unsigned int wrote_options:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic, readonly) _Bool hasOptions;
@property (retain, nonatomic) GEOURLOptions *options;

+ (_Bool)isValid:(id)arg1;
+ (Class)itemType;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addItem:(id)arg1;
- (unsigned long long)itemsCount;
- (id)itemAtIndex:(unsigned long long)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithDirectionsOptions:(id)arg1;
- (void)_readItems;
- (void)_addNoFlagsItem:(id)arg1;
- (void)_readOptions;
- (void)clearItems;

@end
