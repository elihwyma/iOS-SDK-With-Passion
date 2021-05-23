/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSSet.h>

@interface NSSet (TSUAdditions)

+ (_Bool)tsu_set:(id)arg1 isEqualToSet:(id)arg2;
+ (id)tsu_setWithSelectors:(SEL)arg1;
+ (id)tsu_intersectionOfSets:(id)arg1;

- (_Bool)tsu_containsObjectIdenticalTo:(id)arg1;
- (id)tsu_sortedArray;
- (id)tsu_setByMappingObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)tsu_isHomogeneousForClass:(Class)arg1;
- (id)tsu_onlyObject;
- (id)tsu_setByIntersectingSet:(id)arg1;
- (id)tsu_setBySubtractingSet:(id)arg1;

@end
