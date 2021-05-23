/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

#import <EmailDaemon/Swift-Protocol.h>

@class NSMutableDictionary, NSMutableSet;

@interface _EDThreadPositionChangeSet : NSObject <Swift>

{
    NSMutableDictionary *_objectIDsToAddByBeforeObjectID;
    NSMutableDictionary *_objectIDsToMoveByBeforeObjectID;
    NSMutableSet *_objectIDsToDelete;
}

@property (retain, nonatomic) NSMutableDictionary *objectIDsToAddByBeforeObjectID;
@property (retain, nonatomic) NSMutableDictionary *objectIDsToMoveByBeforeObjectID;
@property (retain, nonatomic) NSMutableSet *objectIDsToDelete;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isAddingObjectID:(id)arg1;
- (_Bool)isDeletingObjectID:(id)arg1;
- (_Bool)addObjectIDToAdd:(id)arg1 before:(id)arg2;
- (_Bool)addObjectIDToMove:(id)arg1 before:(id)arg2;
- (void)addObjectIDToDelete:(id)arg1;
- (_Bool)_isMovingObjectID:(id)arg1;

@end
