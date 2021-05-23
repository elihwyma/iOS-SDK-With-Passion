/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryImportChangeRequest, NSOperationQueue;

@interface MPModelLibraryImportChangeRequestOperation : MPAsyncOperation

{
    NSOperationQueue *_operationQueue;
    MPModelLibraryImportChangeRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) MPModelLibraryImportChangeRequest *request;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)execute;

@end
