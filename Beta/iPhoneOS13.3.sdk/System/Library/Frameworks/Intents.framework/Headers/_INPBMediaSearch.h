/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBDateTimeRange, _INPBString;

@interface _INPBMediaSearch : PBCodable <Swift>

{
    struct {
        unsigned int mediaType:1;
        unsigned int reference:1;
        unsigned int sortOrder:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _mediaType;
    int _reference;
    int _sortOrder;
    _INPBString *_albumName;
    _INPBString *_artistName;
    NSArray *_genreNames;
    _INPBString *_mediaIdentifier;
    _INPBString *_mediaName;
    NSArray *_moodNames;
    _INPBDateTimeRange *_releaseDate;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBString *albumName;
@property (nonatomic, readonly) _Bool hasAlbumName;
@property (retain, nonatomic) _INPBString *artistName;
@property (nonatomic, readonly) _Bool hasArtistName;
@property (copy, nonatomic) NSArray *genreNames;
@property (nonatomic, readonly) unsigned long long genreNamesCount;
@property (retain, nonatomic) _INPBString *mediaIdentifier;
@property (nonatomic, readonly) _Bool hasMediaIdentifier;
@property (retain, nonatomic) _INPBString *mediaName;
@property (nonatomic, readonly) _Bool hasMediaName;
@property (nonatomic) int mediaType;
@property (nonatomic) _Bool hasMediaType;
@property (copy, nonatomic) NSArray *moodNames;
@property (nonatomic, readonly) unsigned long long moodNamesCount;
@property (nonatomic) int reference;
@property (nonatomic) _Bool hasReference;
@property (retain, nonatomic) _INPBDateTimeRange *releaseDate;
@property (nonatomic, readonly) _Bool hasReleaseDate;
@property (nonatomic) int sortOrder;
@property (nonatomic) _Bool hasSortOrder;

+ (_Bool)supportsSecureCoding;
+ (Class)genreNamesType;
+ (Class)moodNamesType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)sortOrderAsString:(int)arg1;
- (int)StringAsSortOrder:(id)arg1;
- (void)clearGenreNames;
- (void)addGenreNames:(id)arg1;
- (id)genreNamesAtIndex:(unsigned long long)arg1;
- (id)mediaTypeAsString:(int)arg1;
- (int)StringAsMediaType:(id)arg1;
- (void)clearMoodNames;
- (void)addMoodNames:(id)arg1;
- (id)moodNamesAtIndex:(unsigned long long)arg1;
- (id)referenceAsString:(int)arg1;
- (int)StringAsReference:(id)arg1;

@end
