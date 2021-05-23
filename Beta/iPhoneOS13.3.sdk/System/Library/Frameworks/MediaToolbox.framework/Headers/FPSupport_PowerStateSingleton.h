/*
 Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPSupport_PowerStateSingleton : NSObject

{
    NSObject<OS_dispatch_queue> *_notificationQ;
}

+ (id)sharedFPSupportPowerStateSingleton;

- (id)init;
- (void)dealloc;
- (void)_didChangePowerState:(id)arg1;

@end
