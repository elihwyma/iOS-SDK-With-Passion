/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSUserDefaults;

@protocol NAScheduler;

@interface MTUserDefaults : NSObject

{
    id <NAScheduler> _serializer;
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_observers;
}

@property (retain, nonatomic) id <NAScheduler> serializer;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSMutableDictionary *observers;

+ (id)sharedUserDefaults;
+ (id)_distributedNotificationForLocalNotification:(id)arg1;
+ (id)_localNotificationForDistributedNotification:(id)arg1;

- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)_postNotification:(id)arg1;
- (id)initWithUserDefaults:(id)arg1;
- (id)objectForKey:(id)arg1 defaultValue:(id)arg2;
- (long long)integerForKey:(id)arg1 isValid:(CDUnknownBlockType)arg2 defaultValue:(long long)arg3;
- (long long)integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (double)timeIntervalForKey:(id)arg1 isValid:(CDUnknownBlockType)arg2 defaultValue:(double)arg3;
- (void)setFloat:(float)arg1 forKey:(id)arg2 notification:(id)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 notification:(id)arg3;
- (float)floatForKey:(id)arg1 exists:(_Bool *)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2 notification:(id)arg3;
- (_Bool)boolForKey:(id)arg1 exists:(_Bool *)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2 notification:(id)arg3;
- (long long)integerForKey:(id)arg1 exists:(_Bool *)arg2;
- (void)setTimeInterval:(double)arg1 forKey:(id)arg2 notification:(id)arg3;
- (double)timeIntervalForKey:(id)arg1 exists:(_Bool *)arg2;
- (void)distributedNotificationPosted:(id)arg1;
- (void)_cleanupObserversForNotification:(id)arg1;
- (void)setTimeInterval:(double)arg1 forKey:(id)arg2;
- (double)timeIntervalForKey:(id)arg1 defaultValue:(double)arg2;
- (void)registerNotification:(id)arg1 observer:(id)arg2;
- (void)unregisterNotification:(id)arg1 observer:(id)arg2;

@end
