/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCPlaybackHistoryRecordChangeRequest, NSOperationQueue;

@interface MPCPlaybackHistoryRecordChangeRequestOperation : MPAsyncOperation

{
    NSOperationQueue *_operationQueue;
    MPCPlaybackHistoryRecordChangeRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) MPCPlaybackHistoryRecordChangeRequest *request;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)execute;
- (void)_finishChangeRequestOperationWithError:(id)arg1;

@end
