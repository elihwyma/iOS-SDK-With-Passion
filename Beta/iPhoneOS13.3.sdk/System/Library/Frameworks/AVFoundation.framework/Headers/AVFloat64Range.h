/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVFloat64Range : NSObject

{
    double _minimum;
    double _maximum;
}

@property (nonatomic, readonly) double minimum;
@property (nonatomic, readonly) double maximum;

+ (id)float64RangeWithMinimum:(double)arg1 maximum:(double)arg2;
+ (id)float64RangeWithAudioValueRange:(struct AudioValueRange)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMinimum:(double)arg1 maximum:(double)arg2;
- (id)initWithAudioValueRange:(struct AudioValueRange)arg1;

@end
