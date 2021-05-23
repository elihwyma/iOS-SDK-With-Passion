/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor, NSDate, NSSet, NSString;

@protocol OS_dispatch_queue;

@interface PLAssetsdConnectionAuthorization : NSObject

{
    CDStruct_4c969caf _auditToken;
    NSSet *_photoKitEntitlements;
    int _kTCCPhotosAuthorized;
    int _kTCCPhotosAddAuthorized;
    _Bool _libraryUpgradeAuthorized;
    _Bool _directDatabaseWriteAuthorized;
    NSDate *_connectionStartDate;
    BKSApplicationStateMonitor *_applicationStateMonitor;
    NSObject<OS_dispatch_queue> *_duetUpdateQueue;
    _Bool _photoKitEntitled;
    int _clientProcessIdentifier;
    NSString *_trustedCallerBundleID;
    NSString *_trustedCallerDisplayName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *trustedCallerBundleID;
@property (nonatomic, readonly) NSString *trustedCallerDisplayName;
@property (nonatomic, readonly) int clientProcessIdentifier;
@property (nonatomic, readonly) _Bool photoKitEntitled;
@property (nonatomic, readonly) CDStruct_4c969caf clientAuditToken;
@property (nonatomic, readonly) _Bool directDatabaseWriteAuthorized;

- (id)initWithConnection:(id)arg1;
- (void)handleInvalidation;
- (_Bool)isClientAuthorizedForTCCServicePhotos;
- (_Bool)isClientAuthorizedForTCCServicePhotosAdd;
- (_Bool)isPhotosClient;
- (_Bool)photoKitEntitledFor:(id)arg1;
- (_Bool)isClientAuthorizedForLibraryUpgrade;
- (void)setupFromConnection:(id)arg1;
- (void)_trackDKEventIfNecessary;
- (_Bool)_shouldTrackDKEventForBundle:(id)arg1;
- (void)_handleDuetReportIsForground:(_Bool)arg1;

@end
