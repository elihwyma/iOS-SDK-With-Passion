/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIRemoteKeyboardPlaceholderView : UIView

{
    UIView *_mirroredView;
    struct CGSize _fixedSize;
    CDUnknownBlockType _sizeBlock;
    UIView *_fallbackView;
    UIView *_associatedView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct CGSize fixedSize;
@property (retain, readonly) UIView *placeheldView;
@property (retain, nonatomic) UIView *fallbackView;
@property (retain, nonatomic) UIView *associatedView;

+ (id)placeholderWithWidth:(double)arg1 height:(double)arg2;
+ (id)placeholderWithSizer:(CDUnknownBlockType)arg1;
+ (id)placeholderForView:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutMergedSubviews;
- (void)updateMergedSubviewConstraints;
- (void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize)arg1 rightContentSize:(struct CGSize)arg2;
- (void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize)arg1 rightContentSize:(struct CGSize)arg2;
- (void)willBeginSplitTransition;
- (void)didEndSplitTransition;
- (void)_isPlaceholderViewSelector;
- (struct CGRect)_compatibleBounds;
- (struct CGSize)leftContentViewSize;
- (struct CGSize)rightContentViewSize;
- (void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2;
- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;
- (void)_endSplitTransitionIfNeeded:(_Bool)arg1;
- (void)_setProgress:(double)arg1 boundedBy:(double)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)refreshPlaceholder;

@end
