/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSIndexSet, NSSet;

@interface CKTransactionalComponentDataSourceAppliedChanges : NSObject

{
    NSSet *_updatedIndexPaths;
    NSSet *_removedIndexPaths;
    NSIndexSet *_removedSections;
    NSDictionary *_movedIndexPaths;
    NSIndexSet *_insertedSections;
    NSSet *_insertedIndexPaths;
    NSDictionary *_userInfo;
}

@property (copy, nonatomic, readonly) NSSet *updatedIndexPaths;
@property (copy, nonatomic, readonly) NSSet *removedIndexPaths;
@property (copy, nonatomic, readonly) NSIndexSet *removedSections;
@property (copy, nonatomic, readonly) NSDictionary *movedIndexPaths;
@property (copy, nonatomic, readonly) NSIndexSet *insertedSections;
@property (copy, nonatomic, readonly) NSSet *insertedIndexPaths;
@property (copy, nonatomic, readonly) NSDictionary *userInfo;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)newIndexPathForPreviousIndexPath:(id)arg1;
- (id)initWithUpdatedIndexPaths:(id)arg1 removedIndexPaths:(id)arg2 removedSections:(id)arg3 movedIndexPaths:(id)arg4 insertedSections:(id)arg5 insertedIndexPaths:(id)arg6 userInfo:(id)arg7;

@end
