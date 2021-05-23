/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet, NSMutableArray, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _UIUpdateVisibleCellsContext : NSObject

{
    NSMutableArray *_sizes;
    NSMutableArray *_attributes;
    NSMutableArray *_indexPaths;
    NSMutableIndexSet *_sectionIndexes;
    long long _visibleCellsRefCount;
}

@property (nonatomic, readonly) NSArray *sizes;
@property (nonatomic, readonly) NSArray *indexPaths;
@property (nonatomic, readonly) NSIndexSet *sectionIndexes;
@property (nonatomic, readonly) _Bool hasLeftVisibleCellsPass;
@property (nonatomic, readonly) NSArray *attributes;

- (id)init;
- (id)description;
- (void)addPreferredAttributes:(id)arg1;
- (void)didEnterVisibleCellsPass;
- (void)didLeaveVisibleCellsPass;
- (_Bool)shouldInvalidate;

@end
