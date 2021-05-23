/*
 Image: /System/Library/Frameworks/NewsstandKit.framework/NewsstandKit
 */

#import <Foundation/NSURLConnection.h>

@class NKAssetDownload;

@interface NSURLConnection (NKAssetDownloadAdditions)

@property (weak, readonly) NKAssetDownload *newsstandAssetDownload;

@end
