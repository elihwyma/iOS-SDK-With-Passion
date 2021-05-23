/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TKPowerMonitor : NSObject

{
    struct IONotificationPort *_portRef;
    unsigned int _handle;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _awaken;
    unsigned int _kernelPort;
}

@property unsigned int kernelPort;
@property _Bool awaken;

+ (id)defaultMonitor;

- (id)init;

@end
