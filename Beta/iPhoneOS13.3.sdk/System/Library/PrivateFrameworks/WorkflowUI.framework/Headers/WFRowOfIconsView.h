/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, UIStackView;

@interface WFRowOfIconsView : UIView

{
    unsigned long long _maxNumberOfIcons;
    UIStackView *_stackView;
    NSMutableArray *_iconViews;
    double _height;
}

@property (nonatomic, readonly) unsigned long long maxNumberOfIcons;
@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, readonly) NSMutableArray *iconViews;
@property (nonatomic, readonly) double height;

- (struct CGSize)intrinsicContentSize;
- (void)setIcons:(id)arg1;
- (id)initWithMaxNumberOfIcons:(unsigned long long)arg1 height:(double)arg2;
- (void)setHomeIcons:(id)arg1;
- (void)rebuildSubviewsForItems:(id)arg1;

@end
