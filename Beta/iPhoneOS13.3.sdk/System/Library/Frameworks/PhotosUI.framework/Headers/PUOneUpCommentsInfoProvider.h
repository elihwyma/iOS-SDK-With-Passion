/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUOneUpCommentsInfoProvider : NSObject

+ (unsigned long long)commentCountForDisplayAsset:(id)arg1;
+ (unsigned long long)likeCountForDisplayAsset:(id)arg1;
+ (_Bool)hasUserLikedDisplayAsset:(id)arg1;
+ (void)toggleLike:(_Bool)arg1 forDisplayAsset:(id)arg2;
+ (_Bool)_canHandleDisplayAsset:(id)arg1;

@end
