/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VCAccessSpecifier : NSObject

{
    NSString *_associatedAppBundleIdentifier;
    NSString *_bundleIdentifier;
    long long _entitlements;
}

@property (nonatomic, readonly) long long entitlements;
@property (copy, nonatomic, readonly) NSString *associatedAppBundleIdentifier;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;

+ (void)initialize;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)accessSpecifierWithNoAccessForBundleIdentifier:(id)arg1;
+ (id)accessSpecifierForCurrentProcess;
+ (id)accessSpecifierForXPCConnection:(id)arg1;
+ (id)accessSpecifierForAuditToken:(CDStruct_6ad76789)arg1;
+ (id)accessSpecifierForTask:(struct __SecTask *)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleIdentifier:(id)arg1 associatedAppBundleIdentifier:(id)arg2 entitlements:(long long)arg3;
- (_Bool)hasEntitlements:(long long)arg1;
- (_Bool)allowConnection;
- (_Bool)allowUnrestrictedAccess;
- (_Bool)allowWriteAccessToVoiceShortcuts;
- (_Bool)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)arg1;
- (_Bool)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)arg1;
- (_Bool)allowReadAccessToSuggestionsWithBundleIdentifier:(id)arg1;
- (_Bool)allowWriteAccessForTriggers;
- (_Bool)allowReadAccessForTriggers;
- (_Bool)allowReadAccessToShortcutsLibrary;
- (_Bool)allowReadAccessToPodcastsDatabase;
- (_Bool)allowBackgroundShortcutRunning;
- (_Bool)allowHomeResidentShortcutRunning;
- (_Bool)isSettingsApp;
- (_Bool)isRemovalService;

@end
