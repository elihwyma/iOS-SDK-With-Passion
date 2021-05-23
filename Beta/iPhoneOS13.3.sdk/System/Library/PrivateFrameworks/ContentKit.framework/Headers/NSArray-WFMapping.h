/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (WFMapping)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)objectMatchingKey:(id)arg1 value:(id)arg2;
- (void)transformObjectsUsingAsynchronousBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)mapAndFilterObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)filteredObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)mapObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsSequentiallyUsingAsynchronousBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)filteredArrayForKey:(id)arg1 value:(id)arg2;
- (id)objectMatchingKey:(id)arg1 intValue:(int)arg2;
- (id)objectsMatchingClass:(Class)arg1;
- (id)filteredArrayForKey:(id)arg1 boolValue:(_Bool)arg2;
- (id)objectsNotMatchingClass:(Class)arg1;
- (void)transformObjectsUsingAsynchronousBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (id)objectMatchingKey:(id)arg1 boolValue:(_Bool)arg2;
- (id)filteredArrayForKey:(id)arg1 intValue:(int)arg2;
- (id)wf_firstObjectMatchingPredicate:(id)arg1;
- (void)enumerateObjectsUsingAsynchronousBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)safeObjectAtIndex:(unsigned long long)arg1;
- (void)sortedArrayUsingContentSortDescriptors:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sortedArrayUsingContentSortDescriptors:(id)arg1 propertySubstitutor:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
