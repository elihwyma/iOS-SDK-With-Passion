/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileViewController.h>

@class PUProgressIndicatorView;

__attribute__((visibility("hidden")))
@interface PULoadingIndicatorTileViewController : PUTileViewController

{
    long long _style;
    PUProgressIndicatorView *_indicatorView;
}

@property (retain, nonatomic) PUProgressIndicatorView *indicatorView;
@property (nonatomic) long long style;

+ (void)_destroyIndicatorView:(id)arg1;
+ (id)_createIndicatorViewForStyle:(long long)arg1;
+ (struct CGSize)loadingIndicatorTileSizeForStyle:(long long)arg1;

- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)becomeReusable;

@end
