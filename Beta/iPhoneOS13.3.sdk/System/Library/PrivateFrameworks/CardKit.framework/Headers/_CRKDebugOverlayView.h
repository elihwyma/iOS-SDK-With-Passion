/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <CardKit/_CRKHitTestPassThroughView.h>

@class NSString, UIColor, UILabel;

@interface _CRKDebugOverlayView : _CRKHitTestPassThroughView

{
    UILabel *_label;
    UIColor *_color;
    NSString *_debugText;
}

@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) NSString *debugText;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
