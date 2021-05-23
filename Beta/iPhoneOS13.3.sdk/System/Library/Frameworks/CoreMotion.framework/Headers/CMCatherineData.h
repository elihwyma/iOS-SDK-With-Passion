/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <CoreMotion/CMLogItem.h>

@interface CMCatherineData : CMLogItem

{
    double _catherine;
    double _confidence;
}

@property (nonatomic, readonly) double catherine;
@property (nonatomic, readonly) double confidence;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCatherine:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3;

@end
