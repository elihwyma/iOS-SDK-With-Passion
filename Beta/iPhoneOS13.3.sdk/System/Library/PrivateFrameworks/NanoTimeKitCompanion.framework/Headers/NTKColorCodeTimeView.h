/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class NSArray, NSCalendar, NSDate;

@interface NTKColorCodeTimeView : UIView

{
    NSArray *_colorViews;
    NSArray *_digitToColor;
    NSCalendar *_cal;
    NSDate *_date;
}

@property (retain, nonatomic) NSDate *date;

- (id)init;
- (void)layoutSubviews;

@end
