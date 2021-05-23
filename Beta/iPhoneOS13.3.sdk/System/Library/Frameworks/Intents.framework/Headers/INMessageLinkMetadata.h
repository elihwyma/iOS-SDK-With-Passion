/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSDateComponents, NSString;

@interface INMessageLinkMetadata : NSObject <Swift>

{
    NSString *_siteName;
    NSString *_summary;
    NSString *_title;
    NSString *_itemType;
    NSString *_originalURL;
    NSArray *_imageURLs;
    NSArray *_iconURLs;
    NSString *_creator;
    long long _linkMediaType;
    NSString *_iTunesStoreIdentifier;
    NSString *_iTunesStoreFrontIdentifier;
    NSString *_songTitle;
    NSString *_songArtist;
    NSString *_songAlbum;
    NSString *_albumName;
    NSString *_albumArtist;
    NSString *_musicVideoName;
    NSString *_musicVideoArtist;
    NSString *_artistName;
    NSString *_artistGenre;
    NSString *_playlistName;
    NSString *_playlistCurator;
    NSString *_radioName;
    NSString *_radioCurator;
    NSString *_softwareName;
    NSString *_softwareGenre;
    NSString *_softwarePlatform;
    NSString *_bookName;
    NSString *_bookAuthor;
    NSString *_audioBookName;
    NSString *_audioBookAuthor;
    NSString *_audioBookNarrator;
    NSString *_podcastName;
    NSString *_podcastArtist;
    NSString *_podcastEpisodeName;
    NSString *_podcastEpisodePodcastName;
    NSString *_podcastEpisodeArtist;
    NSDateComponents *_podcastEpisodeReleaseDate;
    NSString *_tvEpisodeEpisodeName;
    NSString *_tvEpisodeSeasonName;
    NSString *_tvEpisodeGenre;
    NSString *_tvSeasonName;
    NSString *_tvSeasonGenre;
    NSString *_movieName;
    NSString *_movieGenre;
    NSString *_tvShowName;
    NSString *_movieBundleName;
    NSString *_movieBundleGenre;
    NSString *_appleTvTitle;
    NSString *_appleTvSubtitle;
}

