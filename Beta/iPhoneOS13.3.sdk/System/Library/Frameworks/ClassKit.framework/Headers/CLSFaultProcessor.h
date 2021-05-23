/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableArray, NSMutableSet, NSString;

@protocol CLSFaultProcessorDelegate, OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CLSFaultProcessor : NSObject

{
    NSMutableArray *_results;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NSMapTable *_objects;
    NSMapTable *_relations;
    NSMapTable *_objectsIdsByParentID;
    NSMutableSet *_rootObjectIDs;
    id <CLSFaultProcessorDelegate> _delegate;
}

@property (weak, nonatomic, readonly) id <CLSFaultProcessorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)enumerate:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)_addObject:(id)arg1;
- (oneway void)clientRemote_invalidate;
- (oneway void)clientRemote_deliverObject:(id)arg1;
- (void)faultObjects:(id)arg1;
- (void)completionNotify:(CDUnknownBlockType)arg1;
- (oneway void)clientRemote_itemChanged:(unsigned long long)arg1;
- (oneway void)clientRemote_finishWithState:(unsigned long long)arg1 error:(id)arg2;
- (void)faultObject:(id)arg1;
- (_Bool)waitUntilDone:(double)arg1;
- (void)_faultObject:(id)arg1;
- (void)_inGroup:(CDUnknownBlockType)arg1;
- (void)_descendIntoObject:(id)arg1 idsToProcess:(id)arg2 enumerationBlock:(CDUnknownBlockType)arg3;
- (void)_faultRelation:(id)arg1 fromObject:(id)arg2;
- (id)_childParentRelationForObject:(id)arg1;
- (_Bool)_isRootObject:(id)arg1 withRelation:(id)arg2;
- (_Bool)_isRootObject:(id)arg1;

@end
