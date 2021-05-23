/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSIndexSet.h>

@interface NSIndexSet (FCAdditions)

- (id)fc_indexSetWithGapsInRange:(struct _NSRange)arg1;
- (unsigned long long)fc_countOfContiguousIndexesGreaterThanOrEqualToIndex:(unsigned long long)arg1;
- (unsigned long long)fc_countOfContiguousIndexesLessThanIndex:(unsigned long long)arg1;
- (struct _NSRange)fc_enclosingRange;
- (_Bool)fc_isContiguous;
- (void)fc_enumerateGapsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
