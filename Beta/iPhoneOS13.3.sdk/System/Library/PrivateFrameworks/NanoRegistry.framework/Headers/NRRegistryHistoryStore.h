/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@class NRDeviceCollectionHistory, NSMutableDictionary;

@interface NRRegistryHistoryStore

{
    NSMutableDictionary *_diffIndexObservers;
    int _keyBagStatusChangedNotificationToken;
    NRDeviceCollectionHistory *_history;
}

@property (retain, nonatomic) NRDeviceCollectionHistory *history;
@property (nonatomic) int keyBagStatusChangedNotificationToken;

+ (id)sharedInstance;

- (void)dealloc;
- (void)invalidate;
- (id)collection;
- (id)initWithParameters:(id)arg1;
- (void)setCollection:(id)arg1;
- (void)grabHistoryWithReadBlock:(CDUnknownBlockType)arg1;
- (void)grabHistoryWithWriteBlock:(CDUnknownBlockType)arg1;
- (void)syncGrabHistoryWithReadBlock:(CDUnknownBlockType)arg1;
- (void)syncGrabHistoryWithWriteBlock:(CDUnknownBlockType)arg1;
- (id)addDiffIndexObserverWithWriteBlock:(CDUnknownBlockType)arg1;
- (void)removeDiffIndexObserver:(id)arg1;
- (void)_loadAndNotifySecureProperties;
- (void)_notifyObserversSecurePropertiesAreAvailableWithCollection:(id)arg1 secureProperties:(id)arg2;
- (void)_removeUnreferencedSecureProperties;
- (void)_persistCollection:(id)arg1 secureProperties:(id)arg2;
- (void)_notifyDiffIndexObserversWithHistoryEntry:(id)arg1 deviceCollection:(id)arg2 secureProperties:(id)arg3;

@end
