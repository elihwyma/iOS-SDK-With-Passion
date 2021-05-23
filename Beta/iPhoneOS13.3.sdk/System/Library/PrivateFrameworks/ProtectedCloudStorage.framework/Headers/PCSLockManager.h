/*
 Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface PCSLockManager : NSObject

{
    NSHashTable *_observers;
    NSHashTable *_holders;
    NSObject<OS_os_log> *_log;
}

@property (retain) NSHashTable *observers;
@property (retain) NSHashTable *holders;
@property (retain) NSObject<OS_os_log> *log;

+ (id)manager;
+ (void)dropAssertion;
+ (_Bool)holdAssertion;

- (void)removeAssertion:(id)arg1;
- (_Bool)holdAssertion:(id)arg1;
- (void)dropAssertion:(id)arg1;
- (id)initManager;
- (void)_onlockDropAssertion:(id)arg1;
- (id)lockAssertion:(id)arg1;

@end
