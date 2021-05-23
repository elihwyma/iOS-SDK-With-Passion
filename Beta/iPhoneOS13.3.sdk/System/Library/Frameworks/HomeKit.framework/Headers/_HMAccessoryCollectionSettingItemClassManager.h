/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMFUnfairLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _HMAccessoryCollectionSettingItemClassManager : NSObject

{
    HMFUnfairLock *_lock;
    NSMutableDictionary *_classes;
}

+ (id)sharedManager;
+ (id)defaultItemValueClasses;

- (id)init;
- (id)itemValueClassesForKeyPath:(id)arg1;
- (void)setItemValueClasses:(id)arg1 forKeyPath:(id)arg2;

@end
