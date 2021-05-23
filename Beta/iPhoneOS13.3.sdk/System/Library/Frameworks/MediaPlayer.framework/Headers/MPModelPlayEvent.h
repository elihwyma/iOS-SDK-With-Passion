/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class MPModelAlbum, MPModelArtist, MPModelPlaylist, MPModelRadioStation, NSDate;

@interface MPModelPlayEvent : MPModelObject

@property (copy, nonatomic) NSDate *datePlayed;
@property (retain, nonatomic) MPModelAlbum *album;
@property (retain, nonatomic) MPModelArtist *artist;
@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (retain, nonatomic) MPModelRadioStation *radioStation;

+ (id)__album_KEY;
+ (id)__artist_KEY;
+ (id)__datePlayed_KEY;
+ (id)__playlist_KEY;
+ (id)__radioStation_KEY;

- (long long)itemType;
- (id)genericObjectRepresentation;
- (id)contentItemCollectionInfo;

@end
