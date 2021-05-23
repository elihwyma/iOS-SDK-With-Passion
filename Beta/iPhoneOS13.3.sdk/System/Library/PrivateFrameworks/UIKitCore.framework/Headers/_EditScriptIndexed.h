/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_EditScript.h>

@class _EditScriptIndexedAtom;

__attribute__((visibility("hidden")))
@interface _EditScriptIndexed : _EditScript

{
    _EditScriptIndexedAtom *_currentScriptAtom;
}

+ (id)editScriptFromArray:(id)arg1 toArray:(id)arg2 orderAtomsAscending:(_Bool)arg3 operationPrecedence:(long long)arg4;
+ (id)editScriptFromArray:(id)arg1 toArray:(id)arg2;

- (void)dealloc;
- (void)initializeCurrentScriptAtom;
- (void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;
- (void)finalizeCurrentScriptAtom;
- (id)initWithOperationPrecedence:(long long)arg1 dataClass:(Class)arg2 fromArray:(id)arg3 toArray:(id)arg4 orderAtomsAscending:(_Bool)arg5;
- (id)applyToArray:(id)arg1;

@end
