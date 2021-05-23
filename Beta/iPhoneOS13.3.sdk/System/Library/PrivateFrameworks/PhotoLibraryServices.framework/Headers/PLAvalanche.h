/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSArray, NSDate, NSIndexSet, NSMutableIndexSet, NSOrderedSet, NSString, PLManagedAsset, PLPhotoLibrary;

@interface PLAvalanche : NSObject <Swift>

{
    NSString *_uuid;
    PLPhotoLibrary *_photoLibrary;
    NSOrderedSet *_assets;
    NSIndexSet *__originalAutoPickIndexes;
    NSMutableIndexSet *__autoPickIndexes;
    NSIndexSet *__originalUserFavoriteIndexes;
    NSMutableIndexSet *__userFavoriteIndexes;
    unsigned long long __originalStackIndex;
    unsigned long long __stackIndex;
    PLManagedAsset *__aNewPick;
    PLManagedAsset *__anOldPick;
    CDUnknownBlockType __completionHandler;
}

@property (retain, nonatomic) NSOrderedSet *assets;
@property (retain, nonatomic) NSIndexSet *_originalAutoPickIndexes;
@property (retain, nonatomic) NSMutableIndexSet *_autoPickIndexes;
@property (retain, nonatomic) NSIndexSet *_originalUserFavoriteIndexes;
@property (retain, nonatomic) NSMutableIndexSet *_userFavoriteIndexes;
@property (nonatomic) unsigned long long _originalStackIndex;
@property (nonatomic) unsigned long long _stackIndex;
@property (retain, nonatomic, setter=_setANewPick:) PLManagedAsset *_aNewPick;
@property (retain, nonatomic, setter=_setAnOldPick:) PLManagedAsset *_anOldPick;
@property (copy, nonatomic, setter=_setCompletionHandler:) CDUnknownBlockType _completionHandler;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long approximateCount;
@property (nonatomic, readonly) unsigned long long assetsCount;
@property (nonatomic, readonly) unsigned long long photosCount;
@property (nonatomic, readonly) unsigned long long videosCount;
@property (nonatomic, readonly) _Bool isEmpty;
@property (retain, nonatomic) PLManagedAsset *keyAsset;
@property (retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property (retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property (nonatomic, readonly) _Bool canShowComments;
@property (nonatomic, readonly) _Bool canShowAvalancheStacks;
@property (copy, nonatomic, readonly) NSArray *localizedLocationNames;
@property (retain, nonatomic, readonly) NSDate *startDate;
@property (retain, nonatomic, readonly) NSDate *endDate;

+ (unsigned long long)_calculateStackAssetForAssetCount:(unsigned long long)arg1 autoPicks:(id)arg2 userFavorites:(id)arg3;
+ (void)disolveBurstForAssets:(id)arg1 permanently:(_Bool)arg2;
+ (id)_assetAmongAssets:(id)arg1 fromIndexes:(id)arg2 excludingIndexes:(id)arg3;
+ (id)revalidateAvalancheAssets:(id)arg1 inLibrary:(id)arg2 deleteNonPicks:(_Bool)arg3 allowDissolve:(_Bool)arg4;
+ (id)_updatePropertiesForAssets:(id)arg1 autoPicks:(id)arg2 stackAsset:(id)arg3 userFavorites:(id)arg4 deleteNonPicks:(_Bool)arg5 setFirstPick:(_Bool)arg6 allowDissolve:(_Bool)arg7;
+ (id)_visibleIndexesAmongAssets:(id)arg1 fromUserFavoriteIndexes:(id)arg2 stackIndex:(unsigned long long)arg3;
+ (id)assetsWithAvalancheUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (unsigned long long)countForAssetsWithAvalancheUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)_savedAssetTypesUnsupportedForAvalanche;
+ (_Bool)isValidBurstWithAssets:(id)arg1;
+ (void)_handleUpdatesForContextWillSave:(id)arg1;
+ (void)_updateMembershipForAssets:(id)arg1 autoPicks:(id)arg2 stackAsset:(id)arg3 userFavorites:(id)arg4 deleteNonPicks:(_Bool)arg5 allowDissolve:(_Bool)arg6 inLibrary:(id)arg7;
+ (_Bool)_allowMPSmodificationForBurstChangesOnLibrary:(id)arg1;
+ (void)removeFavoriteStatus:(id)arg1;
+ (struct CGRect)frameOfTopImageInStackForStackFrame:(struct CGRect)arg1;
+ (_Bool)shouldOnlyShowAvalanchePicks;
+ (_Bool)shouldHideAvalanchesFromPhotoStream;

- (void)dealloc;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;
- (void)applyTrashedState:(short)arg1;
- (void)assetsDidChange:(id)arg1;
- (id)initWithUUID:(id)arg1 photoLibrary:(id)arg2;
- (void)applyChangesAndDeleteNonPicks:(_Bool)arg1 currentContainer:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)autoPicks;
- (id)userFavorites;
- (id)stackAsset;
- (void)_recalculateStackAsset;
- (void)addUserFavorite:(id)arg1;
- (void)removeUserFavorite:(id)arg1;
- (_Bool)isUserFavorite:(id)arg1;
- (_Bool)isAutoPick:(id)arg1;
- (id)proposedStackAssetAfterRemovingFavorite:(id)arg1;

@end
