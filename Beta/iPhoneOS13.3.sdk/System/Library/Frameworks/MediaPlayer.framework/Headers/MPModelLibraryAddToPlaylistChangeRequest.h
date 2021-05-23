/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPModelObject, MPModelPlaylist, MPSectionedCollection;

@interface MPModelLibraryAddToPlaylistChangeRequest : NSObject <Swift>

{
    MPModelPlaylist *_playlist;
    MPModelObject *_representativeModelObject;
    MPModelObject *_referralObject;
    MPSectionedCollection *_songResults;
    CDUnknownBlockType _storeImportAllowedHandler;
}

@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (retain, nonatomic) MPModelObject *representativeModelObject;
@property (retain, nonatomic) MPModelObject *referralObject;
@property (retain, nonatomic) MPSectionedCollection *songResults;
@property (copy, nonatomic) CDUnknownBlockType storeImportAllowedHandler;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end
