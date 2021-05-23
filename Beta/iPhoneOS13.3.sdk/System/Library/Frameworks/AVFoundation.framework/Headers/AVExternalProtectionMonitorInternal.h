/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVExternalProtectionMonitor;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVExternalProtectionMonitorInternal : NSObject

{
    struct OpaqueFigCPEProtector *_protector;
    AVExternalProtectionMonitor *_publicMonitor;
    NSObject<OS_dispatch_queue> *_queue;
}

@end
