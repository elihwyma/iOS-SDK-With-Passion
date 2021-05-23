/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSOperation.h>

@class PHFetchResult, PHPhotoLibrary;

@interface PHPersonResetOperation : NSOperation

{
    PHPhotoLibrary *_library;
    _Bool _shouldResetPhotoAnalysis;
    unsigned long long _batchSize;
    PHFetchResult *_personsToDelete;
    unsigned long long _totalPersonsToDelete;
    unsigned long long _deletedPersons;
    PHFetchResult *_facesToDelete;
    unsigned long long _totalFacesToDelete;
    unsigned long long _deletedFaces;
    _Bool _shouldDeleteAllFaceCrops;
    PHFetchResult *_faceCropsToDelete;
    unsigned long long _totalFaceCropsToDelete;
    unsigned long long _deletedFaceCrops;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _progressHandler;
}

+ (id)resetOperationsForPersons:(id)arg1 batchSize:(unsigned long long)arg2 photoLibrary:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (id)resetAllPersonsOperationWithBatchSize:(unsigned long long)arg1 shouldResetPhotoAnalysis:(_Bool)arg2 photoLibrary:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;

- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithPersonsToDelete:(id)arg1 facesToDelete:(id)arg2 shouldDeleteAllFaceCrops:(_Bool)arg3 shouldResetPhotoAnalysis:(_Bool)arg4 batchSize:(unsigned long long)arg5 photoLibrary:(id)arg6 progressHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)_enumerateFetchResult:(id)arg1 withBatchSize:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_prepareToDeleteFaceCrops;

@end
