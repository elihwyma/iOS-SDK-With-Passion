/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSComparisonPredicate, NSSortDescriptor;

@interface HKQuerySortConstraint : NSObject <Swift>

{
    NSSortDescriptor *_sortDescriptor;
    NSComparisonPredicate *_predicate;
}

@property (copy, nonatomic, readonly) NSSortDescriptor *sortDescriptor;
@property (copy, nonatomic, readonly) NSComparisonPredicate *predicate;

+ (_Bool)supportsSecureCoding;
+ (id)sortConstraintWithSortDescriptor:(id)arg1 predicate:(id)arg2;
+ (id)sortConstraintByRelaxingSortConstraint:(id)arg1 error:(id *)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSortDescriptor:(id)arg1 predicate:(id)arg2;
- (_Bool)canRelax;

@end
