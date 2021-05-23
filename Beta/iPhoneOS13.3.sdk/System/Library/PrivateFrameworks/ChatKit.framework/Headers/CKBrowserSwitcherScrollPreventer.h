/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

#import <ChatKit/Swift-Protocol.h>

@class NSString, UILongPressGestureRecognizer, UIScrollView;

@protocol CKBrowserSwitcherScrollPreventerDelegate;

@interface CKBrowserSwitcherScrollPreventer : UIView <Swift>

{
    UILongPressGestureRecognizer *_touchTracker;
    _Bool _engaged;
    _Bool _switching;
    _Bool _scrollEnabled;
    id <CKBrowserSwitcherScrollPreventerDelegate> _delegate;
    UIScrollView *_horizontalScrollView;
    UIView *_horizontalScrollPreventerView;
}

@property (retain, nonatomic) UIScrollView *horizontalScrollView;
@property (retain, nonatomic) UIView *horizontalScrollPreventerView;
@property (nonatomic, getter=isEngaged) _Bool engaged;
@property (nonatomic, getter=isSwitching) _Bool switching;
@property (nonatomic) _Bool scrollEnabled;
@property (nonatomic) struct CGPoint contentOffset;
@property (nonatomic) struct CGSize contentSize;
@property (weak, nonatomic) id <CKBrowserSwitcherScrollPreventerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)touchTrackerRecognized:(id)arg1;

@end
