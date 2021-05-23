/*
 Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
 */

#import <Foundation/NSArray.h>

@interface NSArray (IntentsFoundation)

+ (id)if_arrayWithObjectIfNonNil:(id)arg1;
+ (id)_inf_arrayWithObjectIfNonNil:(id)arg1;

- (id)if_escapedComponentsJoinedByString:(id)arg1 forLocale:(id)arg2;
- (id)if_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)if_arrayByRemovingObject:(id)arg1;
- (id)if_flatMap:(CDUnknownBlockType)arg1;
- (id)if_map:(CDUnknownBlockType)arg1;
- (id)if_objectsPassingTest:(CDUnknownBlockType)arg1;
- (id)if_compactMap:(CDUnknownBlockType)arg1;
- (void)if_enumerateAsynchronouslyInSequence:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)if_flatMapAsynchronously:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)if_objectsOfClass:(Class)arg1;
- (id)if_firstObjectWithValue:(id)arg1 forKey:(id)arg2;
- (id)if_firstObjectWithBoolValue:(_Bool)arg1 forKey:(id)arg2;
- (id)if_firstObjectWithIntValue:(int)arg1 forKey:(id)arg2;
- (id)if_objectsNotOfClass:(Class)arg1;
- (void)if_enumerateAsynchronously:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_if_firstObjectMatchingPredicate:(id)arg1;
- (void)if_mapAsynchronously:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)if_mapAsynchronouslyOnQueue:(id)arg1 transform:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_inf_flatMap:(CDUnknownBlockType)arg1;
- (void)if_flatMapAsynchronouslyOnQueue:(id)arg1 transform:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)if_arrayByRemovingObjectsInArray:(id)arg1;
- (id)_inf_objectsPassingTest:(CDUnknownBlockType)arg1;
- (id)if_objectsWithValue:(id)arg1 forKey:(id)arg2;
- (id)if_objectsWithBoolValue:(_Bool)arg1 forKey:(id)arg2;
- (id)if_objectsWithIntValue:(int)arg1 forKey:(id)arg2;

@end
