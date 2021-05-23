/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

@interface TSWPLineHintCollection : TSPObject

{
    CDStruct_cd85e889 *mHints;
    unsigned long long mHintsCount;
    _Bool mValid;
    _Bool mHasColumnIndices;
    TSWPLineHintCollection *mContainingCollection;
}

@property (nonatomic, readonly) const CDStruct_cd85e889 *hints;
@property (nonatomic, readonly) unsigned long long hintsCount;
@property (nonatomic, readonly) _Bool valid;
@property (nonatomic, readonly) _Bool hasColumnIndices;

- (void)dealloc;
- (id)descriptionWithStorage:(id)arg1;
- (struct _NSRange)hintRangeForColumnIndex:(unsigned long long)arg1 frameBounds:(struct CGRect)arg2 charIndex:(unsigned long long)arg3;
- (struct _NSRange)hintRangeForLineStartingAtHintIndex:(unsigned long long)arg1;
- (_Bool)checkSubCollectionRange:(struct _NSRange)arg1;
- (id)initWithContainingCollection:(id)arg1 range:(struct _NSRange)arg2 context:(id)arg3;
- (unsigned long long)p_columnIndexForHintIndex:(unsigned long long)arg1;
- (id)newSubCollectionWithRange:(struct _NSRange)arg1;

@end
