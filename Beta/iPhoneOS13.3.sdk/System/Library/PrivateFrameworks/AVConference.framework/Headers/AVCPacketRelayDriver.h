/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVCPacketRelayDriver : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)startMonitoringFileDescriptor:(int)arg1 forConnection:(id)arg2;
- (void)stopMonitoringFileDescriptor:(int)arg1;

@end
