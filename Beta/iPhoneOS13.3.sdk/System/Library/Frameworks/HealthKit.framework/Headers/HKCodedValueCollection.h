/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSArray;

@interface HKCodedValueCollection : NSObject <Swift>

{
    NSArray *_codedValues;
}

@property (copy, nonatomic, readonly) NSArray *codedValues;

+ (_Bool)supportsSecureCoding;
+ (id)codedValueCollectionWithCodedValues:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodedValues:(id)arg1;

@end
