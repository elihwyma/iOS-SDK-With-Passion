/*
 Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

#import <Foundation/NSThread.h>

__attribute__((visibility("hidden")))
@interface ICDeviceManagerThread : NSThread

+ (void)runBlock:(CDUnknownBlockType)arg1;

- (void)main;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;

@end
