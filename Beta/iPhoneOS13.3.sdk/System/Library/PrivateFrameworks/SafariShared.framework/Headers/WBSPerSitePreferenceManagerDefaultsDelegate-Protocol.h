/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/Swift-Protocol.h>

@class WBSPerSitePreferencesSQLiteStore;

@protocol WBSPerSitePreferenceManagerDefaultsDelegate <Swift>

@property (nonatomic, readonly) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;

- (unsigned short)preferencesStoreKeyForPreference: /* Error: Ran out of types for this method. */;
- (unsigned short)defaultPreferenceValueForPreferenceIfNotCustomized: /* Error: Ran out of types for this method. */;

@end
