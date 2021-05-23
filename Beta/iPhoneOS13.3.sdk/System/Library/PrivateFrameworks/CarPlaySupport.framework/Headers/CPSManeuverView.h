/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <CarPlaySupport/CPSInheritedBackgroundColorView.h>

@class CPManeuver, CPTravelEstimates;

@interface CPSManeuverView : CPSInheritedBackgroundColorView

{
    CPManeuver *_representedManeuver;
    long long _style;
    CPTravelEstimates *_currentTravelEstimates;
    unsigned long long _guidanceStyle;
}

@property (nonatomic, readonly) CPManeuver *representedManeuver;
@property (nonatomic) long long style;
@property (retain, nonatomic) CPTravelEstimates *currentTravelEstimates;
@property (nonatomic) unsigned long long guidanceStyle;

- (id)initWithManeuver:(id)arg1 style:(long long)arg2;
- (id)accessibilityName:(id)arg1;

@end
