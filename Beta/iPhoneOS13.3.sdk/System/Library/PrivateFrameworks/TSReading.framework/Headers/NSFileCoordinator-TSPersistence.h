/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSFileCoordinator.h>

@interface NSFileCoordinator (TSPersistence)

+ (_Bool)tsp_coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 filePresenter:(id)arg3 error:(id *)arg4 byAccessor:(CDUnknownBlockType)arg5;
+ (void)tsp_addFilePresenter:(id)arg1;
+ (void)tsp_removeFilePresenter:(id)arg1;
+ (_Bool)tsp_coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 filePresenter:(id)arg5 error:(id *)arg6 byAccessor:(CDUnknownBlockType)arg7;
+ (_Bool)tsp_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 filePresenter:(id)arg3 error:(id *)arg4 byAccessor:(CDUnknownBlockType)arg5;
+ (_Bool)tsp_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 filePresenter:(id)arg5 error:(id *)arg6 byAccessor:(CDUnknownBlockType)arg7;

@end
