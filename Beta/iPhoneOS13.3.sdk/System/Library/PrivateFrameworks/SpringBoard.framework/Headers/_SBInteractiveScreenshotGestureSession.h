/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSUUID, SBInteractiveScreenshotGestureHostRootViewController, SBInteractiveScreenshotGestureHostWindow, SBInteractiveScreenshotGestureRootViewController, SBInteractiveScreenshotGestureRootWindow;

@interface _SBInteractiveScreenshotGestureSession : NSObject

{
    NSUUID *_sessionID;
    SBInteractiveScreenshotGestureRootWindow *_rootWindow;
    SBInteractiveScreenshotGestureHostWindow *_hostWindow;
}

@property (copy, nonatomic, readonly) NSUUID *sessionID;
@property (nonatomic, readonly) SBInteractiveScreenshotGestureHostRootViewController *hostRootViewController;
@property (nonatomic, readonly) SBInteractiveScreenshotGestureRootViewController *rootViewController;
@property (retain, nonatomic) SBInteractiveScreenshotGestureRootWindow *rootWindow;
@property (retain, nonatomic) SBInteractiveScreenshotGestureHostWindow *hostWindow;

- (id)initWithSessionID:(id)arg1;

@end
