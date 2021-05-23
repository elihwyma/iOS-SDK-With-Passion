/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (MTLManipulationAdditions)

+ (id)mtl_identityPropertyMapWithModel:(Class)arg1;

- (id)mtl_dictionaryByRemovingEntriesWithKeys:(id)arg1;
- (id)mtl_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)mtl_dictionaryByRemovingValuesForKeys:(id)arg1;
- (id)mtl_valueForJSONKeyPath:(id)arg1 success:(_Bool *)arg2 error:(id *)arg3;

@end
