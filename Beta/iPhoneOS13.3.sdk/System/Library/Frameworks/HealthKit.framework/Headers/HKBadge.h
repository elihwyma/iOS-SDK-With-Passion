/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSNumber, NSString;

@protocol NSObject;

@interface HKBadge : NSObject <Swift>

{
    long long _count;
    long long _type;
}

@property (copy, nonatomic, readonly) NSString *stringValue;
@property (copy, nonatomic, readonly) NSNumber *keyValueRepresentation;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) id <NSObject> value;
@property (nonatomic, readonly, getter=isErrorBadge) _Bool errorBadge;
@property (nonatomic, readonly, getter=isIndicatorBadge) _Bool indicatorBadge;
@property (nonatomic, readonly, getter=isNumberBadge) _Bool numberBadge;
@property (nonatomic, readonly, getter=isZeroBadge) _Bool zeroBadge;

+ (_Bool)supportsSecureCoding;
+ (id)numberBadgeWithCount:(long long)arg1;
+ (id)zeroBadge;
+ (id)indicatorBadge;
+ (id)errorBadge;
+ (id)badgeFromKeyValueRepresentation:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 count:(long long)arg2;
- (id)badgeByAggregatingWithBadge:(id)arg1;
- (id)badgeByIncrementingByCount:(long long)arg1;

@end
