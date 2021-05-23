/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _UIKBRTMutableOrderIndexSet : NSObject

{
    _Bool _reversed;
    NSMutableIndexSet *_indexSet;
}

@property (nonatomic, readonly) NSMutableIndexSet *indexSet;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long lowestIndex;
@property (readonly) unsigned long long highestIndex;
@property (readonly) unsigned long long beginningIndex;
@property (readonly) unsigned long long endingIndex;
@property (nonatomic) _Bool reversed;

- (id)init;
- (id)description;
- (void)addIndex:(unsigned long long)arg1;
- (id)initWithIndexesInRange:(struct _NSRange)arg1;
- (void)removeIndex:(unsigned long long)arg1;
- (void)removeIndexes:(id)arg1;

@end
