/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryHasPurchasesRequest;

@interface MPModelLibraryHasPurchasesRequestOperation : MPAsyncOperation

{
    MPModelLibraryHasPurchasesRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) MPModelLibraryHasPurchasesRequest *request;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)execute;

@end
