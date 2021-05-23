/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray, NSError, VUIPlistMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIPlistMediaEntitiesFetchOperation : VUIAsynchronousOperation

{
    NSArray *_requests;
    NSArray *_responses;
    NSError *_error;
    VUIPlistMediaLibrary *_mediaLibrary;
}

@property (retain, nonatomic) VUIPlistMediaLibrary *mediaLibrary;
@property (copy, nonatomic) NSArray *requests;
@property (retain, nonatomic) NSArray *responses;
@property (copy, nonatomic) NSError *error;

- (id)init;
- (void)executionDidBegin;
- (id)initWithMediaLibrary:(id)arg1 requests:(id)arg2;
- (id)_itemsFetchResponseWithRequest:(id)arg1 error:(id *)arg2;
- (id)_collectionsFetchResponseWithRequest:(id)arg1 error:(id *)arg2;
- (id)_fetchResponseWithMediaEntities:(id)arg1 request:(id)arg2;
- (id)_mediaEntityKindForRequest:(id)arg1;

@end
