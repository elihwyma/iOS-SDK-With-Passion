/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXObservable.h>

@class NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface PUUUIDSelectionManager : PXObservable

{
    NSMutableSet *__mutableSelectedUUIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSMutableSet *_mutableSelectedUUIDs;
@property (copy, nonatomic, readonly) NSSet *selectedUUIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)mutableChangeObject;
- (_Bool)pu_isAssetReferenceSelected:(id)arg1;
- (void)pu_registerSelectionIndicatorObserver:(id)arg1;
- (void)pu_unregisterSelectionIndicatorObserver:(id)arg1;
- (void)addSelectedUUID:(id)arg1;
- (void)removeSelectedUUID:(id)arg1;
- (void)setSelectedUUIDs:(id)arg1;
- (void)deselectAllUUIDs;
- (id)initWithSelectedUUIDs:(id)arg1;
- (_Bool)isSelectedUUID:(id)arg1;

@end
