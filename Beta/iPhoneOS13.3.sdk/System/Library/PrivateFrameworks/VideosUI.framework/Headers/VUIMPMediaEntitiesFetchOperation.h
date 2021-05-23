/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray, NSError, NSOperationQueue, VUIMPMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIMPMediaEntitiesFetchOperation : VUIAsynchronousOperation

{
    NSArray *_requests;
    NSArray *_responses;
    NSError *_error;
    NSOperationQueue *_privateQueue;
    VUIMPMediaLibrary *_mediaLibrary;
}

@property (copy, nonatomic) NSArray *requests;
@property (copy, nonatomic) NSArray *responses;
@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VUIMPMediaLibrary *mediaLibrary;

- (id)init;
- (void)executionDidBegin;
- (id)initWithMediaLibrary:(id)arg1 requests:(id)arg2;

@end
