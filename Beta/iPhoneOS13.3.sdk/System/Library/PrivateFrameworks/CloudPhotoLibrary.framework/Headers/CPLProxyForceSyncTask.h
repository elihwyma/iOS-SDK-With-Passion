/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLForceSyncTask.h>

@class CPLProxyLibraryManager;

@interface CPLProxyForceSyncTask : CPLForceSyncTask

{
    CPLProxyLibraryManager *_proxyLibraryManager;
}

@property (retain, nonatomic) CPLProxyLibraryManager *proxyLibraryManager;

- (void)cancelTask;

@end
