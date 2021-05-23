/*
 Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface IMTranscriptBubbleSizeCache : NSObject

{
    NSMutableArray *_sizeCache;
}

@property (retain) NSMutableArray *sizeCache;

- (id)init;
- (void)flush;
- (id)_cacheEntryForMaximumWidth:(double)arg1 getEffectiveIndex:(unsigned long long *)arg2;
- (void)_insertCacheEntry:(id)arg1;
- (struct CGSize)sizeForMaximumWidth:(double)arg1;
- (void)setSize:(struct CGSize)arg1 forMaximumWidth:(double)arg2;

@end
