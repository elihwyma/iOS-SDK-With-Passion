/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface SBHorizontalScrollFailureTriangleView : UIView

{
    int _style;
    _Bool _pointingRight;
    UIColor *_contentColor;
}

@property (retain, nonatomic) UIColor *contentColor;

- (void)drawRect:(struct CGRect)arg1;
- (id)initWithStyle:(int)arg1 recognizer:(id)arg2 forPoint:(struct CGPoint)arg3 withMaxVerticalOffset:(double)arg4 inView:(id)arg5 pointingRight:(_Bool)arg6;

@end
