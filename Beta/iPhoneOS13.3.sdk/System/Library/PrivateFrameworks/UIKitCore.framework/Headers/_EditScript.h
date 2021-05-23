/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, _IntArray2D;

@protocol _EditScriptData;

__attribute__((visibility("hidden")))
@interface _EditScript : NSObject

{
    _Bool _orderAtomsAscending;
    _IntArray2D *_distanceMatrix;
    long long _currentOperation;
    id <_EditScriptData> _itemAData;
    id <_EditScriptData> _itemBData;
    NSArray *_operationPrecedenceArray;
    NSMutableArray *_script;
}

@property (copy, nonatomic) NSArray *operationPrecedenceArray;
@property (retain, nonatomic) NSMutableArray *script;

- (void)dealloc;
- (id)description;
- (id)operationPrecedenceArrayFromOperationPrecedence:(long long)arg1;
- (void)initializeCurrentScriptAtom;
- (void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;
- (void)finalizeCurrentScriptAtom;
- (id)initWithOperationPrecedence:(long long)arg1 orderAtomsAscending:(_Bool)arg2;
- (void)computeDistanceMatrix;
- (void)computeEditsFromMatrix;

@end
