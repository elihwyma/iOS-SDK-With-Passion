/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@class CPLProxyLibraryManager;

@interface CPLProxyResourceTransferTask : CPLResourceTransferTask

{
    CPLProxyLibraryManager *_proxyLibraryManager;
}

@property (retain, nonatomic) CPLProxyLibraryManager *proxyLibraryManager;

- (void)cancelTask;

@end
