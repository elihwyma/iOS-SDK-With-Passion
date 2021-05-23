/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSOrderedSet.h>

@interface NSOrderedSet (EmailFoundationAdditions)

@property (nonatomic, readonly) NSOrderedSet *ef_flatten;

- (id)ef_filter:(CDUnknownBlockType)arg1;
- (id)ef_compactMap:(CDUnknownBlockType)arg1;
- (id)ef_flatMap:(CDUnknownBlockType)arg1;
- (id)ef_partition:(CDUnknownBlockType)arg1;
- (_Bool)ef_any:(CDUnknownBlockType)arg1;
- (_Bool)ef_all:(CDUnknownBlockType)arg1;
- (unsigned long long)ef_countObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)ef_anyPassingTest:(CDUnknownBlockType)arg1;
- (id)ef_subarrayWithRange:(struct _NSRange)arg1;
- (id)ef_objectBeforeObject:(id)arg1;
- (id)ef_objectAfterObject:(id)arg1;

@end
