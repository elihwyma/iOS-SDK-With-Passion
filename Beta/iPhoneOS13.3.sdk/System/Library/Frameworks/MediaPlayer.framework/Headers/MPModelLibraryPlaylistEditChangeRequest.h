/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPMediaLibrary, MPModelPlaylist, MPSectionedCollection, NSNumber, NSString, UIImage;

@interface MPModelLibraryPlaylistEditChangeRequest : NSObject <Swift>

{
    _Bool _shouldCreatePlaylist;
    _Bool _didSetPlaylistUserImage;
    MPMediaLibrary *_mediaLibrary;
    MPSectionedCollection *_playlistEntries;
    NSString *_playlistDescription;
    NSString *_playlistName;
    UIImage *_playlistUserImage;
    NSNumber *_publicPlaylist;
    NSNumber *_visiblePlaylist;
    NSNumber *_curatorPlaylist;
    NSNumber *_isOwner;
    NSString *_authorStoreIdentifier;
    MPModelPlaylist *_parentPlaylist;
    MPModelPlaylist *_playlist;
}

@property (nonatomic, readonly) _Bool didSetPlaylistUserImage;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (copy, nonatomic) MPSectionedCollection *playlistEntries;
@property (copy, nonatomic) NSString *playlistDescription;
@property (copy, nonatomic) NSString *playlistName;
@property (retain, nonatomic) UIImage *playlistUserImage;
@property (copy, nonatomic, getter=isPublicPlaylist) NSNumber *publicPlaylist;
@property (copy, nonatomic, getter=isVisiblePlaylist) NSNumber *visiblePlaylist;
@property (copy, nonatomic, getter=isCuratorPlaylist) NSNumber *curatorPlaylist;
@property (copy, nonatomic) NSNumber *isOwner;
@property (copy, nonatomic) NSString *authorStoreIdentifier;
@property (retain, nonatomic) MPModelPlaylist *parentPlaylist;
@property (nonatomic) _Bool shouldCreatePlaylist;
@property (retain, nonatomic) MPModelPlaylist *playlist;

+ (id)requiredPlaylistEntryProperties;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newOperationWithLocalPersistenceResponseHandler:(CDUnknownBlockType)arg1 completeResponseHandler:(CDUnknownBlockType)arg2;

@end
