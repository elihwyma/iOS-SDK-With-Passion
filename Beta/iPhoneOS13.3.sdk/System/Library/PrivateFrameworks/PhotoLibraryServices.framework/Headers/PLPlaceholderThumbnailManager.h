/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSCache;

@protocol OS_dispatch_queue;

@interface PLPlaceholderThumbnailManager : NSObject

{
    NSCache *_placeholderDataCache;
    NSCache *_placeholderImageCache;
    NSObject<OS_dispatch_queue> *_isolation;
}

+ (id)sharedManager;

- (id)init;
- (id)placeholderDataForFormat:(unsigned short)arg1 photoImageSize:(struct CGSize)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
- (id)_cacheKeyForFormat:(id)arg1 photoImageSize:(struct CGSize)arg2 photoImageColor:(struct NSObject *)arg3;
- (struct NSObject *)newPlaceholderImageForFormat:(unsigned short)arg1 photoImageSize:(struct CGSize)arg2;
- (struct NSObject *)_placeholderImageWithColor:(struct NSObject *)arg1;

@end
