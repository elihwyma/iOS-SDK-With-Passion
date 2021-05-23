/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, UIColor, UIContextualAction, UISwipeActionButton;

@protocol UISwipeActionPullViewDelegate;

@interface UISwipeActionPullView : UIView

{
    NSMutableArray *_buttons;
    NSArray *_actions;
    UISwipeActionButton *_pressedButton;
    _Bool _swipeActionsDidChange;
    _Bool _isCollapsed;
    double _openThreshold;
    double _confirmationThreshold;
    double _minimumOffset;
    double _currentExtraOffset;
    unsigned long long _style;
    _Bool _buttonsUnderlapSwipedView;
    _Bool _autosizesButtons;
    unsigned long long _cellEdge;
    double _currentOffset;
    id <UISwipeActionPullViewDelegate> _delegate;
    UIColor *_backgroundPullColor;
    unsigned long long _state;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic) id <UISwipeActionPullViewDelegate> delegate;
@property (nonatomic, readonly) unsigned long long cellEdge;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (copy, nonatomic) UIColor *backgroundPullColor;
@property (nonatomic, readonly) UIContextualAction *primarySwipeAction;
@property (nonatomic, readonly) double currentOffset;
@property (nonatomic, readonly) double openThreshold;
@property (nonatomic, readonly) double confirmationThreshold;
@property (nonatomic, readonly) UIColor *primaryActionColor;
@property (nonatomic, readonly) _Bool primaryActionIsDestructive;
@property (nonatomic, readonly) _Bool hasActions;
@property (nonatomic) _Bool buttonsUnderlapSwipedView;
@property (nonatomic) _Bool autosizesButtons;
@property (nonatomic) unsigned long long state;

- (id)description;
- (void)freeze;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)configureWithSwipeActions:(id)arg1;
- (void)moveToOffset:(double)arg1 extraOffset:(double)arg2 animator:(id)arg3 usingSpringWithStiffness:(double)arg4 initialVelocity:(double)arg5;
- (void)_performAction:(id)arg1 offset:(double)arg2 extraOffset:(double)arg3;
- (id)sourceViewForAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 cellEdge:(unsigned long long)arg2 style:(unsigned long long)arg3;
- (void)resetView;
- (unsigned long long)_swipeActionCount;
- (Class)_buttonClass;
- (double)_directionalMultiplier;
- (void)_tappedButton:(id)arg1;
- (void)_pressedButton:(id)arg1;
- (void)_unpressedButton:(id)arg1;
- (void)_rebuildButtons;
- (id)_inferredAccessibilityIdentifierTemplate;

@end
