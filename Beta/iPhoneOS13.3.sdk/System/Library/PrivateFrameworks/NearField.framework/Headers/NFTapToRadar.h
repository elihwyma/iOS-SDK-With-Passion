/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@class NSString, NSUserDefaults;

@protocol OS_dispatch_queue;

@interface NFTapToRadar : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    Class _lsApplicationWorkspace;
    NSString *_pendingRequest;
    NSUserDefaults *_userDefaults;
    struct __CFRunLoopSource *_runLoopSource;
    struct __CFUserNotification *_userNotification;
}

+ (void)requestTapToRadar:(id)arg1 preferences:(id)arg2;
+ (id)_getInstance;
+ (void)handleCallback:(unsigned long long)arg1;

- (id)init;
- (void)_handleCallbackSync:(unsigned long long)arg1;
- (void)_requestTapToRadarSync:(id)arg1 prefs:(id)arg2;

@end
