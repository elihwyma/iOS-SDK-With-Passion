/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class FUFlightViewController, NSString, NUIContainerBoxView, SFFlightCardSection;

@interface SearchUIFlightCardSectionView

{
    FUFlightViewController *_flightViewController;
    unsigned long long _lastSelectedLegIndex;
}

@property (retain, nonatomic) SFFlightCardSection *section;
@property (retain, nonatomic) FUFlightViewController *flightViewController;
@property (nonatomic) unsigned long long lastSelectedLegIndex;
@property (retain, nonatomic) NUIContainerBoxView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)setupContentView;
- (void)flightController:(id)arg1 didSelectLeg:(long long)arg2 ofFlight:(long long)arg3;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (void)updateChevronVisible:(_Bool)arg1 leaveSpaceForChevron:(_Bool)arg2;

@end
