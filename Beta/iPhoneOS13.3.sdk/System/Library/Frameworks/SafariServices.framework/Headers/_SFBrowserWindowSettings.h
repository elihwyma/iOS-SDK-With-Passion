/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface _SFBrowserWindowSettings : NSObject

{
    NSMutableDictionary *_settingsDictionary;
    _Bool _synchronizeScheduled;
    _Bool _invalidatesClosedWindows;
}

@property (nonatomic, readonly) _Bool hasPrivateBrowsingWindow;
@property (nonatomic) _Bool invalidatesClosedWindows;

+ (id)settings;
+ (void)setSharedSettings:(id)arg1;

- (id)init;
- (void)synchronize;
- (void)_initializeSettingsDictionaryIfNeeded;
- (id)_numberForKey:(id)arg1 windowUUID:(id)arg2;
- (id)_stringForKey:(id)arg1 windowUUID:(id)arg2;
- (_Bool)_boolValueForKey:(id)arg1 windowUUID:(id)arg2;
- (void)_setBool:(_Bool)arg1 forKey:(id)arg2 windowUUID:(id)arg3;
- (void)_setString:(id)arg1 forKey:(id)arg2 windowUUID:(id)arg3;
- (void)_synchronizeNow;
- (void)validateWindowSettingsWithUUIDs:(id)arg1;
- (_Bool)privateBrowsingEnabledForWindowWithUUID:(id)arg1;
- (void)setPrivateBrowsingEnabled:(_Bool)arg1 forWindowWithUUID:(id)arg2;
- (_Bool)activeDocumentIsValidForWindowWithUUID:(id)arg1;
- (void)setActiveDocumentIsValid:(_Bool)arg1 forWindowWithUUID:(id)arg2;
- (_Bool)isShowingTabViewForWindowWithUUID:(id)arg1;
- (void)setIsShowingTabView:(_Bool)arg1 forWindowWithUUID:(id)arg2;
- (id)blankSnapshotGroupIdentifierForPrivateBrowsing:(_Bool)arg1 forWindowWithUUID:(id)arg2;
- (void)setBlankSnapshotGroupIdentifier:(id)arg1 forPrivateBrowsing:(_Bool)arg2 forWindowWithUUID:(id)arg3;
- (void)removeWindowWithUUID:(id)arg1;

@end
