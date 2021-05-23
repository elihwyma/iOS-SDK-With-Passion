/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface ATXBBNotificationManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _debugOutput;
    NSMutableDictionary *_recentNotifications;
}

+ (id)sharedInstance;

- (id)init;
- (id)initWithDebugOutput:(_Bool)arg1;
- (void)addNotificationForBundleId:(id)arg1 withPublicationDate:(id)arg2;
- (_Bool)_purgeNotificationsWithMinDate:(id)arg1;
- (id)recentNotifications;

@end
