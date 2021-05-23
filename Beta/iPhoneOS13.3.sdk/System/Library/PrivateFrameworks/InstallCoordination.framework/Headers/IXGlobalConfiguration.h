/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface IXGlobalConfiguration : NSObject

{
    struct os_unfair_lock_s _dynamicPropertyLock;
    NSURL *_systemContainerPath;
    NSURL *_mobileHome;
    NSURL *_rootPath;
}

@property (nonatomic, readonly) NSURL *mobileHome;
@property (nonatomic, readonly) NSURL *rootPath;
@property (nonatomic, readonly) NSURL *systemContainerPath;
@property (nonatomic, readonly) NSURL *oldSupportDirectory;
@property (nonatomic, readonly) NSURL *frameworkURL;
@property (nonatomic, readonly) NSURL *userVolumeURL;

+ (id)sharedInstance;

- (id)init;
- (void)createDirectories;
- (id)_systemContainerURLWithError:(id *)arg1;
- (id)dataDirectoryWithError:(id *)arg1;
- (id)promiseStagingRootDirectoryWithError:(id *)arg1;
- (id)dataDirectoryAbortingOnError;
- (id)promiseStagingRootDirectoryAbortingOnError;

@end
