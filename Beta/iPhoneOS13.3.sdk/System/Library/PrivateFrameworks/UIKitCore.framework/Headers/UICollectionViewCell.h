/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionReusableView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UILongPressGestureRecognizer, UIView, _UIFloatingContentView;

@interface UICollectionViewCell : UICollectionReusableView <Swift>

{
    UIView *_contentView;
    UIView *_backgroundView;
    UIView *_selectedBackgroundView;
    UILongPressGestureRecognizer *_menuGesture;
    id _selectionSegueTemplate;
    id _highlightingSupport;
    struct {
        unsigned int selected:1;
        unsigned int highlighted:1;
        unsigned int showingMenu:1;
        unsigned int clearSelectionWhenMenuDisappears:1;
        unsigned int waitingForSelectionAnimationHalfwayPoint:1;
        unsigned int contentViewWantsSystemLayoutSizeFittingSize:1;
    } _collectionCellFlags;
    long long _dragState;
    _Bool _selected;
    _Bool _highlighted;
    _Bool _isLayoutEngineSuspended;
    _Bool _dragging;
    _UIFloatingContentView *_focusedFloatingContentView;
    long long _focusStyle;
}

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic, readonly, getter=_focusedFloatingContentView) _UIFloatingContentView *focusedFloatingContentView;
@property (nonatomic, getter=_dragState, setter=_setDragState:) long long _dragState;
@property (nonatomic, readonly, getter=_selectionAnimationDuration) double selectionAnimationDuration;
@property (nonatomic, readonly, getter=_contentViewInset) struct UIEdgeInsets contentViewInset;
@property (nonatomic, getter=_focusStyle, setter=_setFocusStyle:) long long focusStyle;
@property (nonatomic, getter=isDragging) _Bool dragging;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *selectedBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=_isLayoutEngineSuspended, setter=_setLayoutEngineSuspended:) _Bool _layoutEngineSuspended;

+ (Class)_contentViewClass;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)canBecomeFocused;
- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (id)_encodableSubviews;
- (void)_updateBackgroundView;
- (_Bool)isEditing;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (void)setEditing:(_Bool)arg1;
- (_Bool)_canFocusProgrammatically;
- (void)_configureFocusedFloatingContentView:(id)arg1;
- (void)_setContentView:(id)arg1 addToHierarchy:(_Bool)arg2;
- (void)_setLayoutAttributes:(id)arg1;
- (_Bool)_shouldSaveOpaqueStateForView:(id)arg1;
- (_Bool)_isUsingOldStyleMultiselection;
- (void)_setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_selectionSegueTemplate;
- (void)_setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_updateHighlightColorsForView:(id)arg1 highlight:(_Bool)arg2;
- (void)_setupHighlightingSupport;
- (void)_teardownHighlightingSupportIfReady;
- (_Bool)_descendantsShouldHighlight;
- (void)_setOpaque:(_Bool)arg1 forSubview:(id)arg2;
- (void)_updateHighlightColorsForAnimationHalfwayPoint;
- (_Bool)_highlightDescendantsWhenSelected;
- (void)_updateFocusedFloatingContentControlStateAnimated:(_Bool)arg1;
- (void)dragStateDidChange:(long long)arg1;
- (void)_updateGhostedAppearance;
- (void)_performAction:(SEL)arg1 sender:(id)arg2;
- (void)_updateFocusedFloatingContentControlStateInContext:(id)arg1 withAnimationCoordinator:(id)arg2 animated:(_Bool)arg3;
- (void)_ensureFocusedFloatingContentView;
- (void)_handleMenuGesture:(id)arg1;
- (void)_setSelectionSegueTemplate:(id)arg1;
- (_Bool)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1;

@end
