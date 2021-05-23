/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryAddToPlaylistChangeRequest, NSOperationQueue;

@interface MPModelLibraryAddToPlaylistChangeRequestOperation : MPAsyncOperation

{
    NSOperationQueue *_operationQueue;
    MPModelLibraryAddToPlaylistChangeRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) MPModelLibraryAddToPlaylistChangeRequest *request;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)execute;
- (_Bool)_isCloudLibraryEnabled;
- (void)_updateCloudLibraryForPlaylist:(id)arg1;

@end
