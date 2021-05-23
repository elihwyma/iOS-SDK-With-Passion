/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface BitrateLimits : NSObject

{
    int operatingMode;
    unsigned long long defaultValue;
    unsigned long long defaultValueCellular;
    unsigned long long defaultValue2G;
    NSArray *limits;
}

@property (nonatomic, readonly) int operatingMode;
@property (nonatomic, readonly) NSArray *limits;

+ (unsigned long long)insertionIndex:(id)arg1 forValue:(id)arg2;

- (void)dealloc;
- (void)capDefaultValues:(unsigned long long)arg1;
- (id)initWithOperatingMode:(int)arg1 withBitrateCap:(unsigned long long)arg2;
- (unsigned long long)defaultValueForNetwork:(_Bool)arg1;

@end
