/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCDaemonProcessInfoManager : NSObject

{
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

+ (id)sharedManager;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)allocWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)registerBlocksForService;
- (void)deregisterBlocksForService;
- (id)copyProcessInfo;

@end
