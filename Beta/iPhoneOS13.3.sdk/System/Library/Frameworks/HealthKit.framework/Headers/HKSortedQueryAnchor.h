/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSArray, NSNumber;

@interface HKSortedQueryAnchor : NSObject <Swift>

{
    NSNumber *_objectID;
    NSArray *_sortConstraints;
}

@property (copy, nonatomic, readonly) NSNumber *objectID;
@property (copy, nonatomic, readonly) NSArray *sortConstraints;

+ (_Bool)supportsSecureCoding;
+ (id)sortConstraintsWithSortDescriptors:(id)arg1 sample:(id)arg2;
+ (id)sortedQueryAnchorWithSortDescriptors:(id)arg1;
+ (id)sortedQueryAnchorWithSortDescriptors:(id)arg1 includingSample:(id)arg2 objectID:(long long)arg3;
+ (id)sortedQueryAnchorWithSortDescriptors:(id)arg1 followingSample:(id)arg2 objectID:(long long)arg3;
+ (id)sortedQueryAnchorRelaxingConstraintsWithAnchor:(id)arg1 error:(id *)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicate;
- (_Bool)canRelax;
- (id)initWithSortConstraints:(id)arg1 objectID:(id)arg2;
- (id)querySortDescriptors;
- (_Bool)isCompatibleWithSortDescriptors:(id)arg1;

@end
