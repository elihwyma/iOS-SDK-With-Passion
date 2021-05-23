/*
 Image: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface APTargetBTLEDevice : NSObject

{
    _Bool _isSoloCapable;
    _Bool _supportsMediaControlPort;
    _Bool _isFirmwareTracked;
    _Bool _requestedTracking;
    int _lastRSSI;
    CDStruct_b2d45402 _lastData;
    NSUUID *_deviceID;
    unsigned long long _lastBeaconTicks;
}

@property (retain, nonatomic) NSUUID *deviceID;
@property (nonatomic) _Bool isSoloCapable;
@property (nonatomic) _Bool supportsMediaControlPort;
@property (nonatomic) CDStruct_b2d45402 lastData;
@property (nonatomic) unsigned long long lastBeaconTicks;
@property (nonatomic) int lastRSSI;
@property (nonatomic) _Bool isFirmwareTracked;
@property (nonatomic) _Bool requestedTracking;

- (void)dealloc;

@end
