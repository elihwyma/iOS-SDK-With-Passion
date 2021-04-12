//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOStyleAttributes, NSString, PBDataReader;

@interface GEOWalletCategoryMapping : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOStyleAttributes *_stylesAttributes;
    NSString *_walletCategory;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_stylesAttributes:1;
        unsigned int read_walletCategory:1;
        unsigned int wrote_stylesAttributes:1;
        unsigned int wrote_walletCategory:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(retain, nonatomic) GEOStyleAttributes *stylesAttributes;
@property(readonly, nonatomic) BOOL hasStylesAttributes;
- (void)_readStylesAttributes;
@property(retain, nonatomic) NSString *walletCategory;
@property(readonly, nonatomic) BOOL hasWalletCategory;
- (void)_readWalletCategory;
- (id)initWithData:(id)arg1;
- (id)init;

@end

