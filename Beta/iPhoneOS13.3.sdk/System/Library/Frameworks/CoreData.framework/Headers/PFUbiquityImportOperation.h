/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSOperation.h>

@class NSLock, NSObject, NSPersistentStore, NSString, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityImportOperation : NSOperation

{
    NSString *_localPeerID;
    NSString *_storeName;
    NSPersistentStore *_store;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSLock *_delegateLock;
    _Bool _lockedDelegateLock;
    NSObject *_delegate;
}

@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readonly) NSString *storeName;
@property (nonatomic, readonly) PFUbiquityLocation *ubiquityRootLocation;
@property (nonatomic, readonly) NSPersistentStore *store;
@property NSObject *delegate;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)cancel;
- (id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (id)retainedDelegate;
- (void)storeWillBeRemoved:(id)arg1;
- (void)lockDelegateLock;
- (void)unlockDelegateLock;
- (id)initWithStoreName:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;

@end
