/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSIndexSet.h>

@class NSString;

@interface NSIndexSet (PhotosUICore)

@property (nonatomic, readonly) NSString *px_shortDescription;
@property (nonatomic, readonly) struct _NSRange px_coveringRange;

- (id)px_intersectionWithIndexSet:(id)arg1;
- (id)px_indexSetAdjustedForDeletions:(id)arg1;
- (id)px_indexSetAdjustedForInsertions:(id)arg1;
- (id)px_indexesInRange:(struct _NSRange)arg1;

@end
