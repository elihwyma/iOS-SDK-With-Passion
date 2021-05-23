/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UIDelayedAction, UIKBUndoControl, UIKBUndoStyling, UIStackView, UIVisualEffectView;

@protocol UIInteractiveUndoHUDActionDelegate;

__attribute__((visibility("hidden")))
@interface UIKBUndoInteractionHUD : UIView

{
    UIKBUndoControl *_leftButtonView;
    UIKBUndoControl *_rightButtonView;
    UIKBUndoControl *_aCutButtonView;
    UIKBUndoControl *_aCopyButtonView;
    UIKBUndoControl *_aPasteButtonView;
    double _optimizedHUDWidth;
    id <UIInteractiveUndoHUDActionDelegate> _actionDelegate;
    long long _mode;
    UIVisualEffectView *_backgroundEffectView;
    UIStackView *_undoItems;
    UIVisualEffectView *_shadowView;
    UIView *_containerView;
    UIView *_centerView;
    UIView *_grabber;
    NSLayoutConstraint *_grabberPositionConstraint;
    UIDelayedAction *_dismissGrabberTimer;
    long long _currentUndoElementIndex;
    UIKBUndoStyling *_style;
    double _grabberStartXLocation;
    long long _currentCheckpointCovered;
}

@property (retain, nonatomic) UIVisualEffectView *backgroundEffectView;
@property (retain, nonatomic) UIStackView *undoItems;
@property (retain, nonatomic) UIVisualEffectView *shadowView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *centerView;
@property (retain, nonatomic) UIView *grabber;
@property (retain, nonatomic) NSLayoutConstraint *grabberPositionConstraint;
@property (retain, nonatomic) UIDelayedAction *dismissGrabberTimer;
@property (nonatomic) long long currentUndoElementIndex;
@property (retain, nonatomic) UIKBUndoStyling *style;
@property (nonatomic) double grabberStartXLocation;
@property (nonatomic) long long currentCheckpointCovered;
@property (retain, nonatomic) UIKBUndoControl *leftButtonView;
@property (retain, nonatomic) UIKBUndoControl *rightButtonView;
@property (retain, nonatomic) UIKBUndoControl *aCutButtonView;
@property (retain, nonatomic) UIKBUndoControl *aCopyButtonView;
@property (retain, nonatomic) UIKBUndoControl *aPasteButtonView;
@property (nonatomic) double optimizedHUDWidth;
@property (weak, nonatomic) id <UIInteractiveUndoHUDActionDelegate> actionDelegate;
@property (nonatomic) long long mode;

- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)controlActionDown:(id)arg1;
- (void)controlActionUpInside:(id)arg1;
- (void)controlActionUpOutside:(id)arg1;
- (id)createSeparatorView;
- (_Bool)availableOfControl:(id)arg1;
- (void)performDelegateUndoAndUpdateHUDIfNeeded;
- (void)performDelegateRedoAndUpdateHUDIfNeeded;
- (id)initWithKeyboardAppearance:(long long)arg1 isRTL:(_Bool)arg2 mode:(long long)arg3 sceneBounds:(struct CGRect)arg4;
- (void)updateHUDControlState;
- (void)updateControlWithDirection:(long long)arg1 travelProgress:(double)arg2 isRTL:(_Bool)arg3;

@end
