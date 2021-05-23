/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TSDFrameImageCache : NSObject

{
    NSMutableArray *mEntries;
}

+ (id)sharedFrameImageCache;

- (id)init;
- (void)dealloc;
- (void)didCloseDocument;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (struct CGImage *)newCachedImageForFrame:(id)arg1 size:(struct CGSize)arg2 viewScale:(double)arg3 forCALayer:(_Bool)arg4 mask:(_Bool)arg5;
- (struct CGImage *)setCachedImage:(struct CGImage *)arg1 forFrame:(id)arg2 size:(struct CGSize)arg3 viewScale:(double)arg4 forCALayer:(_Bool)arg5 mask:(_Bool)arg6;
- (id)p_newEntryForFrame:(id)arg1 size:(struct CGSize)arg2 viewScale:(double)arg3 createIfNeeded:(_Bool)arg4;

@end
