/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface WKPDFPageNumberIndicator : UIView

{
    struct RetainPtr<UILabel> _label;
    struct RetainPtr<_UIBackdropView> _backdropView;
    struct RetainPtr<NSTimer> _timer;
    _Bool _hasValidPageCountAndCurrentPage;
    unsigned int _currentPageNumber;
    unsigned int _pageCount;
}

@property (nonatomic) unsigned int currentPageNumber;
@property (nonatomic) unsigned int pageCount;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)show;
- (void)_updateLabel;
- (void)hide;
- (void)_makeRoundedCorners;
- (void)hide:(id)arg1;
- (void)moveToPoint:(struct CGPoint)arg1 animated:(_Bool)arg2;

@end
