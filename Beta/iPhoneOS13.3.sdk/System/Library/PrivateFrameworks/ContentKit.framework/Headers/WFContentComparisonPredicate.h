/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFContentPredicate.h>

@class NSSet, WFContentProperty;

@protocol NSCopying;

@interface WFContentComparisonPredicate : WFContentPredicate

{
    WFContentProperty *_property;
    id <NSCopying> _value;
    CDUnknownBlockType _valueBlock;
    unsigned long long _comparisonType;
}

@property (nonatomic, readonly) WFContentProperty *property;
@property (copy, nonatomic, readonly) id <NSCopying> value;
@property (copy, nonatomic, readonly) CDUnknownBlockType valueBlock;
@property (nonatomic, readonly) unsigned long long comparisonType;
@property (nonatomic, readonly) NSSet *containedProperties;

+ (void)initialize;
+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2 comparisonType:(unsigned long long)arg3;
+ (id)predicateWithValueBlock:(CDUnknownBlockType)arg1 forProperty:(id)arg2;
+ (void)registerValueMapping:(CDUnknownBlockType)arg1;

- (id)description;
- (_Bool)evaluateWithValues:(id)arg1;
- (void)evaluateWithObject:(id)arg1 propertySubstitutor:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithValue:(id)arg1 valueBlock:(CDUnknownBlockType)arg2 property:(id)arg3 comparisonType:(unsigned long long)arg4;
- (id)comparableValueForValue:(id)arg1;

@end
