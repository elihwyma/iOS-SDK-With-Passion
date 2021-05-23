/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface RLMCollectionChange : NSObject

{
    struct CollectionChangeSet _indices;
}

@property (nonatomic, readonly) NSArray *deletions;
@property (nonatomic, readonly) NSArray *insertions;
@property (nonatomic, readonly) NSArray *modifications;

- (id)initWithChanges:(struct CollectionChangeSet)arg1;
- (id).cxx_construct;
- (id)deletionsInSection:(unsigned long long)arg1;
- (id)insertionsInSection:(unsigned long long)arg1;
- (id)modificationsInSection:(unsigned long long)arg1;

@end
