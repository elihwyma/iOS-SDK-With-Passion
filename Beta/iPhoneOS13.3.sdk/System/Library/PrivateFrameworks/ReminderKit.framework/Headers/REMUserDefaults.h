/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSUserDefaults;

@interface REMUserDefaults : NSObject

{
    NSString *_suiteName;
    NSMutableDictionary *_observers;
    NSUserDefaults *_userDefaults;
}

@property (nonatomic, readonly) NSString *suiteName;
@property (nonatomic, readonly) NSMutableDictionary *observers;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;

+ (id)daemonUserDefaults;
+ (id)_oldDeprecatedAppGroupUserDefaults;
+ (id)appGroupUserDefaults;
+ (void)migrateUserDefaults;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_removeObserver:(id)arg1;
- (id)initWithSuiteName:(id)arg1 containerURL:(id)arg2;
- (id)_addObserverForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_startObservingValuesForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_startStreamingValuesForKey:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
