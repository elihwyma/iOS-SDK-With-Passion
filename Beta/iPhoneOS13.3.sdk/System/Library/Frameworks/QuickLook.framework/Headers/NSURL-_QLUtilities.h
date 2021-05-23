/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSURL.h>

#import <QuickLook/Swift-Protocol.h>

@class NSString;

@interface NSURL (_QLUtilities) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (nonatomic, readonly) NSString *previewItemTitle;

+ (id)_QLTemporaryFileURLWithContentType:(id)arg1 uuid:(id)arg2;
+ (void)_QLTemporaryFileURLWithContentType:(id)arg1 forOriginalFileAtURL:(id)arg2 temporaryFileURL:(id *)arg3 temporaryDirectoryURL:(id *)arg4 fallbackUUID:(id)arg5;
+ (id)_QLTemporaryFileURLWithContentType:(id)arg1 filename:(id)arg2;
+ (id)_QLCreateTemporaryDirectory:(id *)arg1;
+ (id)_QLCreateTemporaryDirectoryForOriginalFileAtURL:(id)arg1 error:(id *)arg2;

- (_Bool)_QLNeedsDownload;
- (id)_QLUrlFileSize;
- (_Bool)_QLIsPackageURL;
- (id)_QLSingleFileSizeForURL:(id)arg1;
- (_Bool)_QLNeedsCoordination;
- (_Bool)_QLIsHiddenFile;

@end
