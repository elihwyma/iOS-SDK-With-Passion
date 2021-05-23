/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryRequest, NSOperationQueue;

@interface MPModelLibraryRequestOperation : MPAsyncOperation

{
    MPModelLibraryRequest *_request;
    CDUnknownBlockType _responseHandler;
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_serialAccessQueue;
}

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSOperationQueue *serialAccessQueue;
@property (copy, nonatomic) MPModelLibraryRequest *request;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)execute;
- (id)_itemProperties;
- (id)_libraryView;
- (void)_executeLegacyRequest;
- (void)_executeRequest;
- (void)_sanityCheckRequest;
- (id)_sectionProperties;

@end
