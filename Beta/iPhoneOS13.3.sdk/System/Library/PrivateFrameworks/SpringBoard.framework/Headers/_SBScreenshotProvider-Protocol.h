/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class SBScreenFlash, UIScreen;

@protocol _SBScreenshotProvider <Swift>

@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) SBScreenFlash *flasher;

- (unsigned short)captureScreenshot;

@end
