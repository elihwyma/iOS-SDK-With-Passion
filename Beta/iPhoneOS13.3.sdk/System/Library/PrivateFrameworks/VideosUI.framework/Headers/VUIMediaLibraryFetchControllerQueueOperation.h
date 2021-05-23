/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUIMediaLibraryFetchControllerQueueOperation : VUIAsynchronousOperation

{
    NSArray *_fetchControllers;
    unsigned long long _mediaLibraryRevision;
}

@property (copy, nonatomic) NSArray *fetchControllers;
@property (nonatomic) unsigned long long mediaLibraryRevision;

- (id)init;
- (void)executionDidBegin;
- (id)initWithFetchControllers:(id)arg1 mediaLibraryRevision:(unsigned long long)arg2;

@end
