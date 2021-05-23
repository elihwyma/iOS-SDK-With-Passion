/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WDVideoURLManager : NSObject

+ (void)_fetchPreferredURLForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)_parseJSON:(id)arg1;
+ (id)preferredLanguageFromLanguages:(id)arg1 languagePreferences:(id)arg2;
+ (id)_baseURLForIdentifier:(id)arg1;
+ (void)_fetchRawManifestForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fetchURLForVideoWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (_Bool)isVideoPlaybackEnabled;

@end
