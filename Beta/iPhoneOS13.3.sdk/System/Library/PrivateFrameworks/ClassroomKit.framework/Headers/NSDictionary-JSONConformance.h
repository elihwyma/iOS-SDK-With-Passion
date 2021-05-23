/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSDictionary.h>

#import <ClassroomKit/Swift-Protocol.h>

@interface NSDictionary (JSONConformance) <Swift>

@property (nonatomic, readonly) id crk_keyValueObservingOldObject;
@property (nonatomic, readonly) id crk_keyValueObservingNewObject;

- (id)crk_JSONRepresentationWithPrettyPrinting:(_Bool)arg1 sortKeys:(_Bool)arg2;
- (id)crk_mapUsingBlock:(CDUnknownBlockType)arg1;
- (id)crk_dictionaryByAddingEntriesFromDictionary:(id)arg1;

@end
