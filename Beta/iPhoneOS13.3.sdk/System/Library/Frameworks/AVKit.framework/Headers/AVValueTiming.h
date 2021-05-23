/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@interface AVValueTiming : NSObject

@property (nonatomic, readonly) double currentValue;
@property (nonatomic, readonly) double anchorValue;
@property (nonatomic, readonly) double anchorTimeStamp;
@property (nonatomic, readonly) double rate;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)valueTimingWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;
+ (double)currentTimeStamp;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (double)valueForTimeStamp:(double)arg1;
- (CDStruct_c3b9c2ee)_timing;
- (id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;
- (id)initWithValueTiming:(id)arg1;
- (_Bool)isEqualToValueTiming:(id)arg1;
- (double)timeStampForValue:(double)arg1;

@end
