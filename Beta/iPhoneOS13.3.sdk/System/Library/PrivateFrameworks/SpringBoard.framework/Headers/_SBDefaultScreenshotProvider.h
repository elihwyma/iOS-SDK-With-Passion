/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBScreenFlash, UIScreen;

@interface _SBDefaultScreenshotProvider : NSObject

{
    UIScreen *_screen;
    SBScreenFlash *_flasher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) SBScreenFlash *flasher;

- (id)initWithScreen:(id)arg1;
- (id)captureScreenshot;

@end
