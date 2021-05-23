/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, _UIDataSourceSnapshotter;

@protocol _UICollectionViewUpdateTranslating;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutSolverUpdate : NSObject

{
    NSArray *_updateItems;
    id <_UICollectionViewUpdateTranslating> _updateTranslator;
    _UIDataSourceSnapshotter *_finalDataSourceSnapshot;
}

@property (nonatomic, readonly) NSArray *updateItems;
@property (nonatomic, readonly) id <_UICollectionViewUpdateTranslating> updateTranslator;
@property (nonatomic, readonly) _UIDataSourceSnapshotter *finalDataSourceSnapshot;

+ (id)solverUpdateWithUpdateItems:(id)arg1 updateTranslator:(id)arg2 finalDataSourceSnapshot:(id)arg3;

- (id)initWithUpdateItems:(id)arg1 updateTranslator:(id)arg2 finalDataSourceSnapshot:(id)arg3;

@end
