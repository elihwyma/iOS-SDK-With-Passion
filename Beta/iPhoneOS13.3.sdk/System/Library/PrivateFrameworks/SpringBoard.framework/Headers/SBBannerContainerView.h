/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PlatterKit/PLPlatterView.h>

@class SBBannerContextView, SBUIBannerContext;

@interface SBBannerContainerView : PLPlatterView

{
    SBBannerContextView *_bannerContextView;
}

@property (retain, nonatomic) SBBannerContextView *bannerContextView;
@property (retain, nonatomic, readonly) SBUIBannerContext *bannerContext;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)noteWillDismissWithReason:(int)arg1;
- (void)noteWillAppear;
- (void)noteDidDismissWithReason:(int)arg1;
- (void)noteDidAppear;

@end
