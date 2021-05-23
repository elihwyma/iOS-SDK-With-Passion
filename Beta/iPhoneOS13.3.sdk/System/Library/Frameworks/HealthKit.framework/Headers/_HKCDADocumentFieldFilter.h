/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKFilter.h>

@class NSRegularExpression, NSString;

@interface _HKCDADocumentFieldFilter : _HKFilter

{
    unsigned long long _operatorType;
    NSString *_keyPath;
    NSString *_comparisonValue;
    NSRegularExpression *_comparisonExpression;
}

@property (nonatomic, readonly) unsigned long long operatorType;
@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) NSString *comparisonValue;
@property (nonatomic, readonly) NSRegularExpression *comparisonExpression;

+ (_Bool)supportsSecureCoding;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithOperatorType:(unsigned long long)arg1 keyPath:(id)arg2 comparisonValue:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;
- (id)_comparisonExpression;

@end
