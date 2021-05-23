/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSArray;

@interface HKMedicalCodingCollection : NSObject <Swift>

{
    NSArray *_codings;
}

@property (copy, nonatomic, readonly) NSArray *codings;

+ (_Bool)supportsSecureCoding;
+ (id)collectionWithCodings:(id)arg1;
+ (id)collectionWithCoding:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodings:(id)arg1;

@end
