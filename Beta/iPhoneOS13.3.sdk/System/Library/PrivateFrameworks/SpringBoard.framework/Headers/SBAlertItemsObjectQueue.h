/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet;

@interface SBAlertItemsObjectQueue : NSObject

{
    NSMutableOrderedSet *_objects;
}

@property (retain, nonatomic) NSMutableOrderedSet *objects;

- (id)init;
- (void)removeObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (_Bool)containsObject:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)appendObject:(id)arg1;
- (id)dequeueAllObjects;
- (_Bool)hasObject;
- (void)prependObject:(id)arg1;
- (_Bool)hasObjectOfClass:(Class)arg1;
- (id)objectsOfClass:(Class)arg1;

@end
