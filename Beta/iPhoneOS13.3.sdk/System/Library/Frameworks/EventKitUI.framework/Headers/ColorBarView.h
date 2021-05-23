/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface ColorBarView : UIView

{
    _Bool _hasRoundedCorners;
    _Bool _dashedLines;
    UIColor *_color;
}

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) _Bool hasRoundedCorners;
@property (nonatomic) _Bool dashedLines;

@end
