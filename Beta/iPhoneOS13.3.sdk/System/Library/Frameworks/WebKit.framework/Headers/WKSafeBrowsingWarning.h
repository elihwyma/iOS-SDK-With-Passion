/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIScrollView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKSafeBrowsingWarning : UIScrollView

{
    CompletionHandler_2c34b13f _completionHandler;
    struct RefPtr<const WebKit::SafeBrowsingWarning, WTF::DumbPtrTraits<const WebKit::SafeBrowsingWarning>> _warning;
    struct WeakObjCPtr<WKSafeBrowsingTextView> _details;
    struct WeakObjCPtr<WKSafeBrowsingBox> _box;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)updateContentSize;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1 safeBrowsingWarning:(const struct SafeBrowsingWarning *)arg2 completionHandler:(CompletionHandler_2c34b13f *)arg3;
- (_Bool)forMainFrameNavigation;
- (void)showDetailsClicked;
- (void)goBackClicked;
- (void)layoutText;
- (void)clickedOnLink:(id)arg1;
- (void)addContent;

@end
