/*
 Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

#import <Foundation/NSObject.h>

@class CMMotionManager, NSHashTable;

@interface PKMotionManager : NSObject

{
    CMMotionManager *_motion;
    NSHashTable *_clients;
}

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)registerClient:(id)arg1;
- (void)unregisterClient:(id)arg1;
- (_Bool)isClientRegistered:(id)arg1;
- (void)updateWithMotion:(id)arg1;

@end
