/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSSet, STUIUser;

__attribute__((visibility("hidden")))
@interface STRootViewModel : NSObject

{
    _Bool _canStopScreenTimeWithoutPasscode;
    _Bool _isCloudSyncEnabled;
    NSSet *_installedBundleIDs;
    NSDictionary *_installedBundleIDsByCategoryIdentifier;
    STUIUser *_me;
    NSArray *_children;
    NSArray *_devices;
}

@property (nonatomic) _Bool canStopScreenTimeWithoutPasscode;
@property (copy, nonatomic) NSArray *devices;
@property (nonatomic) _Bool isCloudSyncEnabled;
@property (nonatomic, readonly, getter=isScreenTimeEnabled) _Bool screenTimeEnabled;
@property (nonatomic, readonly) _Bool canStartScreenTime;
@property (nonatomic, readonly) _Bool canStopScreenTime;
@property (nonatomic, readonly) _Bool canStopSharingScreenTime;
@property (nonatomic, readonly) _Bool isSharingUsageData;
@property (nonatomic, readonly, getter=isWebUsageEnabled) _Bool webUsageEnabled;
@property (nonatomic, readonly) _Bool isRemotelyManagedUserWithPasscode;
@property (nonatomic, readonly) _Bool canSignIn;
@property (nonatomic, readonly) _Bool canToggleCloudSyncData;
@property (nonatomic, readonly) _Bool canSetUpFamily;
@property (nonatomic, readonly) _Bool canViewAskForTimeRequests;
@property (nonatomic, readonly) _Bool forceParentalControls;
@property (nonatomic, readonly) _Bool canToggleWebsiteData;
@property (nonatomic, readonly) _Bool shouldShowCompatibilityAlerts;
@property (copy, nonatomic) NSSet *installedBundleIDs;
@property (copy, nonatomic) NSDictionary *installedBundleIDsByCategoryIdentifier;
@property (copy, nonatomic) STUIUser *me;
@property (copy, nonatomic) NSArray *children;

+ (id)keyPathsForValuesAffectingScreenTimeEnabled;
+ (id)keyPathsForValuesAffectingCanStartScreenTime;
+ (id)keyPathsForValuesAffectingCanStopScreenTime;
+ (id)keyPathsForValuesAffectingCanStopSharingScreenTime;
+ (id)keyPathsForValuesAffectingIsSharingUsageData;
+ (id)keyPathsForValuesAffectingWebUsageEnabled;
+ (id)keyPathsForValuesAffectingIsRemotelyManagedUserWithPasscode;
+ (id)keyPathsForValuesAffectingCanSignIn;
+ (id)keyPathsForValuesAffectingCanToggleCloudSyncData;
+ (id)keyPathsForValuesAffectingCanSetUpFamily;
+ (id)keyPathsForValuesAffectingCanViewAskForTimeRequests;
+ (id)keyPathsForValuesAffectingForceParentalControls;
+ (id)keyPathsForValuesAffectingCanToggleWebsiteData;

- (id)init;

@end