@property (copy, nonatomic) NSString *siteName;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *itemType;
@property (copy, nonatomic) NSString *originalURL;
@property (copy, nonatomic) NSArray *imageURLs;
@property (copy, nonatomic) NSArray *iconURLs;
@property (copy, nonatomic) NSString *creator;
@property (nonatomic) long long linkMediaType;
@property (copy, nonatomic) NSString *iTunesStoreIdentifier;
@property (copy, nonatomic) NSString *iTunesStoreFrontIdentifier;
@property (copy, nonatomic) NSString *songTitle;
@property (copy, nonatomic) NSString *songArtist;
@property (copy, nonatomic) NSString *songAlbum;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSString *albumArtist;
@property (copy, nonatomic) NSString *musicVideoName;
@property (copy, nonatomic) NSString *musicVideoArtist;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *artistGenre;
@property (copy, nonatomic) NSString *playlistName;
@property (copy, nonatomic) NSString *playlistCurator;
@property (copy, nonatomic) NSString *radioName;
@property (copy, nonatomic) NSString *radioCurator;
@property (copy, nonatomic) NSString *softwareName;
@property (copy, nonatomic) NSString *softwareGenre;
@property (copy, nonatomic) NSString *softwarePlatform;
@property (copy, nonatomic) NSString *bookName;
@property (copy, nonatomic) NSString *bookAuthor;
@property (copy, nonatomic) NSString *audioBookName;
@property (copy, nonatomic) NSString *audioBookAuthor;
@property (copy, nonatomic) NSString *audioBookNarrator;
@property (copy, nonatomic) NSString *podcastName;
@property (copy, nonatomic) NSString *podcastArtist;
@property (copy, nonatomic) NSString *podcastEpisodeName;
@property (copy, nonatomic) NSString *podcastEpisodePodcastName;
@property (copy, nonatomic) NSString *podcastEpisodeArtist;
@property (copy, nonatomic) NSDateComponents *podcastEpisodeReleaseDate;
@property (copy, nonatomic) NSString *tvEpisodeEpisodeName;
@property (copy, nonatomic) NSString *tvEpisodeSeasonName;
@property (copy, nonatomic) NSString *tvEpisodeGenre;
@property (copy, nonatomic) NSString *tvSeasonName;
@property (copy, nonatomic) NSString *tvSeasonGenre;
@property (copy, nonatomic) NSString *movieName;
@property (copy, nonatomic) NSString *movieGenre;
@property (copy, nonatomic) NSString *tvShowName;
@property (copy, nonatomic) NSString *movieBundleName;
@property (copy, nonatomic) NSString *movieBundleGenre;
@property (copy, nonatomic) NSString *appleTvTitle;
@property (copy, nonatomic) NSString *appleTvSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithSiteName:(id)arg1 summary:(id)arg2 title:(id)arg3 itemType:(id)arg4 originalURL:(id)arg5 imageURLs:(id)arg6 iconURLs:(id)arg7 creator:(id)arg8 linkMediaType:(long long)arg9 iTunesStoreIdentifier:(id)arg10 iTunesStoreFrontIdentifier:(id)arg11 songTitle:(id)arg12 songArtist:(id)arg13 songAlbum:(id)arg14 albumName:(id)arg15 albumArtist:(id)arg16 musicVideoName:(id)arg17 musicVideoArtist:(id)arg18 artistName:(id)arg19 artistGenre:(id)arg20 playlistName:(id)arg21 playlistCurator:(id)arg22 radioName:(id)arg23 radioCurator:(id)arg24 softwareName:(id)arg25 softwareGenre:(id)arg26 softwarePlatform:(id)arg27 bookName:(id)arg28 bookAuthor:(id)arg29 audioBookName:(id)arg30 audioBookAuthor:(id)arg31 audioBookNarrator:(id)arg32 podcastName:(id)arg33 podcastArtist:(id)arg34 podcastEpisodeName:(id)arg35 podcastEpisodePodcastName:(id)arg36 podcastEpisodeArtist:(id)arg37 podcastEpisodeReleaseDate:(id)arg38 tvEpisodeEpisodeName:(id)arg39 tvEpisodeSeasonName:(id)arg40 tvEpisodeGenre:(id)arg41 tvSeasonName:(id)arg42 tvSeasonGenre:(id)arg43 movieName:(id)arg44 movieGenre:(id)arg45 tvShowName:(id)arg46 movieBundleName:(id)arg47 movieBundleGenre:(id)arg48 appleTvTitle:(id)arg49 appleTvSubtitle:(id)arg50;
- (id)initWithSiteName:(id)arg1 summary:(id)arg2 title:(id)arg3 itemType:(id)arg4 originalURL:(id)arg5 imageURLs:(id)arg6 iconURLs:(id)arg7 creator:(id)arg8 linkMediaType:(long long)arg9 iTunesStoreIdentifier:(id)arg10 iTunesStoreFrontIdentifier:(id)arg11 songTitle:(id)arg12 songArtist:(id)arg13 songAlbum:(id)arg14 albumName:(id)arg15 albumArtist:(id)arg16 musicVideoName:(id)arg17 musicVideoArtist:(id)arg18 artistName:(id)arg19 artistGenre:(id)arg20 playlistName:(id)arg21 playlistCurator:(id)arg22 radioName:(id)arg23 radioCurator:(id)arg24 softwareName:(id)arg25 softwareGenre:(id)arg26 softwarePlatform:(id)arg27 bookName:(id)arg28 bookAuthor:(id)arg29 audioBookName:(id)arg30 audioBookAuthor:(id)arg31 audioBookNarrator:(id)arg32 podcastName:(id)arg33 podcastArtist:(id)arg34 podcastEpisodeName:(id)arg35 podcastEpisodePodcastName:(id)arg36 podcastEpisodeArtist:(id)arg37 podcastEpisodeReleaseDate:(id)arg38 tvEpisodeEpisodeName:(id)arg39 tvEpisodeSeasonName:(id)arg40 tvEpisodeGenre:(id)arg41 tvSeasonName:(id)arg42 tvSeasonGenre:(id)arg43 movieName:(id)arg44 movieGenre:(id)arg45;

@end
