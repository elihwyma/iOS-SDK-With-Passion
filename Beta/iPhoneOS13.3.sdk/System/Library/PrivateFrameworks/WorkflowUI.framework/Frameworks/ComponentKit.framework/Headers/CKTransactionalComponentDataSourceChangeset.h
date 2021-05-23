/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSIndexSet, NSSet;

@interface CKTransactionalComponentDataSourceChangeset : NSObject

{
    NSDictionary *_updatedItems;
    NSSet *_removedItems;
    NSIndexSet *_removedSections;
    NSDictionary *_movedItems;
    NSIndexSet *_insertedSections;
    NSDictionary *_insertedItems;
    NSDictionary *_userInfo;
}

@property (copy, nonatomic, readonly) NSDictionary *updatedItems;
@property (copy, nonatomic, readonly) NSSet *removedItems;
@property (copy, nonatomic, readonly) NSIndexSet *removedSections;
@property (copy, nonatomic, readonly) NSDictionary *movedItems;
@property (copy, nonatomic, readonly) NSIndexSet *insertedSections;
@property (copy, nonatomic, readonly) NSDictionary *insertedItems;
@property (copy, nonatomic, readonly) NSDictionary *userInfo;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithUpdatedItems:(id)arg1 removedItems:(id)arg2 removedSections:(id)arg3 movedItems:(id)arg4 insertedSections:(id)arg5 insertedItems:(id)arg6;

@end
