/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@class UIImage, UIScreen;

@interface SSScreenSnapshot : NSObject

{
    UIImage *_image;
    UIScreen *_screen;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) UIScreen *screen;

+ (id)snapshotWithImage:(id)arg1 fromScreen:(id)arg2;

@end
