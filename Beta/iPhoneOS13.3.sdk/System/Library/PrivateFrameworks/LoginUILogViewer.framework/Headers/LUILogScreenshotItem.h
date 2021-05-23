/*
 Image: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
 */

#import <Foundation/NSObject.h>

@class NSDate, UIImage;

@interface LUILogScreenshotItem : NSObject

{
    UIImage *_screenshotImage;
    NSDate *_screenshotDate;
    struct _NSRange _visibleRange;
}

@property (retain, nonatomic) UIImage *screenshotImage;
@property (nonatomic) struct _NSRange visibleRange;
@property (retain, nonatomic) NSDate *screenshotDate;

@end
