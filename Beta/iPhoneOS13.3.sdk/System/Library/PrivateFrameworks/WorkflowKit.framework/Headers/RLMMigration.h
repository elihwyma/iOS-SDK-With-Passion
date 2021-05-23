/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class RLMRealm, RLMSchema;

@interface RLMMigration : NSObject

{
    struct Schema *_schema;
    struct unordered_map<NSString *, realm::IndexSet, std::__1::hash<NSString *>, std::__1::equal_to<NSString *>, std::__1::allocator<std::__1::pair<NSString *const, realm::IndexSet>>> _deletedObjectIndices;
    RLMRealm *_oldRealm;
    RLMRealm *_realm;
}

@property (retain, nonatomic) RLMRealm *oldRealm;
@property (retain, nonatomic) RLMRealm *realm;
@property (nonatomic, readonly) RLMSchema *oldSchema;
@property (nonatomic, readonly) RLMSchema *newSchema;

- (id).cxx_construct;
- (void)execute:(CDUnknownBlockType)arg1;
- (void)deleteObject:(id)arg1;
- (void)deleteObjectsMarkedForDeletion;
- (id)createObject:(id)arg1 withValue:(id)arg2;
- (id)initWithRealm:(id)arg1 oldRealm:(id)arg2 schema:(struct Schema *)arg3;
- (void)enumerateObjects:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)createObject:(id)arg1 withObject:(id)arg2;
- (_Bool)deleteDataForClassName:(id)arg1;
- (void)renamePropertyForClass:(id)arg1 oldName:(id)arg2 newName:(id)arg3;

@end
