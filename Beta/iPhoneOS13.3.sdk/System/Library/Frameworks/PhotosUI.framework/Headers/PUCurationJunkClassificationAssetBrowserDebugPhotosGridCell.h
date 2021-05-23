/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosGridCell.h>

@class NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface PUCurationJunkClassificationAssetBrowserDebugPhotosGridCell : PUPhotosGridCell

{
    UILabel *_scoreLabel;
    NSString *_score;
    UIColor *_color;
}

@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) UIColor *color;

- (void)layoutSubviews;

@end
