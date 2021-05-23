/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, NUTitleView, NUTitleViewUpdate;

@protocol NUFeedTitleViewDelegate, NUTitleViewStyler;

@interface NUFeedTitleView : UIView

{
    id <NUFeedTitleViewDelegate> _delegate;
    NUTitleView *_titleView;
    NUTitleViewUpdate *_lastQueuedTitleViewUpdate;
    NSMutableArray *_titleViewUpdateStack;
}

@property (nonatomic, readonly) NUTitleView *titleView;
@property (retain, nonatomic) NUTitleViewUpdate *lastQueuedTitleViewUpdate;
@property (nonatomic, readonly) NSMutableArray *titleViewUpdateStack;
@property (retain, nonatomic) id <NUTitleViewStyler> styler;
@property (weak, nonatomic) id <NUFeedTitleViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)applyFeedTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2 force:(_Bool)arg3;
- (id)titleViewUpdateForFeedTitleViewUpdate:(id)arg1 force:(_Bool)arg2;
- (void)applyTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2;
- (void)pushApplyFeedTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2 force:(_Bool)arg3;
- (void)popApplyFeedTitleViewUpdateWithAnimation:(unsigned long long)arg1 force:(_Bool)arg2;
- (void)relayoutWithAnimation:(_Bool)arg1;
- (unsigned long long)titleViewAnimationForAnimation:(unsigned long long)arg1;
- (_Bool)useCompactTitleViewUpdates;
- (void)titleViewDidTapOnTitleView:(id)arg1;
- (void)applyFeedTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2;
- (void)pushApplyFeedTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2;
- (void)popApplyFeedTitleViewUpdateWithAnimation:(unsigned long long)arg1;

@end
