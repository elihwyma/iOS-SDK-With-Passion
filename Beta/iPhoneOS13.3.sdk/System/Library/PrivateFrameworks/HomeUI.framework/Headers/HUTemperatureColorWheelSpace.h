/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HUTemperatureColorWheelSpace : NSObject

{
    unsigned long long _mirroringBiasAxis;
    CDStruct_ef18196a _supportedRange;
}

@property (nonatomic, readonly) CDStruct_c3b9c2ee supportedRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic) unsigned long long mirroringBiasAxis;

+ (CDStruct_c3b9c2ee)defaultTemperatureRange;
+ (CDStruct_c3b9c2ee)largestAllowableTemperatureRange;

- (id)init;
- (CDStruct_d2b197d1)colorForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)coordinateForColor:(CDStruct_d2b197d1)arg1 isValid:(out _Bool *)arg2;
- (id)initWithSupportedRange:(CDStruct_c3b9c2ee)arg1;

@end
