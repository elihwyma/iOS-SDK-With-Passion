/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class NSString, UIColor;

@interface GKDebugHighlightView : UIView

{
    _Bool _isOval;
    UIColor *_color;
    NSString *_caption;
}

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) NSString *caption;
@property (nonatomic) _Bool isOval;

- (id)init;
- (void)drawRect:(struct CGRect)arg1;

@end
