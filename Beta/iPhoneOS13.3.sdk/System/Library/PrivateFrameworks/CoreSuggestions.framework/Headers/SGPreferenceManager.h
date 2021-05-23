/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSUserDefaults;

@protocol OS_dispatch_queue;

@interface SGPreferenceManager : NSObject

{
    NSUserDefaults *_suggestionsDefaults;
    NSObject<OS_dispatch_queue> *_settingsUpdateQueue;
    _Bool _isQueueSuspended;
}

+ (id)defaultManager;

- (id)init;
- (int)registerBlock:(CDUnknownBlockType)arg1;
- (void)_suspendNotificationQueue;
- (void)_resumeNotificationQueue;

@end
