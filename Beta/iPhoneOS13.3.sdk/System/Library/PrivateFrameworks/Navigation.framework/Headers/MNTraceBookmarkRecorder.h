/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNTrace;

@interface MNTraceBookmarkRecorder : NSObject

{
    MNTrace *_trace;
}

- (id)initWithTrace:(id)arg1;
- (void)recordBookmarkAtTime:(double)arg1 withScreenshotData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
