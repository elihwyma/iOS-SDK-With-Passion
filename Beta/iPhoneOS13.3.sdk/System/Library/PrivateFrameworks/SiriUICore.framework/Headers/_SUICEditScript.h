/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, _SUICIntArray2D;

@protocol _SUICEditScriptData;

@interface _SUICEditScript : NSObject

{
    _Bool _orderAtomsAscending;
    _SUICIntArray2D *_distanceMatrix;
    long long _currentOperation;
    id <_SUICEditScriptData> _itemAData;
    id <_SUICEditScriptData> _itemBData;
    NSArray *_operationPrecedenceArray;
    NSMutableArray *_script;
}

@property (copy, nonatomic) NSArray *operationPrecedenceArray;
@property (retain, nonatomic) NSMutableArray *script;

- (id)description;
- (id)operationPrecedenceArrayFromOperationPrecedence:(long long)arg1;
- (void)initializeCurrentScriptAtom;
- (void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;
- (void)finalizeCurrentScriptAtom;
- (id)initWithOperationPrecedence:(long long)arg1 orderAtomsAscending:(_Bool)arg2;
- (void)computeDistanceMatrix;
- (void)computeEditsFromMatrix;

@end
