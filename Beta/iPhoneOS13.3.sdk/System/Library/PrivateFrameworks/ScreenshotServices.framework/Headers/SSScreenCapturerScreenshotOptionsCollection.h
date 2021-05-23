/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface SSScreenCapturerScreenshotOptionsCollection : NSObject

{
    NSMapTable *_screenToScreenshotOptions;
}

- (void)setScreenshotOptions:(id)arg1 forScreen:(id)arg2;
- (id)screenshotOptionsForScreen:(id)arg1;

@end
