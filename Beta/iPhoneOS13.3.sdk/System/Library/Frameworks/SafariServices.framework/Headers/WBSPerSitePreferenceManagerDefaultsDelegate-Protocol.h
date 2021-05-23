/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/Swift-Protocol.h>

@class WBSPerSitePreferencesSQLiteStore;

@protocol WBSPerSitePreferenceManagerDefaultsDelegate <Swift>

@property (nonatomic, readonly) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;

- (unsigned short)preferencesStoreKeyForPreference: /* Error: Ran out of types for this method. */;
- (unsigned short)defaultPreferenceValueForPreferenceIfNotCustomized: /* Error: Ran out of types for this method. */;

@end
