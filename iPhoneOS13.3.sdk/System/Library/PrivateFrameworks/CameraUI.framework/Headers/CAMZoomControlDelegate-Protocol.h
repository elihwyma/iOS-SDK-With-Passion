//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CAMZoomControl;

@protocol CAMZoomControlDelegate <NSObject>

@optional
- (BOOL)zoomControlCanPlayHaptics:(CAMZoomControl *)arg1;
- (BOOL)zoomControlShouldSnapDialToSwitchOverZoomFactors:(CAMZoomControl *)arg1;
- (void)zoomControl:(CAMZoomControl *)arg1 didChangeSelectedButtonIndex:(NSUInteger)arg2 displayZoomFactor:(double)arg3;
- (void)toggleBetweenZoomFactorsForZoomControl:(CAMZoomControl *)arg1;
- (BOOL)canToggleBetweenZoomFactorsForZoomControl:(CAMZoomControl *)arg1;
- (void)zoomControl:(CAMZoomControl *)arg1 didChangeZoomFactor:(double)arg2 interactionType:(long long)arg3;
@end

