/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference, NSArray;

__attribute__((visibility("hidden")))
@interface AVCaptureVideoThumbnailOutputInternal : NSObject

{
    AVWeakReference *weakReference;
    AVWeakReference *delegateWeakReference;
    _Bool didPropagateContents;
    NSArray *filters;
    struct CGSize thumbnailSize;
}

- (id)init;
- (void)dealloc;

@end
