/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <VoiceShortcuts/VCIntentDefinitionSyncDataHandler.h>

@class NSString;

@interface VCIntentDefinitionManager : VCIntentDefinitionSyncDataHandler

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)intentDefinitionURLsForBundleID:(id)arg1;
+ (id)intentDefinitionLocalizableFileURLsForBundleID:(id)arg1;
+ (id)appInfoForBundleID:(id)arg1;
+ (id)intentDefinitionURLsForBundleID:(id)arg1 withExtensions:(id)arg2;

@end
