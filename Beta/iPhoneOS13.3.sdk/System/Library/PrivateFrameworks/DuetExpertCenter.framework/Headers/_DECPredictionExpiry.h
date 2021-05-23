/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface _DECPredictionExpiry : NSObject

{
    unsigned long long _type;
    long long _value;
    NSDate *_date;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) long long value;
@property (nonatomic, readonly) NSDate *date;

+ (_Bool)supportsSecureCoding;
+ (id)expireAfter:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 value:(unsigned long long)arg2;

@end
