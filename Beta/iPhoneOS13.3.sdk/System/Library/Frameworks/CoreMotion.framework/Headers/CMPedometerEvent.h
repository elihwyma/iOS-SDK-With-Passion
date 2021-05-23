/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface CMPedometerEvent : NSObject

{
    NSDate *fDate;
    long long fType;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) long long type;

+ (_Bool)supportsSecureCoding;
+ (id)eventStringFromType:(long long)arg1;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventDate:(id)arg1 type:(long long)arg2;

@end
