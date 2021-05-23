/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBDateTime;

@protocol _INPBMessageLinkMetadata <Swift>

@property (copy, nonatomic) NSString *albumArtist;
@property (nonatomic, readonly) _Bool hasAlbumArtist;
@property (copy, nonatomic) NSString *albumName;
@property (nonatomic, readonly) _Bool hasAlbumName;
@property (copy, nonatomic) NSString *appleTvSubtitle;
@property (nonatomic, readonly) _Bool hasAppleTvSubtitle;
@property (copy, nonatomic) NSString *appleTvTitle;
@property (nonatomic, readonly) _Bool hasAppleTvTitle;
@property (copy, nonatomic) NSString *artistGenre;
@property (nonatomic, readonly) _Bool hasArtistGenre;
@property (copy, nonatomic) NSString *artistName;
@property (nonatomic, readonly) _Bool hasArtistName;
@property (copy, nonatomic) NSString *audioBookAuthor;
@property (nonatomic, readonly) _Bool hasAudioBookAuthor;
@property (copy, nonatomic) NSString *audioBookName;
@property (nonatomic, readonly) _Bool hasAudioBookName;
@property (copy, nonatomic) NSString *audioBookNarrator;
@property (nonatomic, readonly) _Bool hasAudioBookNarrator;
@property (copy, nonatomic) NSString *bookAuthor;
@property (nonatomic, readonly) _Bool hasBookAuthor;
@property (copy, nonatomic) NSString *bookName;
@property (nonatomic, readonly) _Bool hasBookName;
@property (copy, nonatomic) NSString *creator;
@property (nonatomic, readonly) _Bool hasCreator;
@property (copy, nonatomic) NSString *iTunesStoreFrontIdentifier;
@property (nonatomic, readonly) _Bool hasITunesStoreFrontIdentifier;
@property (copy, nonatomic) NSString *iTunesStoreIdentifier;
@property (nonatomic, readonly) _Bool hasITunesStoreIdentifier;
@property (copy, nonatomic) NSArray *iconURLs;
@property (nonatomic, readonly) unsigned long long iconURLsCount;
@property (copy, nonatomic) NSArray *imageURLs;
@property (nonatomic, readonly) unsigned long long imageURLsCount;
@property (copy, nonatomic) NSString *itemType;
@property (nonatomic, readonly) _Bool hasItemType;
@property (nonatomic) int linkMediaType;
@property (nonatomic) _Bool hasLinkMediaType;
@property (copy, nonatomic) NSString *movieBundleGenre;
@property (nonatomic, readonly) _Bool hasMovieBundleGenre;
@property (copy, nonatomic) NSString *movieBundleName;
@property (nonatomic, readonly) _Bool hasMovieBundleName;
@property (copy, nonatomic) NSString *movieGenre;
@property (nonatomic, readonly) _Bool hasMovieGenre;
@property (copy, nonatomic) NSString *movieName;
@property (nonatomic, readonly) _Bool hasMovieName;
@property (copy, nonatomic) NSString *musicVideoArtist;
@property (nonatomic, readonly) _Bool hasMusicVideoArtist;
@property (copy, nonatomic) NSString *musicVideoName;
@property (nonatomic, readonly) _Bool hasMusicVideoName;
@property (copy, nonatomic) NSString *originalURL;
@property (nonatomic, readonly) _Bool hasOriginalURL;
@property (copy, nonatomic) NSString *playlistCurator;
@property (nonatomic, readonly) _Bool hasPlaylistCurator;
@property (copy, nonatomic) NSString *playlistName;
@property (nonatomic, readonly) _Bool hasPlaylistName;
@property (copy, nonatomic) NSString *podcastArtist;
@property (nonatomic, readonly) _Bool hasPodcastArtist;
@property (copy, nonatomic) NSString *podcastEpisodeArtist;
@property (nonatomic, readonly) _Bool hasPodcastEpisodeArtist;
@property (copy, nonatomic) NSString *podcastEpisodeName;
@property (nonatomic, readonly) _Bool hasPodcastEpisodeName;
@property (copy, nonatomic) NSString *podcastEpisodePodcastName;
@property (nonatomic, readonly) _Bool hasPodcastEpisodePodcastName;
@property (retain, nonatomic) _INPBDateTime *podcastEpisodeReleaseDate;
@property (nonatomic, readonly) _Bool hasPodcastEpisodeReleaseDate;
@property (copy, nonatomic) NSString *podcastName;
@property (nonatomic, readonly) _Bool hasPodcastName;
@property (copy, nonatomic) NSString *radioCurator;
@property (nonatomic, readonly) _Bool hasRadioCurator;
@property (copy, nonatomic) NSString *radioName;
@property (nonatomic, readonly) _Bool hasRadioName;
@property (copy, nonatomic) NSString *siteName;
@property (nonatomic, readonly) _Bool hasSiteName;
@property (copy, nonatomic) NSString *softwareGenre;
@property (nonatomic, readonly) _Bool hasSoftwareGenre;
@property (copy, nonatomic) NSString *softwareName;
@property (nonatomic, readonly) _Bool hasSoftwareName;
@property (copy, nonatomic) NSString *softwarePlatform;
@property (nonatomic, readonly) _Bool hasSoftwarePlatform;
@property (copy, nonatomic) NSString *songAlbum;
@property (nonatomic, readonly) _Bool hasSongAlbum;
@property (copy, nonatomic) NSString *songArtist;
@property (nonatomic, readonly) _Bool hasSongArtist;
@property (copy, nonatomic) NSString *songTitle;
@property (nonatomic, readonly) _Bool hasSongTitle;
@property (copy, nonatomic) NSString *summary;
@property (nonatomic, readonly) _Bool hasSummary;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasTitle;
@property (copy, nonatomic) NSString *tvEpisodeEpisodeName;
@property (nonatomic, readonly) _Bool hasTvEpisodeEpisodeName;
@property (copy, nonatomic) NSString *tvEpisodeGenre;
@property (nonatomic, readonly) _Bool hasTvEpisodeGenre;
@property (copy, nonatomic) NSString *tvEpisodeSeasonName;
@property (nonatomic, readonly) _Bool hasTvEpisodeSeasonName;
@property (copy, nonatomic) NSString *tvSeasonGenre;
@property (nonatomic, readonly) _Bool hasTvSeasonGenre;
@property (copy, nonatomic) NSString *tvSeasonName;
@property (nonatomic, readonly) _Bool hasTvSeasonName;
@property (copy, nonatomic) NSString *tvShowName;
@property (nonatomic, readonly) _Bool hasTvShowName;

- (unsigned short)clearIconURLs;
- (unsigned short)addIconURL: /* Error: Ran out of types for this method. */;
- (unsigned short)iconURLAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearImageURLs;
- (unsigned short)addImageURL: /* Error: Ran out of types for this method. */;
- (unsigned short)imageURLAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)linkMediaTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsLinkMediaType: /* Error: Ran out of types for this method. */;

@end
