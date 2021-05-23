/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableIndexSet;

@protocol OS_dispatch_queue;

@interface PLThumbnailIndexes : NSObject

{
    NSObject<OS_dispatch_queue> *_isolation;
    NSMutableIndexSet *_unusedIndexes;
    long long _usedMax;
    unsigned long long _fetchTimestamp;
}

+ (void)getAvailableThumbnailIndexesInLibrary:(id)arg1 withCount:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)getAvailableThumbnailIndexInLibrary:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
+ (unsigned long long)nextAvailableThumbnailIndexInLibrary:(id)arg1;
+ (void)recycleThumbnailIndexes:(id)arg1 inLibrary:(id)arg2;
+ (void)recycleThumbnailIndexes:(id)arg1 inLibrary:(id)arg2 timestamp:(unsigned long long)arg3;

- (id)init;
- (void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2;
- (id)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 inLibrary:(id)arg2;
- (void)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 inLibrary:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)getAvailableThumbnailIndexesFromLibrary:(id)arg1;
- (id)fetchOccupiedThumbnailIndexesWithLibrary:(id)arg1;

@end
