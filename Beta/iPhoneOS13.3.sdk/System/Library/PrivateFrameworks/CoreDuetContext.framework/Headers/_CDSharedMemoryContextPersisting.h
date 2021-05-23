/*
 Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSString, _CDSharedMemoryKeyValueStore;

@protocol OS_dispatch_queue;

@interface _CDSharedMemoryContextPersisting : NSObject

{
    _CDSharedMemoryKeyValueStore *_store;
    NSObject<OS_dispatch_queue> *_queue;
    NSCountedSet *_keyPathRegistrationCount;
    NSString *_localDeviceID;
}

@property (retain, nonatomic) _CDSharedMemoryKeyValueStore *store;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSCountedSet *keyPathRegistrationCount;
@property (retain, nonatomic) NSString *localDeviceID;

+ (id)sharedMemoryKeyFromKeyPath:(id)arg1;
+ (id)sharedMemoryKeyFromRegistration:(id)arg1;
+ (id)persistenceWithSharedMemoryKeyValueStore:(id)arg1;

- (id)initWithSharedMemoryKeyValueStore:(id)arg1;
- (void)deleteKeyPaths:(id)arg1;
- (id)allKeysForContextStore;
- (void)saveValue:(id)arg1 forKeyPath:(id)arg2;
- (void)saveRegistration:(id)arg1;
- (void)deleteRegistration:(id)arg1;
- (id)loadValues;
- (id)loadRegistrations;
- (void)deleteAllData;
- (void)deleteDataCreatedBefore:(id)arg1;

@end
