/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

@class BCICloudIdentityToken, BDSICloudIdentityToken, NSHashTable;

@protocol BDSLiverpoolStatusChangeObserving, OS_dispatch_queue;

@interface BDSLiverpoolStatusMonitor : NSObject

{
    _Bool _optedIn;
    _Bool _optedInKnown;
    _Bool _lastArchivedNonNilICloudIdentityTokenWasNonNilAtColdLaunch;
    int _tccNotifyToken;
    BDSICloudIdentityToken *_lastArchivedICloudIdentityToken;
    BDSICloudIdentityToken *_lastArchivedNonNilICloudIdentityToken;
    BDSICloudIdentityToken *_currentICloudIdentityToken;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_containerQueue;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    NSHashTable *_observers;
    id <BDSLiverpoolStatusChangeObserving> _coordinatingObserver;
}

@property (copy, nonatomic) BDSICloudIdentityToken *lastArchivedICloudIdentityToken;
@property (copy, nonatomic) BDSICloudIdentityToken *lastArchivedNonNilICloudIdentityToken;
@property (copy, nonatomic) BDSICloudIdentityToken *currentICloudIdentityToken;
@property (nonatomic) _Bool optedIn;
@property (nonatomic) _Bool optedInKnown;
@property (nonatomic) _Bool lastArchivedNonNilICloudIdentityTokenWasNonNilAtColdLaunch;
@property (nonatomic) int tccNotifyToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *containerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (weak, nonatomic) id <BDSLiverpoolStatusChangeObserving> coordinatingObserver;
@property (copy, nonatomic, readonly) BCICloudIdentityToken *iCloudIdentityToken;
@property (nonatomic, readonly) _Bool userIdentityPreviouslyRecordedOnThisDevice;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (_Bool)isCloudKitEnabled;
- (void)dq_refreshICloudAvailabilityStatus;
- (void)p_iCloudIdentityDidChange:(id)arg1;
- (void)refreshICloudTokensAndUpdateWithOptedIn:(_Bool)arg1;
- (void)dq_archiveCurrentICloudIdentityToken;
- (_Bool)dq_isCloudKitEnabled;
- (void)_notifyObserversWithCurrentToken:(id)arg1 lastToken:(id)arg2;
- (void)updateWithOptedIn:(_Bool)arg1;
- (void)registerCoordinatingObserver:(id)arg1;
- (void)restartObserving;

@end
