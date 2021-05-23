/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSSet.h>

@interface NSSet (FMAdditions)

+ (id)fm_setWithSafeObject:(id)arg1;

- (void)fm_each:(CDUnknownBlockType)arg1;
- (id)fm_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)fm_map:(CDUnknownBlockType)arg1;
- (id)fm_filter:(CDUnknownBlockType)arg1;
- (_Bool)fm_any:(CDUnknownBlockType)arg1;
- (id)fm_setByFlattening;
- (id)fm_setByIntersectingWithSet:(id)arg1;
- (id)fm_setByRemovingObjectsFromSet:(id)arg1;

@end
