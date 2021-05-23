/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <UIScrollView.h>

@class NSMutableArray, OFUIViewController;

@interface OFUIScrollView : UIScrollView

{
    OFUIViewController *_viewControllerProxy;
    NSMutableArray *_draggingPasteboardTypes;
}

@property (nonatomic) OFUIViewController *viewControllerProxy;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)registerDraggingPasteboardType:(id)arg1;
- (void)unregisterAllDraggingPasteboardType;
- (id)draggingPasteboardTypes;

@end
