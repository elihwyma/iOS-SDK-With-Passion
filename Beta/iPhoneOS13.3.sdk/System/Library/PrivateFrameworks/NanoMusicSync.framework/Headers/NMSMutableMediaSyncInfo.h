/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@class NSMutableDictionary;

@interface NMSMutableMediaSyncInfo

{
    _Bool _needsUpdateAggregateInfo;
}

@property (retain, nonatomic) NSMutableDictionary *info;

- (void)synchronize;
- (id)_info;
- (float)progress;
- (unsigned long long)status;
- (id)initWithTarget:(unsigned long long)arg1;
- (void)setItems:(id)arg1 forContainer:(id)arg2;
- (unsigned long long)statusForContainer:(id)arg1;
- (float)progressForContainer:(id)arg1;
- (unsigned long long)playabilityForContainer:(id)arg1;
- (unsigned long long)numberOfItemsOverStorageLimitForContainer:(id)arg1;
- (unsigned long long)numberOfItemsOverStorageLimit;
- (void)_updateAggregateInfoIfNeeded;
- (id)_infoForContainer:(id)arg1;
- (id)_infoForItem:(id)arg1;
- (void)_writeInfo;
- (void)_notifyInfoChanged;
- (unsigned long long)_persistingOptions;
- (void)setStatus:(unsigned long long)arg1 forItem:(id)arg2;
- (void)setProgressBytes:(unsigned long long)arg1 totalBytes:(unsigned long long)arg2 forItem:(id)arg3;
- (void)setOverStorageLimit:(_Bool)arg1 forItem:(id)arg2;
- (void)setUserInfo:(id)arg1 forContainer:(id)arg2;
- (void)setUserInfo:(id)arg1 forItem:(id)arg2;

@end
