/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@interface CMPedometerBin : NSObject

{
    double _valueOut;
    double _begin;
    double _end;
    long long _state;
}

@property (nonatomic, readonly) double valueOut;
@property (nonatomic, readonly) double begin;
@property (nonatomic, readonly) double lowerQuartile;
@property (nonatomic, readonly) double center;
@property (nonatomic, readonly) double upperQuartile;
@property (nonatomic, readonly) double end;
@property (nonatomic, readonly) long long state;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValueOut:(double)arg1 begin:(double)arg2 end:(double)arg3 state:(long long)arg4;

@end
