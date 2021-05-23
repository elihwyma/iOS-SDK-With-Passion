/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <CoreBrightness/CBHIDEvent.h>

@class NSObject;

@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface CBALSEvent : CBHIDEvent

{
    struct __IOHIDEvent *_event;
    NSObject<OS_os_log> *_logHandle;
    _Bool _supportColor;
    _Bool _obstructed;
    _Bool _firstALSSample;
    int _orientation;
    float _integrationTime;
    double _illuminance;
    CDStruct_6cdf1869 _colorSample;
    CDStruct_805d9ecb _vendorData;
}

@property double illuminance;
@property CDStruct_6cdf1869 colorSample;
@property _Bool supportColor;
@property _Bool obstructed;
@property int orientation;
@property CDStruct_805d9ecb vendorData;
@property float integrationTime;
@property _Bool firstALSSample;

- (void)dealloc;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithHIDEvent:(struct __IOHIDEvent *)arg1 andService:(struct __IOHIDServiceClient *)arg2;
- (int)getServiceOrientation:(struct __IOHIDServiceClient *)arg1;
- (CDStruct_805d9ecb)copyVendorDataFromEvent:(struct __IOHIDEvent *)arg1;

@end
