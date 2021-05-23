/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class IMBusinessNameManager, NSHashTable, NSMutableDictionary;

@interface IMHandleRegistrar : NSObject

{
    NSMutableDictionary *_siblingsMap;
    NSHashTable *_allIMHandles;
    NSMutableDictionary *_CNIDToHandlesMap;
    IMBusinessNameManager *_businessNameManager;
}

+ (id)sharedInstance;

- (id)init;
- (id)businessNameForUID:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (id)allIMHandles;
- (void)_dumpOutAllIMHandlesForAccount:(id)arg1;
- (void)removeHandleFromCNIDMap:(id)arg1 withCNID:(id)arg2;
- (void)clearSiblingCacheForIMHandle:(id)arg1;
- (void)registerIMHandle:(id)arg1;
- (void)unregisterIMHandle:(id)arg1;
- (void)addHandleToCNIDMap:(id)arg1 CNContact:(id)arg2;
- (id)_existingAccountSiblingsForHandle:(id)arg1;
- (id)_accountSiblingsForHandle:(id)arg1;
- (id)_existingChatSiblingsForHandle:(id)arg1;
- (id)_chatSiblingsForHandle:(id)arg1;
- (id)siblingsForIMHandle:(id)arg1;
- (void)_addressBookChanged;
- (id)handlesForCNIdentifier:(id)arg1;
- (void)processContactChangeHistoryEventWithHandleIDs:(id)arg1 andCNContact:(id)arg2;
- (id)getIMHandlesForID:(id)arg1;
- (void)clearCNIDToHandlesMap;
- (void)_handleAddContactChangeHistoryEvent:(id)arg1;
- (void)_handleDeleteContactChangeHistoryEvent:(id)arg1;
- (void)_handleUpdateContactChangeHistoryEvent:(id)arg1;
- (void)_handleDropEverythingChangeHistoryEvent;
- (void)_emptySiblingCacheForIMHandleGUID:(id)arg1;
- (void)_buildSiblingsForIMHandle:(id)arg1;
- (void)_clearSiblingsCacheForIMHandle:(id)arg1 rebuildAfter:(_Bool)arg2;
- (id)getIDsForAllIMHandles;
- (id)CNIDToHandlesMap;
- (id)getIDsForInitialBatch;
- (id)getIDsForFinalBatch;
- (void)_dumpOutAllIMHandles;

@end
