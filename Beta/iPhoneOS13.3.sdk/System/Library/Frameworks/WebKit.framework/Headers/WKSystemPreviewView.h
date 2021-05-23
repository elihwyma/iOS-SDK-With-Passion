/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <WebKit/WKApplicationStateTrackingView.h>

@class NSData, NSString, UIView, WKWebView;

__attribute__((visibility("hidden")))
@interface WKSystemPreviewView : WKApplicationStateTrackingView

{
    struct RetainPtr<NSItemProvider> _itemProvider;
    struct RetainPtr<NSData> _data;
    struct RetainPtr<NSString> _suggestedFilename;
    struct RetainPtr<NSString> _mimeType;
    struct RetainPtr<QLItem> _item;
    struct RetainPtr<ASVThumbnailView> _thumbnailView;
    WKWebView *_webView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *web_contentView;
@property (nonatomic, readonly) NSData *web_dataRepresentation;
@property (nonatomic, readonly) NSString *web_suggestedFilename;
@property (nonatomic, readonly) _Bool web_isBackground;

+ (_Bool)web_requiresCustomSnapshotting;

- (id).cxx_construct;
- (id)web_initWithFrame:(struct CGRect)arg1 webView:(id)arg2 mimeType:(id)arg3;
- (void)web_setMinimumSize:(struct CGSize)arg1;
- (void)web_setFixedOverlayView:(id)arg1;
- (void)web_setContentProviderData:(id)arg1 suggestedFilename:(id)arg2;
- (void)web_computedContentInsetDidChange;
- (void)web_didSameDocumentNavigation:(unsigned int)arg1;
- (void)web_countStringMatches:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (void)web_findString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (void)web_hideFindUI;
- (void)web_setOverlaidAccessoryViewsInset:(struct CGSize)arg1;
- (void)_layoutThumbnailView;
- (void)thumbnailView:(id)arg1 wantsToPresentPreviewController:(id)arg2 forItem:(id)arg3;
- (id)provideDataForItem:(id)arg1;

@end
