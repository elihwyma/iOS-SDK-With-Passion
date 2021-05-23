/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSOrderedSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIIdentifierDiffer : NSObject

{
    NSOrderedSet *_beforeIdentifiers;
    NSOrderedSet *_afterIdentifiers;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_deletedIndexes;
    NSSet *_movePairs;
    _Bool _identifiersAreUnique;
}

@property (nonatomic, readonly) NSOrderedSet *beforeIdentifiers;
@property (nonatomic, readonly) NSOrderedSet *afterIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSIndexSet *insertedIndexes;
@property (nonatomic, readonly) NSIndexSet *deletedIndexes;
@property (nonatomic, readonly) NSSet *movePairs;
@property (nonatomic, readonly) _Bool hasChanges;

- (id)initWithBeforeIdentifiers:(id)arg1 afterIdentifiers:(id)arg2;
- (void)performDiff;
- (void)_performDiffWithOptions:(long long)arg1;
- (void)_performHeckelDiffWithOptions:(long long)arg1;
- (void)_performFoundationDiffWithOptions:(long long)arg1;
- (void)performDiffWithOptions:(long long)arg1;

@end
