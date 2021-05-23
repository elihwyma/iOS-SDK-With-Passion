/*
 Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface APSourceBTLEDevice : NSObject

{
    int _lastRSSI;
    unsigned long long _lastUpdateTicks;
}

@property (nonatomic) int lastRSSI;
@property (nonatomic) unsigned long long lastUpdateTicks;

@end
