/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKMedicalConcept, NSError;

@interface HKMedicalCodingResult : NSObject <Swift>

{
    HKMedicalConcept *_concept;
    NSError *_error;
}

@property (copy, nonatomic, readonly) HKMedicalConcept *concept;
@property (copy, nonatomic, readonly) NSError *error;

+ (_Bool)supportsSecureCoding;
+ (id)resultWithError:(id)arg1;
+ (id)resultWithConcept:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConcept:(id)arg1 error:(id)arg2;

@end
