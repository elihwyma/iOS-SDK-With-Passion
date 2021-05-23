/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionReusableView.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXFooterAnimatedIconView, PXFooterViewModel, PXGradientView, UILabel, UIProgressView, UITextView, UIView;

@protocol PXPhotosGlobalFooterViewDelegate, PXPhotosGlobalFooterViewLayoutDelegate;

@interface PXPhotosGlobalFooterView : UICollectionReusableView <Swift>

{
    UIView *_accessoryView;
    _Bool _hasAnimatedIconView;
    PXFooterAnimatedIconView *_animatedIconView;
    PXGradientView *_backgroundView;
    UILabel *_titleLabel;
    UITextView *_subtitle1TextView;
    UILabel *_subtitle2Label;
    UIProgressView *_progressView;
    _Bool _isPresentingAlert;
    struct {
        _Bool photosGlobalFooterViewDidChangeHeight;
    } _delegateRespondsTo;
    _Bool _isPerformingChanges;
    double _currentHeight;
    PXFooterViewModel *_viewModel;
    id <PXPhotosGlobalFooterViewDelegate> _delegate;
    id <PXPhotosGlobalFooterViewLayoutDelegate> _layoutDelegate;
}

@property (retain, nonatomic) PXFooterViewModel *viewModel;
@property (weak, nonatomic) id <PXPhotosGlobalFooterViewDelegate> delegate;
@property (weak, nonatomic) id <PXPhotosGlobalFooterViewLayoutDelegate> layoutDelegate;
@property (nonatomic, readonly) double currentHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)attributedStringForInputString:(id)arg1 actionTitle:(id)arg2 textAttributes:(id)arg3 linkTextAttributes:(id)arg4;

- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateTitle;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)_updateAccessory;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (struct CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)_updateSubtitle1;
- (void)_updateSubtitle2;
- (void)_updateAnimatedIcon;
- (void)_animatedIconCrossedGridCycleBoundary;
- (void)_updateProgressAnimated:(_Bool)arg1;
- (void)_configurePhotoCollectionGlobalFooterLabel:(id)arg1 withFont:(id)arg2 textColor:(id)arg3;
- (void)_configurePhotoCollectionGlobalFooterTitleLabel:(id)arg1;
- (void)_configurePhotoCollectionGlobalFooterSubtitleLabel:(id)arg1;
- (id)_photoCollectionGlobalFooterSubtitleTextViewAttributesDisabled:(_Bool)arg1;
- (id)_photoCollectionGlobalFooterSubtitleTextViewLinkTextAttributes_Font;
- (id)_photoCollectionGlobalFooterSubtitleTextViewLinkTextAttributes_Color;
- (void)_configurePhotoCollectionGlobalFooterSubtitleTextView:(id)arg1;
- (void)_configurePhotoCollectionGlobalFooterProgressView:(id)arg1 paused:(_Bool)arg2;

@end
