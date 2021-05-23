/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface EKRecurrenceEnd : NSObject

{
    NSDate *_endDate;
    unsigned long long _occurrenceCount;
}

@property (nonatomic, readonly) _Bool usesEndDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long occurrenceCount;

+ (_Bool)supportsSecureCoding;
+ (id)recurrenceEndWithOccurrenceCount:(unsigned long long)arg1;
+ (id)recurrenceEndWithEndDate:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndDate:(id)arg1;
- (id)initWithOccurrenceCount:(unsigned long long)arg1;

@end
