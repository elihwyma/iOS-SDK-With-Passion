/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Foundation/NSArray.h>

@interface NSArray (IC)

@property (nonatomic, readonly) id ic_randomObject;

+ (id)ic_arrayFromNonNilObject:(id)arg1;

- (id)ic_objectPassingTest:(CDUnknownBlockType)arg1;
- (id)ic_arrayByAddingObjectsFromNonNilArray:(id)arg1;
- (id)ic_objectsPassingTest:(CDUnknownBlockType)arg1;
- (id)ic_objectBefore:(id)arg1 wrap:(_Bool)arg2;
- (id)ic_objectAfter:(id)arg1 wrap:(_Bool)arg2;
- (_Bool)ic_containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)ic_objectsOfClass:(Class)arg1;
- (id)ic_arrayByGroupingIntoArraysWithMaxCount:(unsigned long long)arg1;
- (unsigned long long)ic_indexOfSortedObject:(id)arg1 insertionIndex:(out unsigned long long *)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (_Bool)ic_indexIsValid:(long long)arg1;
- (id)ic_objectBefore:(id)arg1;
- (id)ic_objectAfter:(id)arg1;
- (id)ic_arrayByAddingNonNilObject:(id)arg1;
- (id)ic_compactMap:(CDUnknownBlockType)arg1;
- (id)ic_map:(CDUnknownBlockType)arg1;

@end
