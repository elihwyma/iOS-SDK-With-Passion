/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSSet, NSString, PKCatalog, PKPassLibrary, PKPaymentService;

@protocol PKGroupsControllerDelegate;

@interface PKGroupsController : NSObject

{
    PKPassLibrary *_passLibrary;
    PKPaymentService *_paymentService;
    unsigned long long _filters;
    unsigned long long _passTypeMask;
    NSMutableArray *_groups;
    NSMutableDictionary *_passesByUniqueID;
    NSMutableDictionary *_groupsByGroupID;
    NSMutableDictionary *_indicesByGroupID;
    NSMutableDictionary *_groupIDsByPassUniqueID;
    _Bool _suppressRemoteUpdates;
    _Bool _enqueueRemoteUpdates;
    PKCatalog *_catalogBeforeReordering;
    NSMutableArray *_enqueuedUpdates;
    NSArray *_localPasses;
    NSSet *_expressPassesInformation;
    _Bool _limitedMode;
    _Bool _activePassesOnly;
    int _expressPassesInformationToken;
    _Bool _reorderingEnabled;
    _Bool _shouldSeparatePaymentPasses;
    id <PKGroupsControllerDelegate> _delegate;
    NSArray *_filteredPassUniqueIDs;
}

@property (weak, nonatomic) id <PKGroupsControllerDelegate> delegate;
@property (nonatomic) _Bool reorderingEnabled;
@property (nonatomic, readonly) _Bool filteringEnabled;
@property (nonatomic, readonly) NSArray *filteredPassUniqueIDs;
@property (nonatomic) _Bool shouldSeparatePaymentPasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)groups;
- (unsigned long long)indexOfGroup:(id)arg1;
- (unsigned long long)groupCount;
- (id)passWithUniqueID:(id)arg1;
- (id)initWithPassLibrary:(id)arg1;
- (void)passLibrary:(id)arg1 receivedUpdatedCatalog:(id)arg2 passes:(id)arg3;
- (void)handleUserPassDelete:(id)arg1;
- (void)objectSettingsDidChangeNotification:(id)arg1;
- (void)reloadGroups;
- (void)loadGroupsSynchronously;
- (id)groupAtIndex:(unsigned long long)arg1;
- (void)_updateStateWithCatalog:(id)arg1 passes:(id)arg2 notify:(_Bool)arg3;
- (void)_getPassesAndCatalogSynchronously:(_Bool)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)reloadGroupsWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)_indexOfGroupID:(id)arg1;
- (unsigned long long)groupIndexForPassUniqueID:(id)arg1;
- (void)_removeGroup:(id)arg1 notify:(_Bool)arg2;
- (id)_copyRemoteCatalog;
- (void)_moveGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 notify:(_Bool)arg4;
- (void)_performEnqueuedUpdates;
- (void)_insertGroup:(id)arg1 atIndex:(unsigned long long)arg2 notify:(_Bool)arg3;
- (void)reloadGroupsAndNotify:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performOrEnqueueUpdate:(CDUnknownBlockType)arg1;
- (void)_fixIndex:(unsigned long long)arg1;
- (id)_displayablePassesDictionaryFromSet:(id)arg1;
- (void)_insertLocalGroupsIntoCatalog:(id)arg1 withPassesByUniqueID:(id)arg2;
- (id)_updateAndCreateGroupsWithCatalog:(id)arg1 passesByUniqueID:(id)arg2 notify:(_Bool)arg3;
- (_Bool)_groupIDIsNew:(id)arg1;
- (void)_placeGroup:(id)arg1 atIndex:(unsigned long long)arg2 notify:(_Bool)arg3;
- (unsigned long long)_destinationIndexForGroupID:(id)arg1 catalogGroups:(id)arg2 skippingNewGroupsAfterIndex:(unsigned long long)arg3;
- (void)_fixIndicesFrom:(unsigned long long)arg1;
- (void)_fixIndicesFrom:(unsigned long long)arg1 through:(unsigned long long)arg2;
- (id)_groupsExcludingTypePayment;
- (id)initWithPassTypeMask:(unsigned long long)arg1 passFilters:(unsigned long long)arg2;
- (id)initLimited;
- (void)preloadGroupsAndFrontFaceImages;
- (void)loadGroupsWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfSeparationGroup;
- (void)handleUserPassesDelete:(id)arg1;
- (void)suppressRemoteUpdates:(_Bool)arg1;
- (void)moveGroupAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)enableRemoteUpdates;
- (void)addLocalPasses:(id)arg1;

@end
