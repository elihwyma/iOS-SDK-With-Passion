/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSArray, UIToolbar;

@protocol WFComposeSegmentedControlDelegate;

@interface WFComposeSegmentedControl : UIView

{
    unsigned long long _selectedSegment;
    id <WFComposeSegmentedControlDelegate> _delegate;
    UIToolbar *_toolbar;
    NSArray *_buttons;
}

@property (nonatomic, readonly) UIToolbar *toolbar;
@property (nonatomic, readonly) NSArray *buttons;
@property (nonatomic) unsigned long long selectedSegment;
@property (weak, nonatomic) id <WFComposeSegmentedControlDelegate> delegate;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)segmentPressed:(id)arg1;

@end
