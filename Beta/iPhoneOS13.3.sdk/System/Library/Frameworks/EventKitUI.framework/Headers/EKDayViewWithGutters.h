/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class EKDayAllDayView, EKDayView;

@interface EKDayViewWithGutters : UIView

{
    EKDayAllDayView *_leftAllDayView;
    EKDayAllDayView *_rightAllDayView;
    long long _targetSizeClass;
    UIView *_leftGutter;
    UIView *_rightGutter;
    EKDayView *_dayView;
    double _gutterWidth;
    double _allDayHeight;
}

@property (nonatomic, readonly) UIView *leftGutter;
@property (nonatomic, readonly) UIView *rightGutter;
@property (retain, nonatomic) EKDayView *dayView;
@property (nonatomic) double gutterWidth;
@property (nonatomic) double allDayHeight;

- (id)_createAllDayView;
- (id)initWithFrame:(struct CGRect)arg1 dayView:(id)arg2 sizeClass:(long long)arg3;

@end
