/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <ITMLKit/IKImageElement.h>

@interface IKImageElement (VideosExtrasAdditions)

@property (nonatomic, readonly) _Bool vui_hasValidImage;

- (long long)accessoryType;
- (id)cachePath;
- (id)bestURL;
- (id)artworkCatalog;
- (id)resourceImage;

@end
