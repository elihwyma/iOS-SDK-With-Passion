/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class ICCloudThrottlingPolicy, NSNumber, NSString, NSTimer;

@interface ICCloudConfiguration : NSObject

{
    _Bool _shouldSyncWhenEnteringForeground;
    ICCloudThrottlingPolicy *_throttlingPolicy;
    double _syncInterval;
    unsigned long long _maxInlineAssetSizeBytes;
    unsigned long long _maxAttachmentsPerNote;
    unsigned long long _maxSubAttachmentsPerAttachment;
    unsigned long long _resultsLimitPerSyncOperation;
    NSNumber *_maximumAttachmentSizeMB;
    NSString *_minimumClientVersion;
    NSTimer *_downloadTimer;
}

@property (retain, nonatomic) ICCloudThrottlingPolicy *throttlingPolicy;
@property (nonatomic) double syncInterval;
@property (nonatomic) _Bool shouldSyncWhenEnteringForeground;
@property (nonatomic) unsigned long long maxInlineAssetSizeBytes;
@property (retain, nonatomic) NSNumber *maximumAttachmentSizeMB;
@property (nonatomic) unsigned long long maxAttachmentsPerNote;
@property (nonatomic) unsigned long long maxSubAttachmentsPerAttachment;
@property (nonatomic) unsigned long long resultsLimitPerSyncOperation;
@property (retain, nonatomic) NSTimer *downloadTimer;
@property (copy, nonatomic) NSString *minimumClientVersion;

+ (id)sharedConfiguration;
+ (id)availableConfigurationURLs;
+ (void)setDefaultConfigurationURL:(id)arg1;
+ (id)cachedConfigurationURL;
+ (_Bool)isConfigurationValid:(id)arg1;
+ (id)defaultConfigurationURL;

- (id)init;
- (void)dealloc;
- (void)loadLocalConfigurationFile;
- (void)downloadRemoteConfiguration:(id)arg1;
- (void)setConfigurationFromDictionary:(id)arg1;
- (void)loadConfigurationFromURL:(id)arg1;
- (void)downloadConfigurationFromRemoteURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
