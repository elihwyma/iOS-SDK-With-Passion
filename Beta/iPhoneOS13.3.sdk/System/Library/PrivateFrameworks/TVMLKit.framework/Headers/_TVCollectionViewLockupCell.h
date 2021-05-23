/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/TVContainerCollectionViewCell.h>

@class NSString, UIView;

@protocol TVAuxiliaryViewSelecting, TVCollectionViewLockupCellDelegate;

__attribute__((visibility("hidden")))
@interface _TVCollectionViewLockupCell : TVContainerCollectionViewCell

{
    _Bool _pressIsAnimating;
    UIView<TVAuxiliaryViewSelecting> *__selectingView;
    _Bool _unpressOnEndAnimating;
    struct {
        _Bool respondsToDidUnfocus;
        _Bool respondsToDidSelect;
        _Bool respondsToLayeredImageContainerLayerWithinCollectionViewCell;
    } _delegateFlags;
    id <TVCollectionViewLockupCellDelegate> _delegate;
}

@property (weak, nonatomic) id <TVCollectionViewLockupCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (_Bool)_descendantsShouldHighlight;
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;
- (void)_handleSelect;
- (id)_selectingView;
- (id)layeredImageContainerLayer;
- (id)selectingView;
- (void)_clearPressState;
- (void)_showPressState;

@end
