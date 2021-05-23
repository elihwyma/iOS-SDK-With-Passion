/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSPredicate;

@interface PLPairingProcessor : NSObject

{
    NSPredicate *_locatedInUsersPhotoLibrary;
}

@property (retain, nonatomic) NSPredicate *locatedInUsersPhotoLibrary;

- (id)init;
- (id)groupIDForAsset:(id)arg1;
- (id)firstGroupFromAssets:(id)arg1;
- (id)combinePairs:(id)arg1 error:(id *)arg2;
- (id)fetchRequestForSortedGroupIDs:(id)arg1;
- (_Bool)_copyResourceOfType:(unsigned int)arg1 onAsset:(id)arg2 toType:(unsigned int)arg3 onAsset:(id)arg4 error:(id *)arg5;
- (_Bool)updatePrimaryAsset:(id)arg1 andRemoveAssetIfPossible:(id)arg2;
- (id)processPairingForGroupIDs:(id)arg1 duplicateDetection:(_Bool)arg2 inContext:(id)arg3 error:(id *)arg4;
- (_Bool)_copyFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (void)_deleteResourceOfType:(unsigned int)arg1 forAsset:(id)arg2 verifyInserted:(_Bool)arg3 deleteFile:(_Bool)arg4;

@end
