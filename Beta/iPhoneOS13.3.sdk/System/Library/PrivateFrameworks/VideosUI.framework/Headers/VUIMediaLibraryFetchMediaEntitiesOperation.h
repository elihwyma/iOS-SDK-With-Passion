/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIMediaLibraryOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUIMediaLibraryFetchMediaEntitiesOperation : VUIMediaLibraryOperation

{
    NSArray *_responses;
    NSArray *_requests;
}

@property (copy, nonatomic) NSArray *responses;
@property (copy, nonatomic) NSArray *requests;

- (void)executionDidBegin;
- (id)initWithMediaLibrary:(id)arg1 requests:(id)arg2;
- (id)initWithMediaLibrary:(id)arg1;

@end
