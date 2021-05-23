/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, UIImage;

@interface WBSBookmarkFolderTouchIconProviderInfo : NSObject

{
    NSArray *_thumbnailImages;
    NSArray *_backgroundColors;
    UIImage *_touchIcon;
}

@property (copy, nonatomic, readonly) NSArray *thumbnailImages;
@property (copy, nonatomic, readonly) NSArray *backgroundColors;
@property (nonatomic, readonly) UIImage *touchIcon;

+ (id)new;

- (id)init;
- (id)initWithThumbnailImages:(id)arg1 backgroundColors:(id)arg2 touchIcon:(id)arg3;

@end
