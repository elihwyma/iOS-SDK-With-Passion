/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFocusTest.h>

@class NSTimer, UIScrollView;

@protocol UIFocusItem;

@interface _UIFocusFastScrollingTest : _UIFocusTest

{
    unsigned long long _currentScroll;
    struct CGPoint _originalContentOffset;
    id <UIFocusItem> _originalFocusedItem;
    NSTimer *_delayTimer;
    UIScrollView *_scrollView;
    double _peakScrollVelocity;
    unsigned long long _numberOfScrollsToPerform;
    double _delayBetweenScrolls;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double peakScrollVelocity;
@property (nonatomic) unsigned long long numberOfScrollsToPerform;
@property (nonatomic) double delayBetweenScrolls;

- (void)cancel;
- (void)main;
- (id)initWithIdentifier:(id)arg1;
- (void)reset;
- (void)_performFocusFastScrolling;
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
