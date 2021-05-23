/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryPlaylistEditChangeRequest;

@interface MPModelLibraryPlaylistEditChangeRequestOperation : MPAsyncOperation

{
    MPModelLibraryPlaylistEditChangeRequest *_request;
    CDUnknownBlockType _localPersistenceResponseHandler;
    CDUnknownBlockType _completeResponseHandler;
}

@property (copy, nonatomic) MPModelLibraryPlaylistEditChangeRequest *request;
@property (copy, nonatomic) CDUnknownBlockType localPersistenceResponseHandler;
@property (copy, nonatomic) CDUnknownBlockType completeResponseHandler;

+ (id)requiredPlaylistEntryProperties;

- (void)execute;
- (_Bool)_isCloudLibraryEnabled;

@end
