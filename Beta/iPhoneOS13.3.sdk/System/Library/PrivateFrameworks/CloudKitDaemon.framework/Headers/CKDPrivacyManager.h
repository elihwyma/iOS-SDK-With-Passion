/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol OS_dispatch_queue;

@interface CKDPrivacyManager : NSObject

{
    NSObject<OS_dispatch_queue> *_privacyManagerQueue;
    NSMutableSet *_operations;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privacyManagerQueue;
@property (retain, nonatomic) NSMutableSet *operations;

+ (id)sharedManager;

- (id)init;
- (id)_init;
- (void)_resetPrivacySettingsForAppContainerAccountTuple:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetPrivacySettingsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
