/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@class UIScreen;

@interface SSScreenSnapshotter : NSObject

{
    UIScreen *_screen;
}

@property (nonatomic, readonly) UIScreen *screen;

+ (id)snapshotterForScreen:(id)arg1;

- (id)initWithScreen:(id)arg1;
- (id)takeScreenshot;

@end
