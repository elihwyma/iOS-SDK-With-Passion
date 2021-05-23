/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class IKAppDocument, NSString, SKUIHorizontalLockupView, SKUILayoutCache, SKUIViewElementLayoutContext, SUPlayerStatus, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface SKUIPreviewOverlayViewController : SKUIViewController <Swift>

{
    long long _backgroundStyle;
    IKAppDocument *_document;
    SKUILayoutCache *_layoutCache;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIHorizontalLockupView *_lockupView;
    SUPlayerStatus *_previewStatus;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (nonatomic) long long backgroundStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithDocument:(id)arg1;
- (void)_tapAction:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)prepareOverlayView;
- (void)showPreviewProgressWithStatus:(id)arg1 animated:(_Bool)arg2;
- (id)_layoutCache;
- (double)_overlayWidth;
- (void)reloadOverlayView;

@end
