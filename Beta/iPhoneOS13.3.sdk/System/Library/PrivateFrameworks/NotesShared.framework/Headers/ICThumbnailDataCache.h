/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class ICCache;

@interface ICThumbnailDataCache : NSObject

{
    ICCache *_imageCache;
}

@property (retain, nonatomic) ICCache *imageCache;

- (id)init;
- (void)removeThumbnailDataForKey:(id)arg1;
- (void)setThumbnailData:(id)arg1 forKey:(id)arg2;
- (id)thumbnailDataForKey:(id)arg1;
- (void)removeAllThumbnailData;

@end
