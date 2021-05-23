/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOConditionalFormattedString, NSArray, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@protocol GEOServerConditionalString;

@interface GEOFormattedString : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOConditionalFormattedString *_alternativeString;
    NSMutableArray *_formatArguments;
    NSMutableArray *_formatStrings;
    NSMutableArray *_formatStyles;
    NSMutableArray *_separators;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_alternativeString:1;
        unsigned int read_formatArguments:1;
        unsigned int read_formatStrings:1;
        unsigned int read_formatStyles:1;
        unsigned int read_separators:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_alternativeString:1;
        unsigned int wrote_formatArguments:1;
        unsigned int wrote_formatStrings:1;
        unsigned int wrote_formatStyles:1;
        unsigned int wrote_separators:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *formatStrings;
@property (nonatomic, readonly) NSArray *formatTokens;
@property (nonatomic, readonly) NSArray *separators;
@property (nonatomic, readonly) NSArray *formatStyles;
@property (nonatomic, readonly) id <GEOServerConditionalString> alternativeString;
@property (retain, nonatomic) NSMutableArray *formatStrings;
@property (retain, nonatomic) NSMutableArray *formatArguments;
@property (retain, nonatomic) NSMutableArray *separators;
@property (retain, nonatomic) NSMutableArray *formatStyles;
@property (nonatomic, readonly) _Bool hasAlternativeString;
@property (retain, nonatomic) GEOConditionalFormattedString *alternativeString;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)formatStringType;
+ (Class)formatArgumentType;
+ (Class)separatorType;
+ (Class)formatStyleType;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readFormatStrings;
- (void)_addNoFlagsFormatString:(id)arg1;
- (void)_readFormatArguments;
- (void)_addNoFlagsFormatArgument:(id)arg1;
- (void)_readSeparators;
- (void)_addNoFlagsSeparator:(id)arg1;
- (void)_readFormatStyles;
- (void)_addNoFlagsFormatStyle:(id)arg1;
- (void)_readAlternativeString;
- (unsigned long long)formatStringsCount;
- (void)clearFormatStrings;
- (id)formatStringAtIndex:(unsigned long long)arg1;
- (void)addFormatString:(id)arg1;
- (unsigned long long)formatArgumentsCount;
- (void)clearFormatArguments;
- (id)formatArgumentAtIndex:(unsigned long long)arg1;
- (void)addFormatArgument:(id)arg1;
- (unsigned long long)separatorsCount;
- (void)clearSeparators;
- (id)separatorAtIndex:(unsigned long long)arg1;
- (void)addSeparator:(id)arg1;
- (unsigned long long)formatStylesCount;
- (void)clearFormatStyles;
- (id)formatStyleAtIndex:(unsigned long long)arg1;
- (void)addFormatStyle:(id)arg1;

@end
