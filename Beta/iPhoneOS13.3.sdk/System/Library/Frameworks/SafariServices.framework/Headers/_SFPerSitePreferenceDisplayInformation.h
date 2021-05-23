/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _SFPerSitePreferenceDisplayInformation : NSObject

{
    NSString *_localizedSiteSpecificSettingsTitle;
    NSString *_localizedAllWebsiteSettingsTitle;
    NSString *_localizedClearAllSettingsPrompt;
    unsigned long long _displayOption;
}

@property (copy, nonatomic, readonly) NSString *localizedSiteSpecificSettingsTitle;
@property (copy, nonatomic, readonly) NSString *localizedAllWebsiteSettingsTitle;
@property (copy, nonatomic, readonly) NSString *localizedClearAllSettingsPrompt;
@property (nonatomic, readonly) unsigned long long displayOption;

+ (void)_buildMapIfNeeded;
+ (id)displayInformationForPerSitePreference:(id)arg1;

- (id)_initWithLocalizedSiteSpecificSettingsTitle:(id)arg1 localizedAllWebsiteSettingsTitle:(id)arg2 localizedClearAllSettingsPrompt:(id)arg3 displayOption:(unsigned long long)arg4;

@end
