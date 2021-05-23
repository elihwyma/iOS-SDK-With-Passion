/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface NURenderTagGroup : NSObject

{
    NSMutableDictionary *_tags;
    NSMutableDictionary *_children;
    NURenderTagGroup *_parent;
}

@property (weak) NURenderTagGroup *parent;

+ (_Bool)validatePath:(id)arg1 error:(out id *)arg2;

- (id)init;
- (id)description;
- (id)path;
- (id)_root;
- (id)children;
- (id)childWithName:(id)arg1;
- (void)removeChildWithName:(id)arg1;
- (void)addChild:(id)arg1 withName:(id)arg2;
- (id)leafName;
- (void)_composePathComponents:(id)arg1;
- (id)addTag:(id)arg1 forNode:(id)arg2;
- (id)_nodeWithPathComponents:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)nodeWithPath:(id)arg1;
- (id)_descriptionWithLevel:(long long)arg1;
- (void)visitEveryTagWithBlock:(CDUnknownBlockType)arg1;
- (id)finalizeMap:(id)arg1;

@end
