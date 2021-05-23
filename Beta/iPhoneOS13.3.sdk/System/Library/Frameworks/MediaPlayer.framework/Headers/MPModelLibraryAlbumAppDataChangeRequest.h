/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPMediaLibraryAlbumAppData, MPModelObject;

@interface MPModelLibraryAlbumAppDataChangeRequest : NSObject <Swift>

{
    MPModelObject *_modelObject;
    MPMediaLibraryAlbumAppData *_albumAppData;
}

@property (retain, nonatomic) MPModelObject *modelObject;
@property (retain, nonatomic) MPMediaLibraryAlbumAppData *albumAppData;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end
