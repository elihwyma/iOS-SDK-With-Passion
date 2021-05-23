/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/AVTInMemoryResourceCache.h>

@class NSString;

@interface AVTInMemoryImageCache : AVTInMemoryResourceCache

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)imageForItem:(id)arg1 scope:(id)arg2;
- (id)imageForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(CDUnknownBlockType)arg3;
- (id)initWithLockProvider:(CDUnknownBlockType)arg1 logger:(id)arg2;

@end
