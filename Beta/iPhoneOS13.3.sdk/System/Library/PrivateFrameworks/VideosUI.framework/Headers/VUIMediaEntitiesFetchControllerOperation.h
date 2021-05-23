/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray, NSError, NSOperation, VUIMediaEntitiesFetchControllerResult, VUIMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIMediaEntitiesFetchControllerOperation : VUIAsynchronousOperation

{
    long long _fetchReason;
    NSArray *_requests;
    NSArray *_currentFetchResponses;
    VUIMediaEntitiesFetchControllerResult *_result;
    NSError *_error;
    VUIMediaLibrary *_mediaLibrary;
    NSOperation *_currentSubOperation;
}

@property (retain, nonatomic) VUIMediaEntitiesFetchControllerResult *result;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) long long fetchReason;
@property (copy, nonatomic) NSArray *requests;
@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (retain, nonatomic) NSOperation *currentSubOperation;
@property (copy, nonatomic) NSArray *currentFetchResponses;

- (void)cancel;
- (void)executionDidBegin;
- (id)initWithMediaLibrary:(id)arg1 fetchReason:(long long)arg2 requests:(id)arg3;
- (void)_startMediaLibraryFetchOperation;
- (void)_handleCompletdFetchWithResponses:(id)arg1 error:(id)arg2;
- (void)_startChangesOperationWithMediaEntityFetchResponses:(id)arg1 currentFetchResponses:(id)arg2;
- (id)_resultWithResponses:(id)arg1;

@end
