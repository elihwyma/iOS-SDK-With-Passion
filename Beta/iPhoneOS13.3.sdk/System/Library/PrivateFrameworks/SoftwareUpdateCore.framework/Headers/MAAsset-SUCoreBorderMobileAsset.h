/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
 */

#import <MobileAsset/MAAsset.h>

@interface MAAsset (SUCoreBorderMobileAsset)

+ (void)_SUCoreBorder_MADownloadResultAtEnd:(id)arg1 withResult:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (void)_SUCoreBorder_MADownloadResultAtBegin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)_SUCoreBorder_MAPurgeResultAtEnd:(id)arg1 withResult:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (void)_SUCoreBorder_MAPurgeResultAtBegin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)_SUCoreBorder_MACancelDownloadResultAtEnd:(id)arg1 withResult:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (void)_SUCoreBorder_MACancelDownloadResultAtBegin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)_SUCoreBorder_MAOperationResultAtEnd:(id)arg1 withResult:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (void)_SUCoreBorder_MAOperationResultAtBegin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)SUCoreBorder_startCatalogDownload:(id)arg1 options:(id)arg2 then:(CDUnknownBlockType)arg3;

- (void)SUCoreBorder_startDownload:(id)arg1 then:(CDUnknownBlockType)arg2;
- (void)SUCoreBorder_purge:(CDUnknownBlockType)arg1;
- (void)SUCoreBorder_cancelDownload:(CDUnknownBlockType)arg1;
- (void)SUCoreBorder_configDownload:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
