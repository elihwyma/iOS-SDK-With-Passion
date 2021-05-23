/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface EKUICellColorBarView : UIView

{
    _Bool _dashedLines;
    UIColor *_color;
}

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) _Bool dashedLines;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
