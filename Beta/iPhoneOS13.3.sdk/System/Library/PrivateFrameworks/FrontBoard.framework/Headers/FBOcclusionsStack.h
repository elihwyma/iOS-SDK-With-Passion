/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface FBOcclusionsStack : NSObject

{
    NSCountedSet *_levels;
    NSMutableDictionary *_levelToCompositeOcclusions;
    NSMutableDictionary *_keyToEntry;
    NSMutableArray *_orderedEntries;
    NSMutableSet *_dirtyKeys;
}

- (id)init;
- (id)description;
- (_Bool)isEmpty;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)isDirty;
- (void)removeKey:(id)arg1;
- (void)_adjustEntry:(id)arg1 forLevel:(double)arg2 occlusions:(id)arg3;
- (void)setKey:(id)arg1 toLevel:(double)arg2 withOcclusions:(id)arg3;
- (void)enumerateKeysByLevelWithBlock:(CDUnknownBlockType)arg1;
- (id)dirtyKeys;
- (id)occlusionsAppliedToKey:(id)arg1;

@end
