/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBDateTimeRange, _INPBString;

@protocol _INPBMediaSearch <Swift>

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

+ (unsigned short)genreNamesType;
+ (unsigned short)moodNamesType;

- (unsigned short)sortOrderAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsSortOrder: /* Error: Ran out of types for this method. */;
- (unsigned short)clearGenreNames;
- (unsigned short)addGenreNames: /* Error: Ran out of types for this method. */;
- (unsigned short)genreNamesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)mediaTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsMediaType: /* Error: Ran out of types for this method. */;
- (unsigned short)clearMoodNames;
- (unsigned short)addMoodNames: /* Error: Ran out of types for this method. */;
- (unsigned short)moodNamesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)referenceAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsReference: /* Error: Ran out of types for this method. */;

@end
