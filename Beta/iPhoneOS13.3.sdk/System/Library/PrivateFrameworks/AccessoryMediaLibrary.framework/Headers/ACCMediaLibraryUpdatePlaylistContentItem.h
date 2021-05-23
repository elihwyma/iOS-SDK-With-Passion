/*
 Image: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ACCMediaLibraryUpdatePlaylistContentItem : NSObject

{
    NSString *_mediaLibraryUID;
    unsigned long long _playlistPersistentID;
    unsigned long long _validMask;
    unsigned long long _persistentID;
    NSString *_title;
    NSString *_albumTitle;
    NSString *_artist;
    NSString *_albumArtist;
    NSString *_genre;
    NSString *_composer;
}

@property (retain, nonatomic) NSString *mediaLibraryUID;
@property (nonatomic) unsigned long long playlistPersistentID;
@property (nonatomic, readonly) unsigned long long validMask;
@property (nonatomic) unsigned long long persistentID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *albumTitle;
@property (retain, nonatomic) NSString *artist;
@property (retain, nonatomic) NSString *albumArtist;
@property (retain, nonatomic) NSString *genre;
@property (retain, nonatomic) NSString *composer;

- (id)description;
- (id)debugDescription;
- (void)fillStruct:(CDStruct_f51598dc *)arg1;
- (id)copyNSRepresentation:(int)arg1;
- (id)initWithMediaLibrary:(id)arg1 persistentID:(unsigned long long)arg2 playlistPersistentID:(unsigned long long)arg3;
- (id)initWithMediaLibrary:(id)arg1 playlistPersistentID:(unsigned long long)arg2 dict:(id)arg3;

@end
