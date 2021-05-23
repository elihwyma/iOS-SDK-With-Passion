/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSCKDatabase;

@protocol OS_dispatch_queue;

@interface IDSCloudKitGroupServer : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    IDSCKDatabase *_database;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IDSCKDatabase *database;

- (id)initWithDatabase:(id)arg1 queue:(id)arg2;
- (void)q_groupFromRecord:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveGroup:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchGroupWithID:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchGroupsWithStableGroupID:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
