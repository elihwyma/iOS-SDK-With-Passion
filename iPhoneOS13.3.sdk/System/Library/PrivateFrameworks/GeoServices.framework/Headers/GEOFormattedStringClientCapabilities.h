//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class PBUnknownFields;

@interface GEOFormattedStringClientCapabilities : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    BOOL _concatenatingFormatStringsSupported;
    BOOL _styleSupported;
    BOOL _timestampFormatPatternSupported;
    struct {
        unsigned int has_concatenatingFormatStringsSupported:1;
        unsigned int has_styleSupported:1;
        unsigned int has_timestampFormatPatternSupported:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
@property(nonatomic) BOOL hasStyleSupported;
@property(nonatomic) BOOL styleSupported;
@property(nonatomic) BOOL hasTimestampFormatPatternSupported;
@property(nonatomic) BOOL timestampFormatPatternSupported;
@property(nonatomic) BOOL hasConcatenatingFormatStringsSupported;
@property(nonatomic) BOOL concatenatingFormatStringsSupported;

@end

