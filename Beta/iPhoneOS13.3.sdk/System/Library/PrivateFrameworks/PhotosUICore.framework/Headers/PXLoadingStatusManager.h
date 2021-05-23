/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSMutableSet;

@protocol PXLoadingStatusManagerDelegate;

@interface PXLoadingStatusManager : NSObject

{
    struct {
        _Bool respondsToDidUpdateLoadingStatusForItem;
    } _delegateFlags;
    _Bool __isUpdateScheduled;
    id <PXLoadingStatusManagerDelegate> _delegate;
    NSMutableSet *__invalidLoadingStatusItems;
    NSMapTable *__loadOperationTrackingIDsByItem;
    NSMapTable *__loadingStatusByItem;
    NSMutableDictionary *__itemByLoadOperationTrackingID;
    NSMutableDictionary *__loadingStatusByLoadOperationTrackingID;
}

@property (nonatomic, setter=_setUpdateScheduled:) _Bool _isUpdateScheduled;
@property (nonatomic, readonly) NSMutableSet *_invalidLoadingStatusItems;
@property (nonatomic, readonly) NSMapTable *_loadOperationTrackingIDsByItem;
@property (nonatomic, readonly) NSMapTable *_loadingStatusByItem;
@property (nonatomic, readonly) NSMutableDictionary *_itemByLoadOperationTrackingID;
@property (nonatomic, readonly) NSMutableDictionary *_loadingStatusByLoadOperationTrackingID;
@property (weak, nonatomic) id <PXLoadingStatusManagerDelegate> delegate;

- (id)init;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (id)loadingStatusForItem:(id)arg1;
- (struct NSString *)willBeginLoadOperationWithItem:(id)arg1;
- (void)didUpdateLoadOperationWithTrackingID:(struct NSString *)arg1 withProgress:(double)arg2;
- (void)didCompleteLoadOperationWithTrackingID:(struct NSString *)arg1 withSuccess:(_Bool)arg2 error:(id)arg3;
- (void)didCancelLoadOperationWithTrackingID:(struct NSString *)arg1;
- (void)_setLoadingStatus:(id)arg1 forLoadOperationTrackingID:(struct NSString *)arg2;
- (void)_setLoadingStatus:(id)arg1 forItem:(id)arg2;
- (void)_resetLoadingStatusForItemIfAppropriate:(id)arg1;
- (void)_updateNowIfNeeded;
- (void)_invalidateLoadingStatusForItem:(id)arg1;
- (void)_updateLoadingStatusForItemsIfNeeded;
- (void)_updateLoadingStatusForItemIfNeeded:(id)arg1;
- (void)_updateLoadingStatusForItem:(id)arg1;

@end
