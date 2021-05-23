/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@interface FIUIChartDateAnchorRule : NSObject

{
    unsigned long long _calendarUnit;
    long long _roundingValue;
}

@property (nonatomic) unsigned long long calendarUnit;
@property (nonatomic) long long roundingValue;

- (id)generateAnchorFromDate:(id)arg1;
- (id)_floorDate:(id)arg1;
- (id)_anchorDiffComponents;
- (_Bool)_componentsSuccessful:(id)arg1;

@end
