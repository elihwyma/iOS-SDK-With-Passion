/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UITextView.h>

__attribute__((visibility("hidden")))
@interface WKSafeBrowsingTextView : UITextView

{
    struct WeakObjCPtr<WKSafeBrowsingWarning> _warning;
}

- (id).cxx_construct;
- (struct CGSize)intrinsicContentSize;
- (id)initWithAttributedString:(id)arg1 forWarning:(id)arg2;

@end
