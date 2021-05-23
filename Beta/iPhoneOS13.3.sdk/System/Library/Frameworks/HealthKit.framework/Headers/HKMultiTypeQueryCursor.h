/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKQueryAnchor, NSArray, NSData;

@interface HKMultiTypeQueryCursor : NSObject <Swift>

{
    NSArray *_sampleQueryDescriptions;
    NSArray *_sortDescriptors;
    HKQueryAnchor *_followingAnchor;
    HKQueryAnchor *_upToAndIncludingAnchor;
    NSArray *_distinctByKeyPaths;
    NSData *_state;
}

@property (copy, nonatomic, readonly) NSArray *sampleQueryDescriptions;
@property (copy, nonatomic, readonly) NSArray *sortDescriptors;
@property (copy, nonatomic, readonly) HKQueryAnchor *followingAnchor;
@property (copy, nonatomic, readonly) HKQueryAnchor *upToAndIncludingAnchor;
@property (copy, nonatomic, readonly) NSArray *distinctByKeyPaths;
@property (copy, nonatomic, readonly) NSData *state;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSampleQueryDescriptions:(id)arg1 sortDescriptors:(id)arg2 followingAnchor:(id)arg3 upToAndIncludingAnchor:(id)arg4 distinctByKeyPaths:(id)arg5 state:(id)arg6;

@end
