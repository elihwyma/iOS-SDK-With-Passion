/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSDate;

@interface NSDateInterval : NSObject <Swift>

@property (copy, readonly) NSDate *startDate;
@property (copy, readonly) NSDate *endDate;
@property (readonly) double duration;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 duration:(double)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (_Bool)isEqualToDateInterval:(id)arg1;
- (_Bool)containsDate:(id)arg1;
- (_Bool)intersectsDateInterval:(id)arg1;
- (id)intersectionWithDateInterval:(id)arg1;

@end
