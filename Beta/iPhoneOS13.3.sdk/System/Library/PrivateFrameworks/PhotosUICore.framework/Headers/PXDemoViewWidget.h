/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXPhotosDetailsContext, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec, UIView;

@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXDemoViewWidget : NSObject <Swift>

{
    _Bool _isExpanded;
    double _height;
    _Bool __didLoadContent;
    id <PXWidgetDelegate> _widgetDelegate;
    PXWidgetSpec *_spec;
    long long _contentViewAnchoringType;
    UIView *__containerView;
    UIView *__contentView;
    long long __animationCount;
    struct CGSize __contentSize;
}

@property (nonatomic, readonly) UIView *_containerView;
@property (nonatomic, readonly) UIView *_contentView;
@property (nonatomic, setter=_setContentViewAnchoringType:) long long contentViewAnchoringType;
@property (nonatomic, setter=_setContentSize:) struct CGSize _contentSize;
@property (nonatomic, setter=_setDidLoadContent:) _Bool _didLoadContent;
@property (nonatomic, setter=_setAnimationCount:) long long _animationCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXWidgetDelegate> widgetDelegate;
@property (weak, nonatomic) id <PXWidgetUnlockDelegate> widgetUnlockDelegate;
@property (retain, nonatomic) PXPhotosDetailsContext *context;
@property (retain, nonatomic) PXWidgetSpec *spec;
@property (nonatomic, readonly) _Bool hasContentForCurrentInput;
@property (nonatomic, readonly) _Bool hasLoadedContentData;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) _Bool allowUserInteractionWithSubtitle;
@property (nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property (nonatomic, readonly) _Bool supportsSelection;
@property (nonatomic, getter=isSelecting) _Bool selecting;
@property (nonatomic, readonly) _Bool supportsFaceMode;
@property (nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;

- (id)init;
- (void)setContentSize:(struct CGSize)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_handleLongPressGestureRecognizer:(id)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)loadContentData;
- (void)contentViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)userDidSelectDisclosureControl;
- (void)_loadViews;
- (struct CGRect)_contentViewFrameForSize:(struct CGSize)arg1;
- (void)_updateContentViewColor;

@end
