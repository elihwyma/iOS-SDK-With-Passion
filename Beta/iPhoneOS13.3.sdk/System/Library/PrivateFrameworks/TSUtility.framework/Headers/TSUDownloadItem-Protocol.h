/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <TSUtility/Swift-Protocol.h>

@class NSString, NSURL;

@protocol TSUDownloadItem <Swift>

@property (nonatomic, readonly) NSString *downloadTaskDescription;
@property (nonatomic, readonly) NSURL *downloadURL;
@property (nonatomic, readonly) long long totalBytesExpectedToBeDownloaded;
@property (nonatomic, readonly) _Bool needsDownload;

+ (unsigned short)canHandleDownloadTask: /* Error: Ran out of types for this method. */;
+ (unsigned short)downloadManager:task:didFinishDownloadingToURL: /* Error: Ran out of types for this method. */;
+ (unsigned short)downloadManager:task:didCompleteWithError: /* Error: Ran out of types for this method. */;

@end
