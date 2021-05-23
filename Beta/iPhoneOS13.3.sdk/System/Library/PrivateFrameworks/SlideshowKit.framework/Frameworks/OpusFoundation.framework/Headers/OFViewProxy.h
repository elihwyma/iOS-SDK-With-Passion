/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <UIView.h>

@class NSMutableArray, OFUIViewController;

@interface OFViewProxy : UIView

{
    NSMutableArray *_layoutSteps;
    struct {
        struct CGRect _field1;
    } *_layoutInfo;
    OFUIViewController *_viewControllerProxy;
    _Bool _magicLayoutEnabled;
}

@property (nonatomic) OFUIViewController *viewControllerProxy;
@property (nonatomic, getter=isMagicLayoutEnabled) _Bool magicLayoutEnabled;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAnchorPoint:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)runMagicLayout;
- (void)addLayoutStep:(id)arg1;
- (void)addLayoutSteps:(id)arg1;

@end
