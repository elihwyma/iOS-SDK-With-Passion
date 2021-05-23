/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKFilter.h>

@class NSString;

@interface _HKOSBuildOriginFilter : _HKFilter

{
    NSString *_comparisonOSBuild;
    unsigned long long _operatorType;
}

@property (nonatomic, readonly) NSString *comparisonOSBuild;
@property (nonatomic, readonly) unsigned long long operatorType;

+ (_Bool)supportsSecureCoding;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithOperatorType:(unsigned long long)arg1 comparisonOSBuild:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;

@end
