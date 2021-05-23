/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class NSHashTable, NSString, NSTimer, UIView;

@protocol AVScrollViewObserverContentView;

__attribute__((visibility("hidden")))
@interface AVScrollViewObserver : NSObject

{
    _Bool _scrolling;
    _Bool _scrollingQuickly;
    UIView<AVScrollViewObserverContentView> *_observer;
    NSHashTable *_observedScrollViews;
    NSTimer *_scrollingDidEndTimer;
}

@property (weak, nonatomic) UIView<AVScrollViewObserverContentView> *observer;
@property (copy, nonatomic) NSHashTable *observedScrollViews;
@property (nonatomic, getter=isScrolling) _Bool scrolling;
@property (nonatomic, getter=isScrollingQuickly) _Bool scrollingQuickly;
@property (retain, nonatomic) NSTimer *scrollingDidEndTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithContentView:(id)arg1;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)updateObservedScrollViews;
- (void)_updateScrollingStatus;

@end
