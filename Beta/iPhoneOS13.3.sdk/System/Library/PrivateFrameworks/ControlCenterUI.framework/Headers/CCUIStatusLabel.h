/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <UIKit/UILabel.h>

@class MTVisualStylingProvider;

@interface CCUIStatusLabel : UILabel

{
    MTVisualStylingProvider *_visualStylingProvider;
    unsigned long long _verticalAlignment;
    struct UIEdgeInsets _edgeInsets;
}

@property (nonatomic) struct UIEdgeInsets edgeInsets;
@property (nonatomic) unsigned long long verticalAlignment;

- (id)init;
- (void)didMoveToWindow;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)_contentSizeCategoryDidChange;
- (void)_updateVisualStyling;

@end
