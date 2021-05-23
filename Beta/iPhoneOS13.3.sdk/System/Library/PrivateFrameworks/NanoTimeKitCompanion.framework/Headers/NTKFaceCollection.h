/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSString, NSUUID, NTKFace;

@interface NTKFaceCollection : NSObject

{
    NSString *_logIdentifier;
    NSUUID *_selectedUUID;
    NSMutableArray *_orderedUUIDs;
    NSMutableDictionary *_facesByUUID;
    NSMapTable *_UUIDsByFace;
    NSHashTable *_observers;
    NSString *_collectionIdentifier;
    NSUUID *_deviceUUID;
    NSString *_debugName;
}

@property (nonatomic, readonly) NSString *collectionIdentifier;
@property (nonatomic, readonly) NSUUID *deviceUUID;
@property (nonatomic, readonly, getter=hasLoaded) _Bool hasLoaded;
@property (retain, nonatomic) NSString *debugName;
@property (nonatomic, readonly) NTKFace *selectedFace;
@property (nonatomic, readonly) unsigned long long selectedFaceIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)reset;
- (id)observers;
- (id)faceAtIndex:(unsigned long long)arg1;
- (id)logIdentifier;
- (id)orderedUUIDs;
- (unsigned long long)numberOfFaces;
- (void)enumerateFacesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2;
- (void)enumerateFaceNamesUsingBlock:(CDUnknownBlockType)arg1;
- (void)appendFace:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)setSelectedFace:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)_updateLogIdentifier;
- (void)_systemAppStateDidChange;
- (id)selectedUUID;
- (id)facesByUUID;
- (void)_throwIfNotLoaded:(SEL)arg1;
- (void)_setSelectedUUID:(id)arg1 notify:(_Bool)arg2 suppressingCallbackToObserver:(id)arg3;
- (void)_didSelectFaceUUID:(id)arg1;
- (void)addFace:(id)arg1 atIndex:(unsigned long long)arg2 suppressingCallbackToObserver:(id)arg3;
- (void)_addFace:(id)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3 suppressingCallbackToObserver:(id)arg4;
- (void)_didAddFace:(id)arg1 withUUID:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_didMoveFace:(id)arg1 withUUID:(id)arg2 toIndex:(unsigned long long)arg3;
- (void)_notifyReorderedFacesOmittingObserver:(id)arg1;
- (void)removeFace:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)_removeFaceForUUID:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)_didRemoveFace:(id)arg1 withUUID:(id)arg2;
- (id)_chooseNewSelectionBecauseSelectedUUIDWillBeRemovedAtIndex:(unsigned long long)arg1;
- (void)_notifyRemovedFace:(id)arg1 atIndex:(unsigned long long)arg2 omitObserver:(id)arg3;
- (void)_notifySelectedFaceOmittingObserver:(id)arg1;
- (void)_notifyAddedFace:(id)arg1 atIndex:(unsigned long long)arg2 omitObserver:(id)arg3;
- (unsigned long long)indexOfFace:(id)arg1;
- (_Bool)containsFace:(id)arg1;
- (void)enumerateFacesWithIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (void)setSelectedFaceIndex:(unsigned long long)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)moveFace:(id)arg1 toIndex:(unsigned long long)arg2 suppressingCallbackToObserver:(id)arg3;
- (void)removeFaceAtIndex:(unsigned long long)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)_setContentWithFaces:(id)arg1 order:(id)arg2 selection:(id)arg3;
- (void)_addFace:(id)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_removeFaceForUUID:(id)arg1;
- (void)_selectFaceUUID:(id)arg1 notify:(_Bool)arg2;
- (void)_updateOrderedUUIDsFromReference:(id)arg1 andNotifyReordered:(_Bool)arg2;
- (void)_upgradeFace:(id)arg1 forUUID:(id)arg2;
- (void)replaceFaceLocallyByCopy:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (id)UUIDsByFace;

@end
