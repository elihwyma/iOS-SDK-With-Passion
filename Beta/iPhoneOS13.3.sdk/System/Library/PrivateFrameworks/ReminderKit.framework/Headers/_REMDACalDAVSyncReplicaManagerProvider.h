/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSString, REMStore;

@interface _REMDACalDAVSyncReplicaManagerProvider : NSObject

{
    REMStore *_store;
}

@property (retain, nonatomic) REMStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)unsavedReplicaManagersForAccountIDs:(id)arg1;
+ (id)replicaManagerForAccountID:(id)arg1 withStore:(id)arg2;

- (id)initWithStore:(id)arg1;
- (id)unsavedReplicaManagersForAccountIDs:(id)arg1;
- (id)replicaManagerForAccountID:(id)arg1;

@end
