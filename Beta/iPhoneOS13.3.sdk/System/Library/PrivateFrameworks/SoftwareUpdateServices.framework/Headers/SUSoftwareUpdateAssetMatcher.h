/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <SoftwareUpdateServices/SUAssetStateMatcher.h>

@class NSDictionary, NSString, SUPreferences;

@interface SUSoftwareUpdateAssetMatcher : SUAssetStateMatcher

{
    NSString *_fromBuild;
    NSString *_fromVersion;
    NSString *_fromProductType;
    NSString *_fromReleaseType;
    NSDictionary *_matcherInfo;
    _Bool _checkTatsu;
    SUPreferences *_preferences;
}

@property (retain, nonatomic) SUPreferences *preferences;
@property (nonatomic, readonly) NSString *fromVersion;
@property (nonatomic, readonly) NSString *fromBuild;
@property (nonatomic, readonly) NSString *fromProductType;
@property (nonatomic, readonly) NSString *fromReleaseType;
@property (nonatomic, readonly) NSDictionary *matcherInfo;
@property (nonatomic) _Bool compareWithTatsuForEligibility;

+ (id)matcherForCurrentDeviceWithInterestedStates:(int)arg1;
+ (id)matcherForCurrentDevice;
+ (id)matcherForCurrentDeviceWithInfo:(id)arg1;

- (void)dealloc;
- (id)_findMatchFromCandidates:(id)arg1 error:(id *)arg2;
- (void)_modifyMADownloadOptions:(id)arg1;
- (id)initWithVersion:(id)arg1 build:(id)arg2 productType:(id)arg3 releaseType:(id)arg4 interestedStates:(int)arg5 matcherInfo:(id)arg6;
- (_Bool)_isPossibleSoftwareUpdate:(id)arg1;
- (_Bool)_isDeviceEligibleForUpdate:(id)arg1;
- (id)_copyMatchingAssetsAfterSortingAndFiltering:(id)arg1;
- (id)_createCleanOSVersionString:(id)arg1;
- (unsigned long long)_getIndexOfHighestVersionedAsset:(id)arg1 usingFirstKey:(id)arg2 secondKey:(id)arg3;
- (id)_filterPatchesIfNecessary:(id)arg1;
- (id)_createSortedAndFilteredAssetResults:(id)arg1 usingFirstKey:(id)arg2 secondKey:(id)arg3;

@end
