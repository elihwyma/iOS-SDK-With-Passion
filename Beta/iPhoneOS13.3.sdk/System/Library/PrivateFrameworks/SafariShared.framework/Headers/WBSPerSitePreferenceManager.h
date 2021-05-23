/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerDelegate, WBSPerSitePreferenceManagerStorageDelegate;

@interface WBSPerSitePreferenceManager : NSObject

{
    id <WBSPerSitePreferenceManagerDelegate> _delegate;
    id <WBSPerSitePreferenceManagerStorageDelegate> _storageDelegate;
    id <WBSPerSitePreferenceManagerDefaultsDelegate> _defaultsDelegate;
}

@property (weak, nonatomic) id <WBSPerSitePreferenceManagerStorageDelegate> storageDelegate;
@property (weak, nonatomic) id <WBSPerSitePreferenceManagerDefaultsDelegate> defaultsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <WBSPerSitePreferenceManagerDelegate> delegate;

- (id)preferences;
- (void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3;
- (void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)getDefaultPreferenceValueForPreference:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)valuesForPreference:(id)arg1;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setDefaultValue:(id)arg1 ofPreference:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_validatePreferenceValue:(id)arg1 inPreference:(id)arg2;

@end
