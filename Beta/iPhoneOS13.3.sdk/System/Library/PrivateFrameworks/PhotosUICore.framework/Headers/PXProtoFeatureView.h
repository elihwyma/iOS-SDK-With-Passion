/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImageView;

@protocol PXProtoFeature;

@interface PXProtoFeatureView : UIView

{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    struct {
        _Bool content;
    } _needsUpdateFlags;
    _Bool _selected;
    _Bool _disabled;
    _Bool _shouldUpdateContentOnResize;
    id <PXProtoFeature> _feature;
    UIImageView *__removeIconView;
    UIView *_contentView;
    struct UIEdgeInsets _minimumMargins;
}

@property (nonatomic, readonly) UIImageView *_removeIconView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) double recommendedCompactContentHeight;
@property (nonatomic, readonly) _Bool wantsContentView;
@property (nonatomic, readonly) _Bool shouldUpdateContentOnResize;
@property (nonatomic, readonly) struct UIEdgeInsets minimumMargins;
@property (nonatomic, readonly) struct CGSize regularContentSize;
@property (nonatomic, readonly) struct CGSize compactContentSize;
@property (nonatomic, readonly) id <PXProtoFeature> feature;
@property (nonatomic, readonly, getter=isSelected) _Bool selected;
@property (nonatomic, readonly, getter=isDisabled) _Bool disabled;
@property (nonatomic, readonly) UIColor *preferredBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (void)setFeature:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (void)setDisabled:(_Bool)arg1;
- (struct UIEdgeInsets)_contentInsets;
- (void)setSelected:(_Bool)arg1;
- (void)updateContent;
- (_Bool)_needsUpdate;
- (struct CGRect)_contentViewFrame;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_invalidateContent;
- (void)_updateContentIfNeeded;

@end
