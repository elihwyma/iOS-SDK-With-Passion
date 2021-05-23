/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@interface AVTStickerRecentsOverlayViewLayout : NSObject

{
    double _imageToTopPadding;
    double _imageToTitlePadding;
    double _titleToSubtitlePadding;
    double _subtitleToButtonPadding;
    double _imageHeight;
    double _horizontalEdgePadding;
}

@property (nonatomic, readonly) double imageToTopPadding;
@property (nonatomic, readonly) double imageToTitlePadding;
@property (nonatomic, readonly) double titleToSubtitlePadding;
@property (nonatomic, readonly) double subtitleToButtonPadding;
@property (nonatomic, readonly) double imageHeight;
@property (nonatomic, readonly) double horizontalEdgePadding;

+ (id)standardPortraitLayout;
+ (id)standardLandscapeLayout;
+ (id)buttonsPortraitLayout;
+ (id)buttonsLandscapeLayout;

- (id)initWithImageToTopPadding:(double)arg1 imageToTitlePadding:(double)arg2 titleToSubtitlePadding:(double)arg3 subtitleToButtonPadding:(double)arg4 imageHeight:(double)arg5 horizontalEdgePadding:(double)arg6;

@end
