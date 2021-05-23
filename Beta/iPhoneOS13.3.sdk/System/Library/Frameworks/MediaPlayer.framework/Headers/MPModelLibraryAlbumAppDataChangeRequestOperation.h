/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryAlbumAppDataChangeRequest;

@interface MPModelLibraryAlbumAppDataChangeRequestOperation : MPAsyncOperation

{
    CDUnknownBlockType _responseHandler;
    MPModelLibraryAlbumAppDataChangeRequest *_request;
}

@property (copy, nonatomic) CDUnknownBlockType responseHandler;
@property (copy, nonatomic) MPModelLibraryAlbumAppDataChangeRequest *request;

- (void)execute;

@end
