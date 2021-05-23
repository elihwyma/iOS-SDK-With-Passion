/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface NTKSiderealSolarEvent : NSObject

{
    double _degree;
    NSDate *_time;
    long long _type;
}

@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) double angle;
@property (nonatomic, readonly) double degree;

+ (id)eventWithType:(long long)arg1 time:(id)arg2 degree:(double)arg3;
+ (id)eventWithType:(long long)arg1 degree:(double)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugNameForType:(long long)arg1;

@end
