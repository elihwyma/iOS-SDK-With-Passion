/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol UIDiffableDataSourceInfo;

__attribute__((visibility("hidden")))
@interface _UIDiffableDataSourceDiffer : NSObject

{
    id <UIDiffableDataSourceInfo> _beforeDataSourceInfo;
    id <UIDiffableDataSourceInfo> _afterDataSourceInfo;
}

@property (retain, nonatomic) id <UIDiffableDataSourceInfo> beforeDataSourceInfo;
@property (retain, nonatomic) id <UIDiffableDataSourceInfo> afterDataSourceInfo;

+ (id)differWithBeforeDataSourceInfo:(id)arg1 afterDataSourceInfo:(id)arg2;

- (id)description;
- (id)computeUpdates;
- (id)initWithBeforeDataSource:(id)arg1 afterDataSource:(id)arg2;
- (id)_computeUpdatesForIdentifierBasedDiff;
- (id)_computeSectionBoundaryMovesForItemDiffer:(id)arg1;
- (id)_sectionUpdatesForDiffResults:(id)arg1 deletedSections:(id)arg2 insertedSections:(id)arg3;
- (id)_itemUpdatesForDiffResults:(id)arg1 sectionBoundaryMoves:(id)arg2 deletedSections:(id)arg3 insertedSections:(id)arg4;
- (_Bool)_verifyForUpdates:(id)arg1;

@end
