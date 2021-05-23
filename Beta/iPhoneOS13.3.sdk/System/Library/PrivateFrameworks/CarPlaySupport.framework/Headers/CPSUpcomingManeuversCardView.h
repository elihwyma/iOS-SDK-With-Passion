/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <CarPlaySupport/CPSInheritedBackgroundColorView.h>

@class CPSHairlineView, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface CPSUpcomingManeuversCardView : CPSInheritedBackgroundColorView

{
    _Bool _saveManeuversToDisk;
    NSArray *_maneuvers;
    NSMutableDictionary *_currentTravelEstimatesForManeuverIdentifiers;
    NSArray *_maneuverStyles;
    NSMutableArray *_maneuverViewStack;
    NSMutableArray *_verticalConstraints;
    CPSHairlineView *_hairlineView;
}

@property (nonatomic, readonly) NSArray *maneuvers;
@property (retain, nonatomic) NSMutableDictionary *currentTravelEstimatesForManeuverIdentifiers;
@property (nonatomic, readonly) NSArray *maneuverStyles;
@property (nonatomic, readonly) NSMutableArray *maneuverViewStack;
@property (nonatomic, readonly) NSMutableArray *verticalConstraints;
@property (nonatomic, readonly) CPSHairlineView *hairlineView;
@property (nonatomic) _Bool saveManeuversToDisk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2;
- (void)backgroundColorDidChange;
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;
- (id)_maneuverViews;
- (void)_updateVerticalConstraints;
- (void)_clearManeuvers;
- (void)_resetToFull;

@end
