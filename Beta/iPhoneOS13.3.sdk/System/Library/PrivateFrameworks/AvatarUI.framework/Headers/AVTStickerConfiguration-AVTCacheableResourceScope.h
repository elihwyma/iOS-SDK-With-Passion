/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarKit/AVTStickerConfiguration.h>

@class NSString;

@interface AVTStickerConfiguration (AVTCacheableResourceScope)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)cacheableResourceAssociatedIdentifier;
- (unsigned long long)cacheableResourceAssociatedCost;

@end
