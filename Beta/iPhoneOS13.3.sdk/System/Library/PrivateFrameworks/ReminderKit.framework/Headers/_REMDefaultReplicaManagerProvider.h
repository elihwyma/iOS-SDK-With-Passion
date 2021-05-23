/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSString, REMStore;

@interface _REMDefaultReplicaManagerProvider : NSObject

{
    REMStore *_store;
}

@property (nonatomic, readonly) REMStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)initWithStore:(id)arg1;
- (id)unsavedReplicaManagersForAccountIDs:(id)arg1;
- (id)replicaManagerForAccountID:(id)arg1;

@end
