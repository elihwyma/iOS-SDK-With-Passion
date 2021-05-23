/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, NTKFaceCollection;

@interface NTKSiriDefaults : NSObject

{
    NTKFaceCollection *_faceCollection;
    _Bool _hasMigratedDisabledDataSources;
}

@property (nonatomic) _Bool watchHasMigratedAvailableDataSources;
@property (retain, nonatomic) NSSet *phoneThirdPartyDataSources;
@property (retain, nonatomic) NSSet *watchThirdPartyDataSources;
@property (nonatomic, readonly) _Bool hasMigratedDisabledDataSources;
@property (retain, nonatomic) NSSet *disabledDataSources;
@property (nonatomic, readonly) _Bool isUpNextFaceCurrentlyActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)_fetchNewFaceCollection;
- (void)_activeDeviceDidChange:(id)arg1;
- (void)migrateIfNecessary;
- (id)_domainAccesor;
- (void)_synchronizeDefaultsForKeys:(id)arg1;
- (void)_thirdPartyDataSourcesDidChange;
- (void)_disabledDataSourcesDidChange;
- (_Bool)hasMigratedDataSources;

@end
