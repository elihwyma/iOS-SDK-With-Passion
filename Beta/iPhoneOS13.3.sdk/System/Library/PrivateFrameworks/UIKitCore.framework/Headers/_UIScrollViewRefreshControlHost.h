/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIScrollView;

__attribute__((visibility("hidden")))
@interface _UIScrollViewRefreshControlHost : NSObject

{
    UIScrollView *_scrollView;
    _Bool _refreshControlAutomaticContentOffsetAdjustmentEnabledNeedsReset;
    _Bool _refreshControlAutomaticContentOffsetAdjustmentEnabledWhenLastIdle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) _Bool refreshControlInsetsAffectScrollViewRubberBanding;
@property (weak, readonly) UIScrollView *scrollView;

- (id)initWithScrollView:(id)arg1;
- (void)incrementInsetHeight:(double)arg1;
- (void)decrementInsetHeight:(double)arg1;
- (void)refreshControl:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3;

@end
