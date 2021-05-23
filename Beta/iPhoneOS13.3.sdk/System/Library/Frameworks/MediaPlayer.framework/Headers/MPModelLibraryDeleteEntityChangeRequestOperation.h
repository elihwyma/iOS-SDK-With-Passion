/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryDeleteEntityChangeRequest, NSOperationQueue;

@interface MPModelLibraryDeleteEntityChangeRequestOperation : MPAsyncOperation

{
    NSOperationQueue *_operationQueue;
    MPModelLibraryDeleteEntityChangeRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) MPModelLibraryDeleteEntityChangeRequest *request;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)execute;
- (void)_handlePersistentID:(long long)arg1 modelClass:(Class)arg2 mediaLibrary:(id)arg3;
- (void)_deleteItems:(id)arg1 withLibrary:(id)arg2;
- (_Bool)_isCloudLibraryEnabled;

@end
