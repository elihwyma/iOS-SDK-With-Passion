/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIOrderedRangeIndexer : NSObject

{
    struct shared_ptr<_UIOrderedRangeIndexerImpl> _orderedRangeIndexerImpl;
}

@property (nonatomic, readonly) long long numberOfRanges;
@property (nonatomic, readonly) NSArray *orderedRanges;
@property (nonatomic, readonly) struct _NSRange containingRange;

- (id)init;
- (id)description;
- (struct _NSRange)rangeAtIndex:(long long)arg1;
- (id).cxx_construct;
- (long long)indexOfRangeContainingLocation:(long long)arg1;
- (void)appendRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeContainingLocation:(long long)arg1;

@end
