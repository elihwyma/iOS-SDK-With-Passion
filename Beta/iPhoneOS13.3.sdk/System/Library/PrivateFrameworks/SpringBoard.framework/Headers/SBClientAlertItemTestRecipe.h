/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBAlertItem;

@interface SBClientAlertItemTestRecipe : NSObject

{
    SBAlertItem *_item;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)load;

- (id)title;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (id)_nextAlertItemToTest;
- (void)_dismissCurrentItem;
- (id)_mapsApp;
- (id)_anySUDescriptor;
- (id)_chatCarrierSMSAlert;
- (id)_chatMMSDelayedDownloadAlert;
- (id)_chatMMSInformationMissingAlert;
- (id)_mapsThermalAlert;
- (id)_wifiBTSSPAlert;
- (id)_wifiDontAskAlert;
- (id)_wifiErrorAlert;
- (id)_wifiIsEnterpriseAlert;
- (id)_wifiPasswordAlert;
- (id)_wifiTrustAlert;
- (void)educationAlertWasDeactivated:(id)arg1;
- (id)_currentAssistantLanguage;

@end
