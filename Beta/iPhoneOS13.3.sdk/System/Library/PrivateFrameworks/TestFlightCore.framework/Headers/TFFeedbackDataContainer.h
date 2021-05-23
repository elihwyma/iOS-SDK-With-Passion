/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@protocol OS_dispatch_queue, TFFeedbackDataContainerObserver;

__attribute__((visibility("hidden")))
@interface TFFeedbackDataContainer : NSObject

{
    id <TFFeedbackDataContainerObserver> _observer;
    NSString *_name;
    NSMutableSet *_includedGroupIdentifiers;
    NSMutableSet *_loadingEntryIdentifiers;
    NSMutableDictionary *_stringEntryMap;
    NSMutableDictionary *_numberEntryMap;
    NSMutableDictionary *_imageCollectionEntryMap;
    NSMutableArray *_dirtyGroupIdentifiers;
    NSMutableArray *_dirtyEntryIdentifiers;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (nonatomic, readonly) NSMutableSet *includedGroupIdentifiers;
@property (nonatomic, readonly) NSMutableSet *loadingEntryIdentifiers;
@property (nonatomic, readonly) NSMutableDictionary *stringEntryMap;
@property (nonatomic, readonly) NSMutableDictionary *numberEntryMap;
@property (nonatomic, readonly) NSMutableDictionary *imageCollectionEntryMap;
@property (nonatomic, readonly) NSMutableArray *dirtyGroupIdentifiers;
@property (nonatomic, readonly) NSMutableArray *dirtyEntryIdentifiers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (weak, nonatomic) id <TFFeedbackDataContainerObserver> observer;
@property (copy, nonatomic, readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1;
- (_Bool)isLoading;
- (id)objectForIdentifier:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)setStringForIdentifier:(id)arg1 toValue:(id)arg2;
- (void)setNumberForIdentifier:(id)arg1 toValue:(id)arg2;
- (id)stringForIdentifier:(id)arg1;
- (id)numberForIdentifier:(id)arg1;
- (_Bool)isGroupWithIdentifierIncluded:(id)arg1;
- (id)imageCollectionForIdentifer:(id)arg1;
- (void)setEntryLoadingForIdentifier:(id)arg1 toValue:(_Bool)arg2;
- (void)overwriteWithContentsOfDataContainer:(id)arg1;
- (id)initWithName:(id)arg1 includedGroupIdentifiers:(id)arg2 loadingEntryIdentifiers:(id)arg3 stringEntryMap:(id)arg4 numberEntryMap:(id)arg5 imageCollectionEntryMap:(id)arg6 dirtyGroupIdentifiers:(id)arg7 dirtyEntryIdentifiers:(id)arg8;
- (void)setGroupInclusionForIdentifier:(id)arg1 toValue:(_Bool)arg2;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 suppressingNotifications:(_Bool)arg2;
- (void)_clearDirtyIdentifiers;
- (void)_notifyObserverOfUpdates;
- (void)_markGroupIdentifierDirty:(id)arg1;
- (void)_markEntryIdentifierDirty:(id)arg1;
- (void)setImageCollectionForIdentifier:(id)arg1 toValue:(id)arg2;
- (_Bool)isEntryWithIdentifierLoading:(id)arg1;
- (void)prepareInitialValuesForForm:(id)arg1;

@end
