/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIListLockupCollectionViewCellLayout : TVViewLayout

{
    long long _imagePosition;
    VUITextLayout *_titleTextLayout;
    VUITextLayout *_subtitleTextLayout;
    VUITextLayout *_descriptionTextLayout;
    TVImageLayout *_imageLayout;
    TVImageLayout *_appIconLayout;
    TVImageLayout *_monogramImageLayout;
}

@property (nonatomic) long long imagePosition;
@property (retain, nonatomic) VUITextLayout *titleTextLayout;
@property (retain, nonatomic) VUITextLayout *subtitleTextLayout;
@property (retain, nonatomic) VUITextLayout *descriptionTextLayout;
@property (retain, nonatomic) TVImageLayout *imageLayout;
@property (retain, nonatomic) TVImageLayout *appIconLayout;
@property (retain, nonatomic) TVImageLayout *monogramImageLayout;

+ (struct CGSize)_defaultImageSize;
+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
+ (struct CGSize)_defaultAppIconSize;

- (id)init;

@end
