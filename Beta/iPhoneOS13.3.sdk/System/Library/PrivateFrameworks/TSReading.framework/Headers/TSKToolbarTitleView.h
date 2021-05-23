/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIView.h>

@class NSString, UIColor;

@interface TSKToolbarTitleView : UIView

{
    NSString *_title;
    UIColor *_titleColor;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;

- (void)dealloc;

@end
