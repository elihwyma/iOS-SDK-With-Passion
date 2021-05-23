/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLPhotoLibraryForceExitObserver : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_photoLibraryCorruptNotification;
- (void)_photoLibraryForceClientExitNotification;

@end
