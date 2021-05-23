/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PUPhotoSelectionManager;

@protocol OS_dispatch_queue, PUPhotosGridBarsHelperDelegate;

@interface PUPhotosGridBarsHelper : NSObject

{
    _Bool _isPerformingUpdates;
    struct {
        _Bool photoSelectionManager;
        _Bool shouldUpdateBarItemsLazily;
        _Bool barItems;
    } _needsUpdateFlags;
    _Bool _swipeSelecting;
    _Bool _shouldHideBackButton;
    _Bool __shouldUpdateBarItemsLazily;
    _Bool __updatingItemsWithCount;
    _Bool __shouldUpdateItemsWithCount;
    _Bool __hadSelectionOnLastUpdate;
    id <PUPhotosGridBarsHelperDelegate> _delegate;
    NSString *_title;
    NSString *_prompt;
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    PUPhotoSelectionManager *__photoSelectionManager;
    NSObject<OS_dispatch_queue> *__queue;
}

@property (retain, nonatomic, setter=_setTitle:) NSString *title;
@property (retain, nonatomic, setter=_setPrompt:) NSString *prompt;
@property (nonatomic, setter=_setShouldHideBackButton:) _Bool shouldHideBackButton;
@property (retain, nonatomic, setter=_setLeftBarButtonItems:) NSArray *leftBarButtonItems;
@property (retain, nonatomic, setter=_setRightBarButtonItems:) NSArray *rightBarButtonItems;
@property (retain, nonatomic, setter=_setPhotoSelectionManager:) PUPhotoSelectionManager *_photoSelectionManager;
@property (nonatomic, setter=_setShouldUpdateBarItemsLazily:) _Bool _shouldUpdateBarItemsLazily;
@property (nonatomic, getter=_isUpdatingItemsWithCount, setter=_setUpdatingItemsWithCount:) _Bool _updatingItemsWithCount;
@property (nonatomic, setter=_setShouldUpdateItemsWithCount:) _Bool _shouldUpdateItemsWithCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_queue;
@property (nonatomic, setter=_setHadSelectionOnLastUpdate:) _Bool _hadSelectionOnLastUpdate;
@property (weak, nonatomic) id <PUPhotosGridBarsHelperDelegate> delegate;
@property (nonatomic, getter=isSwipeSelecting) _Bool swipeSelecting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)photoSelectionManagerSelectionDidChange:(id)arg1;
- (void)invalidateNavigationBarItems;
- (void)_notifyBarItemsDidChange;
- (void)_invalidatePhotoSelectionManager;
- (void)_updatePhotoSelectionManagerIfNeeded;
- (void)_invalidateShouldUpdateBarItemsLazily;
- (void)_updateShouldUpdateBarItemsLazilyIfNeeded;
- (void)_invalidateBarItems;
- (void)_updateBarItemsIfNeeded;
- (void)_updateAllBarItems;
- (void)_startUpdatingItemsWithCountIfNeeded;
- (void)_stopUpdatingItemsWithCount;
- (void)_updateItemsWithCountInBackgroundWithDelegate:(id)arg1 photoSelectionManagerSnapshot:(id)arg2;
- (void)_handleItemsWithCountUpdateWithTitle:(id)arg1 shouldReloadAllItems:(_Bool)arg2;

@end
