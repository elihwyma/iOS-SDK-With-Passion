/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSSet;

@protocol UIDiffableDataSourceInfo, _UIIdentifierDiffer;

__attribute__((visibility("hidden")))
@interface _UIDiffableSectionBoundaryMoveDetector : NSObject

{
    id <_UIIdentifierDiffer> _differ;
    id <UIDiffableDataSourceInfo> _beforeInfo;
    id <UIDiffableDataSourceInfo> _afterInfo;
    NSSet *_movePairs;
    _Bool _didShortCircuit;
}

@property (nonatomic, readonly) NSSet *movePairs;
@property (nonatomic, readonly) _Bool didShortCircuit;

- (id)initWithItemDiffer:(id)arg1 beforeDataSourceInfo:(id)arg2 afterDataSourceInfo:(id)arg3;
- (id)_computeMovePairsFoundation;
- (id)_computeMovePairsSTL;

@end
