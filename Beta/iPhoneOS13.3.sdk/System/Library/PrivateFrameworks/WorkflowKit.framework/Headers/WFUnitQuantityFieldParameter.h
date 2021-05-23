/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFQuantityFieldParameter.h>

@class NSArray, NSDictionary, NSString, NSUnit;

@interface WFUnitQuantityFieldParameter : WFQuantityFieldParameter

{
    _Bool _fallbackToAllSupportedUnits;
    NSArray *_possibleUnits;
    NSString *_unitType;
    NSUnit *_defaultUnit;
    NSDictionary *_unitSymbolMap;
}

@property (retain, nonatomic) NSDictionary *unitSymbolMap;
@property (copy, nonatomic) NSString *unitType;
@property (retain, nonatomic) NSUnit *defaultUnit;
@property (nonatomic) _Bool fallbackToAllSupportedUnits;

- (id)initWithDefinition:(id)arg1;
- (_Bool)parameterStateIsValid:(id)arg1;
- (id)defaultSerializedRepresentation;
- (void)setPossibleUnits:(id)arg1;
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3;
- (id)possibleUnits;
- (id)availableUnitForStringValue:(id)arg1;
- (void)updatePossibleUnits;

@end
