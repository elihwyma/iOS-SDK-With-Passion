/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibrarySearchRequest, NSObject;

@protocol OS_dispatch_queue;

@interface MPModelLibrarySearchRequestOperation : MPAsyncOperation

{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    shared_ptr_299ddd6f _runningQuery;
    MPModelLibrarySearchRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) MPModelLibrarySearchRequest *request;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (id)init;
- (void)cancel;
- (id).cxx_construct;
- (void)execute;

@end
