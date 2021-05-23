/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber;

@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface CBHIDEvent : NSObject

{
    double _sMachTimebaseFactor;
    NSObject<OS_os_log> *_logHandle;
    struct __IOHIDEvent *_event;
    struct __IOHIDServiceClient *_service;
    NSNumber *_serviceRegistryID;
}

@property struct __IOHIDEvent *event;
@property struct __IOHIDServiceClient *service;
@property (nonatomic, readonly) float timestamp;
@property (nonatomic, readonly) unsigned int eventType;
@property (nonatomic, readonly) NSArray *copyChildren;
@property (nonatomic, readonly) NSNumber *serviceRegistryID;

+ (id)newEvent:(struct __IOHIDEvent *)arg1 andService:(struct __IOHIDServiceClient *)arg2;

- (void)dealloc;
- (id)initWithHIDEvent:(struct __IOHIDEvent *)arg1 andService:(struct __IOHIDServiceClient *)arg2;
- (int)integerValueForKey:(unsigned int)arg1;
- (float)floatValueForKey:(unsigned int)arg1;

@end
