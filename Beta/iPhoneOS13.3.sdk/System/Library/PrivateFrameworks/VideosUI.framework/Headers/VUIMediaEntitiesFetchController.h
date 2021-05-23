/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIMediaLibraryFetchController.h>

@class NSArray, VUIMediaEntityFetchResponse;

@protocol VUIMediaEntitiesFetchControllerDelegate;

@interface VUIMediaEntitiesFetchController : VUIMediaLibraryFetchController

{
    id <VUIMediaEntitiesFetchControllerDelegate> _delegate;
    NSArray *_requests;
    VUIMediaEntityFetchResponse *_response;
    NSArray *_responses;
}

@property (copy, nonatomic) NSArray *requests;
@property (copy, nonatomic) NSArray *responses;
@property (weak, nonatomic) id <VUIMediaEntitiesFetchControllerDelegate> delegate;
@property (nonatomic, readonly) VUIMediaEntityFetchResponse *response;

- (void)cancelFetch;
- (void)_notifyDelegateWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithMediaLibrary:(id)arg1;
- (void)_handleManualFetchControllerOperationDidComplete:(id)arg1;
- (void)_handleContentsChangeFetchControllerOperationDidComplete:(id)arg1;
- (_Bool)_updateResponseWithResult:(id)arg1 replaceContentsOnNilChanges:(_Bool)arg2;
- (void)_notifyFetchRequests:(id)arg1 didCompleteWithResult:(id)arg2;
- (void)_notifyFetchRequests:(id)arg1 didFailWithError:(id)arg2;
- (id)initWithMediaLibrary:(id)arg1 fetchRequests:(id)arg2;
- (id)_fetchOperationForFetchReason:(long long)arg1;
- (void)_didCompleteFetchOperation:(id)arg1;

@end
