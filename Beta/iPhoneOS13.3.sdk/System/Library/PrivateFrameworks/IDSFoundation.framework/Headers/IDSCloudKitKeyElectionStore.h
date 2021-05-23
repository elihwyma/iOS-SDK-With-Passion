/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSCKDatabase;

@protocol OS_dispatch_queue;

@interface IDSCloudKitKeyElectionStore : NSObject

{
    IDSCKDatabase *_database;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) IDSCKDatabase *database;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (_Bool)isItemNotFoundError:(id)arg1;

- (id)_recordID;
- (id)initWithDatabase:(id)arg1 queue:(id)arg2;
- (id)_itemFromRecord:(id)arg1 error:(id *)arg2;
- (id)_recordFromItem:(id)arg1;
- (void)fetchAccountIdentityItemWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeAccountIdentityItemWithCompletion:(CDUnknownBlockType)arg1;
- (void)storeAccountIdentityItem:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
