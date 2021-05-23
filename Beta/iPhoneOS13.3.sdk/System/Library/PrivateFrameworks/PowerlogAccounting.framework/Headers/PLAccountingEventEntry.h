/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <PowerlogCore/PLEntry.h>

@class PLAccountingRange;

@interface PLAccountingEventEntry : PLEntry

{
    _Bool _used;
    PLAccountingRange *_range;
}

@property (nonatomic, readonly) int instanceDirectionality;
@property (retain, nonatomic) PLAccountingRange *range;
@property (nonatomic) _Bool used;

+ (int)classDirectionality;

- (id)initWithRange:(id)arg1;
- (_Bool)isEqualContentsWithEvent:(id)arg1;
- (_Bool)isEmptyEvent;
- (id)rangeSinceEvent:(id)arg1;
- (void)mergeWithEvent:(id)arg1;
- (_Bool)canMergeWithEvent:(id)arg1;

@end
