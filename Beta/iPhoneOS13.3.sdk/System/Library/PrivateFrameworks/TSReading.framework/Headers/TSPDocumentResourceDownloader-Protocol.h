/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@protocol TSPDocumentResourceDownloader <Swift>

@property (nonatomic, readonly) _Bool needsDownload;
@property (nonatomic, readonly) long long estimatedDownloadSize;
@property (nonatomic, readonly) _Bool isEstimatedDownloadSizePrecise;

@end
