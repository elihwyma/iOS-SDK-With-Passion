/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface CNSharingProfileLogger : NSObject

{
    NSObject<OS_os_log> *_log;
}

@property (retain, nonatomic) NSObject<OS_os_log> *log;

+ (id)log;

- (id)init;
- (void)logOnboardingSavingMeCardImageToRecentsForIdentifier:(id)arg1;
- (void)logOnboardingSuccessSavingMeCardImageToRecents;
- (void)logOnboardingErrorSavingMeCardImageToRecentsWithDescription:(id)arg1;
- (void)logOnboardingSavingContact:(id)arg1;
- (void)logOnboardingAddingContact;
- (void)logOnboardingUpdatingContactWithIdentifier:(id)arg1;
- (void)logOnboardingErrorSavingContactWithDescription:(id)arg1;
- (void)logOnboardingSettingMeContact;
- (void)logOnboardingErrorSettingMeContactWithDescription:(id)arg1;
- (void)logOnboardingSuccessSavingContact;
- (void)logOnboardingAvatarCarouselErrorCreatingContactImageWithDescription:(id)arg1;
- (void)logOnboardingReturningSharingResultWithDescription:(id)arg1;
- (void)logOnboardingReturningDefaultMonogram;
- (void)logOnboardingReturningEmptyImage;
- (void)logSettingsSavingContact:(id)arg1;
- (void)logSettingsErrorSavingContactWithDescription:(id)arg1;
- (void)logSettingsSettingMeContact;
- (void)logSettingsErrorSettingMeContactWithDescription:(id)arg1;
- (void)logSettingsSuccessSavingContact;
- (void)logErrorGeneratingAvatarForPhotoPickerWithDescription:(id)arg1;
- (void)logSettingsReturningSharingResultWithDescription:(id)arg1;
- (void)logSettingsReturningDefaultMonogram;
- (void)logSettingsReturningEmptyImageForNoChange;
- (void)logSettingsReturningEmptyImage;

@end
