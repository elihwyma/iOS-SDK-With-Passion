/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol EDActivityHookResponder;

@interface EDActivityPersistence : NSObject

{
    NSMutableDictionary *_currentActivities;
    struct os_unfair_lock_s _lock;
    id <EDActivityHookResponder> _activityHookResponder;
}

@property (retain, nonatomic) id <EDActivityHookResponder> activityHookResponder;

- (void)activityWithID:(id)arg1 setUserInfoObject:(id)arg2 forKey:(id)arg3;
- (void)activityWithID:(id)arg1 setCompletedCount:(long long)arg2 totalCount:(long long)arg3;
- (void)activityWithID:(id)arg1 finishedWithError:(id)arg2;
- (id)currentActivities;
- (id)initWithHookResponder:(id)arg1;
- (id)startActivityOfType:(long long)arg1 userInfo:(id)arg2;

@end
