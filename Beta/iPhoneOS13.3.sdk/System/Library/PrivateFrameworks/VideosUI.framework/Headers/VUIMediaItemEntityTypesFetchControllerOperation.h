/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIMediaLibraryOperation.h>

@class VUIMediaItemEntityTypesFetchControllerResult, VUIMediaItemEntityTypesFetchResponse;

__attribute__((visibility("hidden")))
@interface VUIMediaItemEntityTypesFetchControllerOperation : VUIMediaLibraryOperation

{
    long long _fetchReason;
    VUIMediaItemEntityTypesFetchResponse *_currentFetchResponse;
    VUIMediaItemEntityTypesFetchControllerResult *_result;
}

@property (nonatomic) long long fetchReason;
@property (retain, nonatomic) VUIMediaItemEntityTypesFetchControllerResult *result;
@property (retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *currentFetchResponse;

+ (id)_changeSetFromMediaItemEntityTypes:(id)arg1 toMediaItemEntityTypes:(id)arg2;

- (void)executionDidBegin;
- (id)initWithMediaLibrary:(id)arg1;
- (id)initWithMediaLibrary:(id)arg1 fetchReason:(long long)arg2;

@end
