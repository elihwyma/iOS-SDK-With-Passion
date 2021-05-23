/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPStoreLibraryPersonalizationRequest, NSOperationQueue;

@interface MPStoreLibraryPersonalizationRequestOperation : MPAsyncOperation

{
    NSOperationQueue *_operationQueue;
    MPStoreLibraryPersonalizationRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) MPStoreLibraryPersonalizationRequest *request;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

+ (id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2;

- (void)cancel;
- (void)execute;

@end
