/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIView.h>

@class CPSCardPlatterView, CPSPausedCardView, CPSUpcomingManeuversCardView, NSString, UIColor;

@interface CPSNavigationCardView : UIView

{
    CPSPausedCardView *_pausedView;
    UIColor *_guidanceBackgroundColor;
    CPSCardPlatterView *_platterView;
    CPSUpcomingManeuversCardView *_maneuversView;
}

@property (retain, nonatomic) CPSUpcomingManeuversCardView *maneuversView;
@property (nonatomic, readonly) CPSPausedCardView *pausedView;
@property (retain, nonatomic) UIColor *guidanceBackgroundColor;
@property (nonatomic, readonly) CPSCardPlatterView *platterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)invalidateIntrinsicContentSize;
- (_Bool)hasContent;
- (id)initWithBackgroundColor:(id)arg1;
- (void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2;
- (void)navigator:(id)arg1 pausedTripForReason:(unsigned long long)arg2 description:(id)arg3;
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;
- (void)_showManeuversView;
- (void)_showPausedViewForReason:(unsigned long long)arg1 description:(id)arg2;

@end
