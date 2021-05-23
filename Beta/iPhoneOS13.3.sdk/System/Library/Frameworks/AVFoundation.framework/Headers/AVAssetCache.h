/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@interface AVAssetCache : NSObject

@property (nonatomic, readonly, getter=isPlayableOffline) _Bool playableOffline;

+ (id)assetCacheWithURL:(id)arg1;

- (id)allKeys;
- (id)initWithURL:(id)arg1;
- (id)_init;
- (id)URL;
- (long long)maxSize;
- (id)lastModifiedDateOfEntryForKey:(id)arg1;
- (void)removeEntryForKey:(id)arg1;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;
- (long long)maxEntrySize;
- (long long)currentSize;
- (long long)sizeOfEntryForKey:(id)arg1;

@end
