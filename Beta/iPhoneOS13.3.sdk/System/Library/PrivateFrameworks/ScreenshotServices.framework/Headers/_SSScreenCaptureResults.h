/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface _SSScreenCaptureResults : NSObject

{
    UIImage *_image;
    NSString *_failureReasonIfImageIsNil;
}

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *failureReasonIfImageIsNil;

@end
