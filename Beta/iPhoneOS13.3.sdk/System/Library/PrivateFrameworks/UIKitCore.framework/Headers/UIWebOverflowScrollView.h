/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIScrollView.h>

@class CALayer, DOMNode, UIWebBrowserView, UIWebOverflowContentView, UIWebOverflowScrollListener;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollView : UIScrollView

{
    _Bool _beingRemoved;
    UIWebBrowserView *_webBrowserView;
    UIWebOverflowScrollListener *_scrollListener;
    UIWebOverflowContentView *_overflowContentView;
    DOMNode *_node;
    CALayer *_webLayer;
}

@property (nonatomic) UIWebBrowserView *webBrowserView;
@property (retain, nonatomic) UIWebOverflowScrollListener *scrollListener;
@property (retain, nonatomic) UIWebOverflowContentView *overflowContentView;
@property (retain, nonatomic) CALayer *webLayer;
@property (retain, nonatomic) DOMNode *node;
@property (nonatomic, getter=isBeingRemoved) _Bool beingRemoved;

- (void)dealloc;
- (id)superview;
- (void)setContentOffset:(struct CGPoint)arg1;
- (id)initWithLayer:(id)arg1 node:(id)arg2 webBrowserView:(id)arg3;
- (void)replaceLayer:(id)arg1;
- (void)willBeRemoved;
- (_Bool)fixUpViewAfterInsertion;

@end
