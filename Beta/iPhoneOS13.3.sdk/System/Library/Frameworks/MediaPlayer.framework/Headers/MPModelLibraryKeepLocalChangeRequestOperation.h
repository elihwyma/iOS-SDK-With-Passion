/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryKeepLocalChangeRequest, NSOperationQueue;

@interface MPModelLibraryKeepLocalChangeRequestOperation : MPAsyncOperation

{
    NSOperationQueue *_operationQueue;
    CDUnknownBlockType _responseHandler;
    MPModelLibraryKeepLocalChangeRequest *_request;
}

@property (copy, nonatomic) CDUnknownBlockType responseHandler;
@property (copy, nonatomic) MPModelLibraryKeepLocalChangeRequest *request;

- (void)execute;
- (void)_handlePersistentID:(long long)arg1 modelClass:(Class)arg2 keepLocal:(long long)arg3 mediaLibrary:(id)arg4;
- (void)_handleKeepLocalUpdateStatus:(long long)arg1 forLibraryIdentifier:(long long)arg2 mediaType:(long long)arg3 completedWithError:(id)arg4;

@end
