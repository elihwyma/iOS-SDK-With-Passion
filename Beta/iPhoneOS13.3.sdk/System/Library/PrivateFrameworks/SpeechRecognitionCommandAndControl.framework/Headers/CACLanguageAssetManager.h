/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface CACLanguageAssetManager : NSObject

{
    _Bool _isRegisteredForCallback;
    _Bool _isInstallationStatusStale;
    NSMutableDictionary *_downloadProgressDictionary;
    NSMutableDictionary *_lastReportedProgressDictionary;
    NSMutableDictionary *_downloadErrorDictionary;
    NSDictionary *_cachedInstallationStatus;
}

@property (nonatomic) _Bool isRegisteredForCallback;
@property (retain, nonatomic) NSMutableDictionary *downloadProgressDictionary;
@property (retain, nonatomic) NSMutableDictionary *lastReportedProgressDictionary;
@property (retain, nonatomic) NSMutableDictionary *downloadErrorDictionary;
@property (retain, nonatomic) NSDictionary *cachedInstallationStatus;
@property (nonatomic) _Bool isInstallationStatusStale;

+ (void)initialize;
+ (id)sharedManager;

- (id)init;
- (void)markInstallationStatusStale;
- (id)installationStatus;
- (void)registerForCallback;
- (id)downloadProgressForLanguage:(id)arg1;
- (void)_downloadProgressCallback:(struct __CFDictionary *)arg1;
- (void)_handleErrorInDownloadForLanguage:(id)arg1;
- (void)_sendProgressNotificationIfNeededForLanguage:(id)arg1;
- (void)startDownloadOfLanguage:(id)arg1;
- (id)purgeInstalledAsset;
- (id)supportedLocaleIdentifiers;
- (unsigned long long)errorStatusForLanguage:(id)arg1;

@end
