/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSISVariable, NSString;

@interface NSLayoutAnchor : NSObject <Swift>

{
    id _referenceItem;
    long long _attr;
    NSISVariable *_variable;
    NSString *_name;
    id _cachedReferenceItems;
    id _reserved;
    unsigned int _type:2;
    unsigned int _reserved3:30;
}

+ (id)anchorWithItem:(id)arg1 attribute:(long long)arg2;
+ (id)anchorNamed:(id)arg1 inItem:(id)arg2;
+ (id)anchorNamed:(id)arg1 inItem:(id)arg2 symbolicAttribute:(long long)arg3;
+ (id)_anchorForItem:(id)arg1 attribute:(long long)arg2;
+ (id)layoutAnchorWithItem:(id)arg1 attribute:(long long)arg2;
+ (id)layoutAnchorWithName:(id)arg1 forReferenceView:(id)arg2;
+ (id)anchorWithName:(id)arg1 forReferenceView:(id)arg2;
+ (id)anchorWithName:(id)arg1 forReferenceView:(id)arg2 symbolicAttribute:(long long)arg3;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)item;
- (id)observableValueInItem:(id)arg1;
- (double)valueInItem:(id)arg1;
- (id)initWithName:(id)arg1 referenceItem:(id)arg2 symbolicAttribute:(long long)arg3;
- (id)initWithItem:(id)arg1 attribute:(long long)arg2;
- (id)initWithIndependentVariableName:(id)arg1 item:(id)arg2 symbolicAttribute:(long long)arg3;
- (long long)_anchorType;
- (id)_nearestAncestorLayoutItem;
- (id)_expressionInContext:(CDStruct_1b4a36b4)arg1;
- (id)initWithAnchor:(id)arg1;
- (id)_anchorVariable;
- (id)_proxiedItem;
- (id)_referenceItem;
- (id)_referencedLayoutItems;
- (id)_constituentAnchors;
- (long long)_constraintAttribute;
- (id)_constraintItem;
- (id)anchorWithName:(id)arg1 referenceItem:(id)arg2 symbolicAttribute:(long long)arg3;
- (id)_equationDescriptionInParent;
- (int)_anchorVariableRestriction;
- (long long)_proxiedAttribute;
- (void)_accumulateReferenceLayoutItemsIntoTable:(id)arg1;
- (id)equationDescription;
- (id)_equationDescriptionLegendEntries;
- (id)_expressionInDefaultContextWithEngine:(id)arg1;
- (id)_dependentVariables;
- (_Bool)_isReferencedByConstraint:(id)arg1;
- (_Bool)isCompatibleWithAnchor:(id)arg1;
- (id)anchorWithName:(id)arg1;
- (id)_referenceView;
- (id)_variableName;
- (_Bool)validateOtherAttribute:(long long)arg1;
- (double)_valueInEngine:(id)arg1;
- (_Bool)hasAmbiguousLayout;
- (id)constraintsAffectingLayout;
- (id)_referencingConstraints;
- (_Bool)nsli_lowerIntoExpression:(id)arg1 withCoefficient:(double)arg2 forConstraint:(id)arg3;
- (id)constraintEqualToAnchor:(id)arg1 constant:(double)arg2;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;
- (id)constraintEqualToAnchor:(id)arg1;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1;
- (id)_expressionForValueInItem:(id)arg1;
- (id)rulesAffectingLayout;
- (id)ruleEqualToAnchor:(id)arg1;
- (id)ruleEqualToAnchor:(id)arg1 constant:(double)arg2;
- (id)ruleEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3 priority:(float)arg4 identifier:(id)arg5;
- (id)ruleGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3 priority:(float)arg4 identifier:(id)arg5;
- (id)ruleLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3 priority:(float)arg4 identifier:(id)arg5;
- (id)ruleGreaterThanOrEqualToAnchor:(id)arg1;
- (id)ruleLessThanOrEqualToAnchor:(id)arg1;
- (id)ruleGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;
- (id)ruleLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;
- (id)ruleEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4;
- (id)ruleGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4;
- (id)ruleLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4;

@end
