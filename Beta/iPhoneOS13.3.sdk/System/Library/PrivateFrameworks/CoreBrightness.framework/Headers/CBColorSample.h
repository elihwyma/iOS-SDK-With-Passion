/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CBColorSample : NSObject

{
    double _lux;
    double _CCT;
    unsigned long long _mode;
    unsigned long long _type;
    CDStruct_34734122 _xy;
    CDStruct_6f955ef8 _XYZ;
}

@property (nonatomic, readonly) double lux;
@property (nonatomic, readonly) CDStruct_34734122 xy;
@property (nonatomic, readonly) CDStruct_6f955ef8 XYZ;
@property (nonatomic, readonly) CDStruct_6f955ef8 Lab;
@property (nonatomic, readonly) double CCT;
@property (nonatomic, readonly) long long colorBin;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long type;

- (id)init;
- (id)description;
- (id)initWithHIDEvent:(struct __IOHIDEvent *)arg1;
- (double)colorDeltaEWith:(id)arg1;
- (double)CCTDifferenceWith:(id)arg1;
- (double)LuxDifferenceWith:(id)arg1;
- (id)initWithChromaticity:(CDStruct_34734122)arg1 illuminance:(double)arg2 andTempterature:(double)arg3;
- (id)initWithTristimulus:(CDStruct_6f955ef8)arg1 illuminance:(double)arg2 andTempterature:(double)arg3;
- (id)copyDataInDictionary;
- (void)fillInChromaticity;
- (void)fillInTristimulus;
- (void)setXy:(CDStruct_34734122)arg1;
- (void)setXYZ:(CDStruct_6f955ef8)arg1;

@end
