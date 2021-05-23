/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, WFSettings;

@interface WFSettingsManager : NSObject

{
    _Bool _useFallback;
    struct os_unfair_lock_s _useFallbackLock;
    struct os_unfair_lock_s _settingsLock;
    id <WFSettings> _settings;
    NSObject<OS_dispatch_queue> *_requestSerialQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestSerialQueue;
@property (nonatomic) struct os_unfair_lock_s useFallbackLock;
@property (nonatomic) struct os_unfair_lock_s settingsLock;
@property (nonatomic, readonly) id <WFSettings> settings;
@property (nonatomic, readonly) NSString *APIVersion;
@property (nonatomic, readonly) _Bool useFallback;

+ (id)userId;

- (id)init;
- (id)containerIdentifier;
- (void)setSettings:(id)arg1;
- (void)fetchAppConfigurationIfExpired;
- (void)clearConfigCache;
- (void)fetchAppConfigurationIfNeeded;
- (void)_fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_permanentURLForRecordID:(id)arg1 containerIdentifier:(id)arg2;
- (void)completeOnQueue:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_containerIDForContainerIdentifier:(id)arg1;
- (id)_URLSafeBase64EncodedStringWithData:(id)arg1 options:(unsigned long long)arg2;
- (void)setUseFallback:(_Bool)arg1;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
