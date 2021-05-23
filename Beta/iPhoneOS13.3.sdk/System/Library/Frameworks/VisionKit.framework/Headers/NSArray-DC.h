/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSArray.h>

@interface NSArray (DC)

- (id)dc_objectPassingTest:(CDUnknownBlockType)arg1;
- (id)dc_objectsPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)dc_containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)dc_objectsOfClass:(Class)arg1;
- (id)dc_objectBefore:(id)arg1 wrap:(_Bool)arg2;
- (id)dc_objectAfter:(id)arg1 wrap:(_Bool)arg2;
- (id)dc_arrayByGroupingIntoArraysWithMaxCount:(unsigned long long)arg1;
- (unsigned long long)dc_indexOfSortedObject:(id)arg1 insertionIndex:(out unsigned long long *)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (_Bool)dc_indexIsValid:(long long)arg1;
- (id)dc_objectBefore:(id)arg1;
- (id)dc_objectAfter:(id)arg1;

@end
