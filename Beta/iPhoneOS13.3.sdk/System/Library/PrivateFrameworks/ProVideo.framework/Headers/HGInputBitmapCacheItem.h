/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface HGInputBitmapCacheItem : NSObject

{
    NSDate *_lastUsedTime;
    struct CGSize _fullSize;
    vector_bfafc335 _bitmaps;
}

@property (nonatomic, readonly) vector_bfafc335 bitmaps;
@property (nonatomic, readonly) NSDate *lastUsedTime;
@property (nonatomic, readonly) struct CGSize fullSize;

- (id).cxx_construct;
- (void)updateLastUsedTime;
- (id)initWithHGBitmap:(vector_bfafc335 *)arg1 fullSize:(struct CGSize)arg2;

@end
