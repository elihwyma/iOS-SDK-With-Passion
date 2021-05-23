/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDAssetDownloadScheduler, NSSet, NSString;

@interface EDMailDynamicDataAsset : NSObject

{
    _Bool _shouldIgnoreUserAccountDomains;
    NSSet *_ignoredDomains;
    EDAssetDownloadScheduler *_scheduler;
}

@property _Bool shouldIgnoreUserAccountDomains;
@property (retain) NSSet *ignoredDomains;
@property (retain, nonatomic) EDAssetDownloadScheduler *scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)_ignoredDomainsFallback;

- (id)init;
- (_Bool)shouldIgnoreDomain:(id)arg1;
- (void)_updateIgnoredDomains:(id)arg1;
- (void)_queryForAssetWithCompletion:(CDUnknownBlockType)arg1;
- (void)_downloadAssetCatalogWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateStateFromAsset:(id)arg1;

@end
