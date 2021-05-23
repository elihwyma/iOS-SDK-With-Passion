/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@interface GKSessionGlobals : NSObject

{
    unsigned int *_activePIDList;
    unsigned long long _activePIDListSize;
    unsigned long long _activePIDListCount;
    struct _opaque_pthread_mutex_t _lock;
}

- (id)init;
- (void)lock;
- (void)unlock;
- (void)unregisterPID:(unsigned int)arg1;
- (void)registerPID:(unsigned int)arg1;
- (_Bool)hasActivePID:(unsigned int)arg1;

@end
