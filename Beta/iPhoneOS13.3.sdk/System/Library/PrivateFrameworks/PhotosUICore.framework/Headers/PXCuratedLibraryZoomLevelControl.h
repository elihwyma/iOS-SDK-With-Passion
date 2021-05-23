/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSString, PXCuratedLibraryStyleGuide, PXCuratedLibraryViewModel, PXUpdater, UIColor, UIVisualEffectView;

@protocol PXCuratedLibraryZoomLevelControlDelegate;

@interface PXCuratedLibraryZoomLevelControl : UIView <Swift>

{
    PXUpdater *_updater;
    struct UIEdgeInsets _padding;
    struct CGSize *_segmentSizes;
    double _minimumInterSegmentSpacing;
    struct CGSize _intrinsicSize;
    UIVisualEffectView *_backgroundEffectView;
    UIView *_contentView;
    UIView *_selectionView;
    UIColor *_selectedButtonTextColor;
    UIColor *_unselectedButtonTextColor;
    NSArray *_selectedButtons;
    NSArray *_unselectedButtons;
    double _selectionPillMargin;
    PXCuratedLibraryViewModel *_viewModel;
    PXCuratedLibraryStyleGuide *_styleGuide;
    id <PXCuratedLibraryZoomLevelControlDelegate> _delegate;
    NSArray *_zoomLevelIdentifiers;
    long long _selectedZoomLevel;
    NSArray *_enabledZoomLevelIdentifiers;
    long long _shrinkLevel;
}

@property (nonatomic, readonly) NSArray *zoomLevelIdentifiers;
@property (nonatomic) long long selectedZoomLevel;
@property (retain, nonatomic) NSArray *enabledZoomLevelIdentifiers;
@property (nonatomic) long long shrinkLevel;
@property (nonatomic, readonly) PXCuratedLibraryViewModel *viewModel;
@property (nonatomic, readonly) PXCuratedLibraryStyleGuide *styleGuide;
@property (weak, nonatomic) id <PXCuratedLibraryZoomLevelControlDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_enabledZoomLevelIdentifiersForViewModel:(id)arg1;
+ (id)_localizedTitleForZoomLevel:(long long)arg1 usingShortVariant:(_Bool)arg2;
+ (id)_allZoomLevelIdentifiers;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateSubviews;
- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateSelection;
- (id)initWithViewModel:(id)arg1 styleGuide:(id)arg2;
- (long long)zoomLevelDisplayedBeforeZoomLevel:(long long)arg1;
- (void)_invalidateSubviews;
- (void)_invalidateButtonsStyle;
- (void)_updateButtonsStyle;
- (void)_handleButton:(id)arg1;

@end
