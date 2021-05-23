/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

__attribute__((visibility("hidden")))
@interface HMIThermalMonitorService : HMFObject

{
    struct __IOHIDServiceClient *_service;
}

- (void)dealloc;
- (id)initWithService:(struct __IOHIDServiceClient *)arg1;
- (double)readValue;

@end
