/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HMDevice;

@interface HUPresenceCurrentUserLocationDevice : NSObject

{
    unsigned long long _type;
    HMDevice *_customDevice;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) HMDevice *customDevice;

+ (id)currentDevice;
+ (id)FMFDevice;
+ (id)customDeviceWithHMDevice:(id)arg1;

- (id)initWithType:(unsigned long long)arg1 customDevice:(id)arg2;

@end
