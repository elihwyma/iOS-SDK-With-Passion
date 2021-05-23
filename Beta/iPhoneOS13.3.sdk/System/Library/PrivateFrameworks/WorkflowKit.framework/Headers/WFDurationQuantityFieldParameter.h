/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFQuantityFieldParameter.h>

@interface WFDurationQuantityFieldParameter : WFQuantityFieldParameter

@property (nonatomic) unsigned long long possibleCalendarUnits;

+ (_Bool)unitStringIsDurationUnit:(id)arg1;
+ (unsigned long long)calendarUnitFromUnitString:(id)arg1;

- (id)initWithDefinition:(id)arg1;
- (_Bool)parameterStateIsValid:(id)arg1;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3;

@end
