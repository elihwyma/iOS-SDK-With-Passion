//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFQuantityFieldParameter.h>

@interface WFDurationQuantityFieldParameter : WFQuantityFieldParameter
{
}

+ (NSUInteger)calendarUnitFromUnitString:(id)arg1;
+ (BOOL)unitStringIsDurationUnit:(id)arg1;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(NSUInteger)arg3;
- (BOOL)parameterStateIsValid:(id)arg1;
@property(nonatomic) NSUInteger possibleCalendarUnits;
- (id)initWithDefinition:(id)arg1;

@end

