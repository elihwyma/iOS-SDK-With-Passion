/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout;

__attribute__((visibility("hidden")))
@interface VUIProductUberBackgroundViewLayout : TVViewLayout

{
    long long _sizeClass;
    _Bool _isSport;
    TVImageLayout *_imageLayout;
}

@property (nonatomic, readonly) TVImageLayout *imageLayout;

+ (double)uberImageAspectRatioForWindowWidth:(double)arg1;
+ (id)layoutWithLayout:(id)arg1 element:(id)arg2 sizeClass:(long long)arg3 isSport:(_Bool)arg4;
+ (_Bool)uberImageShouldUseVerticalLayoutForWindowWidth:(double)arg1;
+ (_Bool)uberImageShouldUsePhoneImageForSizeClass:(long long)arg1;

- (id)initWithSizeClass:(long long)arg1 isSport:(_Bool)arg2;
- (void)updateWithSizeClass:(long long)arg1 isSport:(_Bool)arg2;

@end
