/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/Swift-Protocol.h>

@protocol WBSPerSitePreferenceManagerDelegate;

@protocol WBSPerSitePreferenceManager <Swift>

@property (weak, nonatomic) id <WBSPerSitePreferenceManagerDelegate> delegate;

- (unsigned short)preferences;
- (unsigned short)getValueOfPreference:forDomain:withTimeout:usingBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getAllDomainsConfiguredForPreference:usingBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getDefaultPreferenceValueForPreference:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)valuesForPreference: /* Error: Ran out of types for this method. */;
- (unsigned short)localizedStringForValue:inPreference: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:ofPreference:forDomain:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setDefaultValue:ofPreference:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removePreferenceValuesForDomains:fromPreference:completionHandler: /* Error: Ran out of types for this method. */;

@end
