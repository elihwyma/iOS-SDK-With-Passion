/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVExternalProtectionMonitorInternal;

@interface AVExternalProtectionMonitor : NSObject

{
    AVExternalProtectionMonitorInternal *_monitor;
}

@property (nonatomic, readonly) long long externalProtectionState;

- (id)init;
- (void)dealloc;

@end
