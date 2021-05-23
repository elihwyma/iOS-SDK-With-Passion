/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIMediaLibraryFetchController.h>

@class VUIMediaItemEntityTypesFetchResponse;

@protocol VUIMediaItemEntityTypesFetchControllerDelegate;

@interface VUIMediaItemEntityTypesFetchController : VUIMediaLibraryFetchController

{
    id <VUIMediaItemEntityTypesFetchControllerDelegate> _delegate;
    VUIMediaItemEntityTypesFetchResponse *_response;
}

@property (retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *response;
@property (weak, nonatomic) id <VUIMediaItemEntityTypesFetchControllerDelegate> delegate;

- (void)cancelFetch;
- (void)_notifyDelegateWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithMediaLibrary:(id)arg1;
- (_Bool)_updateResponseWithResult:(id)arg1 replaceContentsOnNilChanges:(_Bool)arg2;
- (id)_fetchOperationForFetchReason:(long long)arg1;
- (void)_didCompleteFetchOperation:(id)arg1;
- (void)_handleInitialFetchControllerOperationDidCompleteWithResult:(id)arg1 error:(id)arg2;
- (void)_handleContentsChangeFetchControllerOperationDidCompleteWithResult:(id)arg1 error:(id)arg2;
- (void)_notifyFetchDidCompleteWithResult:(id)arg1;
- (void)_notifyFetchDidFailWithError:(id)arg1;

@end
