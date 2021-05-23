/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString;

@interface HUSoftwareUpdateUIManager : NSObject

{
    NSMapTable *_homeBackgroundCheckMapTable;
}

@property (nonatomic, readonly) NSMapTable *homeBackgroundCheckMapTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)executionEnvironmentDidEnterBackground:(id)arg1;
- (id)fetchAvailableUpdatesForHome:(id)arg1;
- (id)fetchAvailableUpdatesForAccessories:(id)arg1;
- (id)fetchAvailableUpdatesForAccessory:(id)arg1;
- (long long)numberOfAccessoriesWithAvailableUpdates:(id)arg1;
- (id)startUpdatesForAccessories:(id)arg1 presentationDelegate:(id)arg2;
- (id)presentLicensesIfNeededForSoftwareUpdate:(id)arg1 home:(id)arg2 presentationDelegate:(id)arg3;
- (_Bool)_shouldPresentTermsAndConditionsForSoftwareLicenseAgreementVersion:(id)arg1 home:(id)arg2;
- (_Bool)isLicensePresentationNecessaryForSoftwareUpdate:(id)arg1 home:(id)arg2 error:(out id *)arg3;
- (id)_markTermsAndConditionsAsReadForLicenseAgreementVersion:(id)arg1 inHome:(id)arg2;
- (void)startSilentBackgroundCheckForHome:(id)arg1;
- (long long)numberOfAccessoriesWithAvailableUpdatesInHome:(id)arg1;
- (id)startUpdatesForAllAccessoriesInHome:(id)arg1 presentationDelegate:(id)arg2;
- (id)startUpdateForAccessory:(id)arg1 update:(id)arg2 presentationDelegate:(id)arg3;

@end
