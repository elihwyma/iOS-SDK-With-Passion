/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSPredicate;

@interface PLPairing : NSObject

{
    NSPredicate *_locatedInUsersPhotoLibrary;
    struct os_unfair_lock_s _lock;
}

+ (id)getMetadataForAsset:(id)arg1;

- (id)init;
- (_Bool)processPairingForGroupIDs:(id)arg1 inContext:(id)arg2 duplicateDetection:(_Bool)arg3 error:(id *)arg4;

@end
