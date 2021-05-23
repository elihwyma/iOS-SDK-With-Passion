/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSString, REMUserDefaults;

@interface REMUserDefaultsObserver : NSObject

{
    _Bool _removed;
    REMUserDefaults *_userDefaults;
    NSString *_userDefaultsKey;
    CDUnknownBlockType _block;
}

@property (retain, nonatomic) REMUserDefaults *userDefaults;
@property (copy, nonatomic) NSString *userDefaultsKey;
@property (copy, nonatomic) CDUnknownBlockType block;
@property (nonatomic) _Bool removed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stopObserving;
- (id)initWithUserDefaults:(id)arg1 key:(id)arg2 block:(CDUnknownBlockType)arg3;

@end
