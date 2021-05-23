/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKFilter.h>

@class HKConceptIdentifier, NSString;

@interface _HKConceptIdentifierFilter : _HKFilter

{
    unsigned long long _operatorType;
    NSString *_keyPath;
    HKConceptIdentifier *_conceptIdentifier;
}

@property (nonatomic, readonly) unsigned long long operatorType;
@property (copy, nonatomic, readonly) NSString *keyPath;
@property (copy, nonatomic, readonly) HKConceptIdentifier *conceptIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithOperatorType:(unsigned long long)arg1 keyPath:(id)arg2 conceptIdentifier:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;

@end
