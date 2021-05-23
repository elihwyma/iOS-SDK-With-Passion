/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString, _MRContentItemMetadataProtobuf, _MRLyricsItemProtobuf;

@interface _MRContentItemProtobuf : PBCodable

{
    NSString *_ancestorIdentifier;
    NSData *_artworkData;
    int _artworkDataHeight;
    int _artworkDataWidth;
    NSMutableArray *_availableLanguageOptions;
    NSMutableArray *_currentLanguageOptions;
    NSString *_identifier;
    NSString *_info;
    _MRLyricsItemProtobuf *_lyrics;
    _MRContentItemMetadataProtobuf *_metadata;
    NSString *_parentIdentifier;
    NSString *_queueIdentifier;
    NSString *_requestIdentifier;
    NSMutableArray *_sections;
    struct {
        unsigned int artworkDataHeight:1;
        unsigned int artworkDataWidth:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasMetadata;
@property (retain, nonatomic) _MRContentItemMetadataProtobuf *metadata;
@property (nonatomic, readonly) _Bool hasArtworkData;
@property (retain, nonatomic) NSData *artworkData;
@property (nonatomic, readonly) _Bool hasInfo;
@property (retain, nonatomic) NSString *info;
@property (retain, nonatomic) NSMutableArray *availableLanguageOptions;
@property (retain, nonatomic) NSMutableArray *currentLanguageOptions;
@property (nonatomic, readonly) _Bool hasLyrics;
@property (retain, nonatomic) _MRLyricsItemProtobuf *lyrics;
@property (retain, nonatomic) NSMutableArray *sections;
@property (nonatomic, readonly) _Bool hasParentIdentifier;
@property (retain, nonatomic) NSString *parentIdentifier;
@property (nonatomic, readonly) _Bool hasAncestorIdentifier;
@property (retain, nonatomic) NSString *ancestorIdentifier;
@property (nonatomic, readonly) _Bool hasQueueIdentifier;
@property (retain, nonatomic) NSString *queueIdentifier;
@property (nonatomic, readonly) _Bool hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (nonatomic) _Bool hasArtworkDataWidth;
@property (nonatomic) int artworkDataWidth;
@property (nonatomic) _Bool hasArtworkDataHeight;
@property (nonatomic) int artworkDataHeight;

+ (void)initialize;
+ (Class)sectionsType;
+ (Class)availableLanguageOptionsType;
+ (Class)currentLanguageOptionsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)sectionsCount;
- (void)clearSections;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (void)addSections:(id)arg1;
- (id)_initWithData:(id)arg1;
- (void)addAvailableLanguageOptions:(id)arg1;
- (void)addCurrentLanguageOptions:(id)arg1;
- (unsigned long long)availableLanguageOptionsCount;
- (void)clearAvailableLanguageOptions;
- (id)availableLanguageOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentLanguageOptionsCount;
- (void)clearCurrentLanguageOptions;
- (id)currentLanguageOptionsAtIndex:(unsigned long long)arg1;

@end
