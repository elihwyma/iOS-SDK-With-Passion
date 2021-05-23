/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, PUPhotoSelectionManager, PXUIAutoScroller;

@protocol PUSwipeSelectionManagerDataSource, PUSwipeSelectionManagerDelegate;

__attribute__((visibility("hidden")))
@interface PUSwipeSelectionManager : NSObject

{
    struct NSMutableDictionary *_oldIndexesPaths;
    id <PUSwipeSelectionManagerDelegate> _delegate;
    id <PUSwipeSelectionManagerDataSource> _datasource;
    PXUIAutoScroller *_selectionAutoScroller;
    long long __selectionMode;
    NSIndexPath *__startingIndexPath;
    PUPhotoSelectionManager *__restorePhotoSelectionManager;
    id __pausingChangesToken;
    struct CGPoint _screenTouchLocation;
}

@property (nonatomic, setter=_setSelectionMode:) long long _selectionMode;
@property (copy, nonatomic, setter=_setStartingIndexPath:) NSIndexPath *_startingIndexPath;
@property (retain, nonatomic, setter=_setRestorePhotoSelectionManager:) PUPhotoSelectionManager *_restorePhotoSelectionManager;
@property (retain, nonatomic, setter=_setPausingChangesToken:) id _pausingChangesToken;
@property (weak, nonatomic) id <PUSwipeSelectionManagerDelegate> delegate;
@property (weak, nonatomic) id <PUSwipeSelectionManagerDataSource> datasource;
@property (retain, nonatomic) PXUIAutoScroller *selectionAutoScroller;
@property (nonatomic) struct CGPoint screenTouchLocation;

- (id)init;
- (void)dealloc;
- (void)endSelection;
- (id)initWithSelectionMode:(long long)arg1 photoSelectionManager:(id)arg2;
- (struct NSMutableDictionary *)_indexesPathsRangeForIndexPath:(id)arg1;
- (long long)_selectionModeForRestoringStateOfIndexPath:(id)arg1;
- (void)beginSelectionFromIndexPath:(id)arg1;
- (void)updateSelectionWithCurrentIndexPath:(id)arg1 leftClosestIndexPath:(id)arg2 aboveClosestIndexPath:(id)arg3;

@end
