/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface PLCloudPhotoLibraryUploadTracker : NSObject

{
    unsigned long long _totalNumberOfUnpushedMasters;
    unsigned long long _totalNumberOfPushedMasters;
    unsigned long long _totalNumberOfUploadedMasters;
    unsigned long long _totalSizeOfUnpushedOriginals;
    unsigned long long _totalSizeOfPushedOriginals;
    unsigned long long _totalUploadedOriginalSize;
    NSMutableSet *_mastersToUpload;
    NSMutableDictionary *_trackedResourceProgressSize;
    NSMutableDictionary *_trackedResourceMasterUploaded;
}

@property unsigned long long totalNumberOfUnpushedMasters;
@property unsigned long long totalNumberOfUploadedMasters;
@property unsigned long long totalSizeOfUnpushedOriginals;
@property unsigned long long totalUploadedOriginalSize;

- (id)init;
- (void)dealloc;
- (void)reset;
- (id)_constructKeyForScopedIdentifier:(id)arg1 type:(int)arg2;
- (void)stopTrackingScopedIdentifier:(id)arg1;
- (void)stopTrackingResourceWithScopedIdentifier:(id)arg1 fileSize:(unsigned long long)arg2 type:(int)arg3;
- (void)uploadFinishedForScopedIdentifier:(id)arg1 fileSize:(unsigned long long)arg2 type:(int)arg3 withError:(_Bool)arg4;
- (void)updateForScopedIdentifier:(id)arg1 progress:(float)arg2 fileSize:(unsigned long long)arg3 type:(int)arg4;
- (void)addSizeForUnpushedOriginals:(unsigned long long)arg1 forScopedIdentifier:(id)arg2;
- (_Bool)trackingScopedIdentifier:(id)arg1;
- (void)setupFromLibrary:(id)arg1;
- (void)setupFromCPLManager:(id)arg1;
- (void)resetIfNeeded;

@end
