/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSVSystemDialogManager : NSObject

{
    struct __CFDictionary *_registeredSystemDialogs;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)registerSystemDialog:(id)arg1 forUserNotification:(struct __CFUserNotification *)arg2;
- (id)systemDialogForUserNotification:(struct __CFUserNotification *)arg1;
- (void)unregisterSystemDialogWithUserNotification:(struct __CFUserNotification *)arg1;

@end
