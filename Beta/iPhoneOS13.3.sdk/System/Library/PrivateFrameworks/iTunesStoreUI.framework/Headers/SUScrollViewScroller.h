/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

#import <iTunesStoreUI/Swift-Protocol.h>

@class NSMutableArray, NSString, UIScrollView;

@protocol UIScrollViewDelegate;

@interface SUScrollViewScroller : NSObject <Swift>

{
    NSObject<UIScrollViewDelegate> *_originalDelegate;
    NSMutableArray *_scrollRequests;
    UIScrollView *_scrollView;
}

@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)attachToScrollView:(id)arg1;
- (void)detachFromScrollView;
- (void)scrollFrameToVisible:(struct CGRect)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_addScrollRequest:(id)arg1;
- (void)_finishActiveScrollRequest;
- (void)_performNextScrollRequest;
- (void)_performContentOffsetRequest:(id)arg1;
- (void)_performScrollRectRequest:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
