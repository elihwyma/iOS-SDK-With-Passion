//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOURLOptions, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOURLPresent : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_items;
    GEOURLOptions *_options;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_items:1;
        unsigned int read_options:1;
        unsigned int wrote_items:1;
        unsigned int wrote_options:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)itemType;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOURLOptions *options;
@property(readonly, nonatomic) BOOL hasOptions;
- (void)_readOptions;
- (id)itemAtIndex:(NSUInteger)arg1;
- (NSUInteger)itemsCount;
- (void)_addNoFlagsItem:(id)arg1;
- (void)addItem:(id)arg1;
- (void)clearItems;
@property(retain, nonatomic) NSMutableArray *items;
- (void)_readItems;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithDirectionsOptions:(id)arg1;
- (id)initWithOptions:(id)arg1;

@end

