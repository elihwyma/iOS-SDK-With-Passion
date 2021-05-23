/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDataSection.h>

@class PHFetchResult;

@interface PXFetchResultDataSection : PXDataSection

{
    PHFetchResult *_fetchResult;
}

@property (nonatomic, readonly) PHFetchResult *fetchResult;

- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(long long)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)initWithOutlineObject:(id)arg1;
- (id)initWithFetchResult:(id)arg1;

@end
