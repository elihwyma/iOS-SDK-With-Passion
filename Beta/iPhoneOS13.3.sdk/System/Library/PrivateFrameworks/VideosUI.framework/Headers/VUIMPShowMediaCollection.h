/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIMPMediaCollection.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VUIMPShowMediaCollection : VUIMPMediaCollection

{
    NSNumber *_seasonCount;
}

- (id)initWithMediaLibrary:(id)arg1 mediaItemCollection:(id)arg2 identifier:(id)arg3 requestedProperties:(id)arg4 kind:(id)arg5;
- (id)initWithMediaLibrary:(id)arg1 mediaItemCollection:(id)arg2 requestedProperties:(id)arg3;
- (id)seasonCount;

@end
