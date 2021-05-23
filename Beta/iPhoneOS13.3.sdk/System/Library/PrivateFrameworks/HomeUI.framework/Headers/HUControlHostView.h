/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class NSArray;

@interface HUControlHostView : UIView

{
    _Bool _requiresWellDefinedSize;
    UIView *_controlView;
    NSArray *_controlConstraints;
}

@property (retain, nonatomic) NSArray *controlConstraints;
@property (nonatomic) _Bool requiresWellDefinedSize;
@property (retain, nonatomic) UIView *controlView;

+ (_Bool)requiresConstraintBasedLayout;

- (void)updateConstraints;
- (id)initWithControlView:(id)arg1;

@end
