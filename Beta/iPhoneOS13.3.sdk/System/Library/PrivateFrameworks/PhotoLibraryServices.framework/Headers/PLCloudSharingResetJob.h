/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@interface PLCloudSharingResetJob : PLCloudSharingJob

+ (void)resetAllLocalState;

- (void)run;
- (void)runDaemonSide;
- (long long)daemonOperation;

@end
