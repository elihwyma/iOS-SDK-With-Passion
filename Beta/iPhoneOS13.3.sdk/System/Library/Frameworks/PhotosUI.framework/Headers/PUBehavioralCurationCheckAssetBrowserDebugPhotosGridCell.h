/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosGridCell.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface PUBehavioralCurationCheckAssetBrowserDebugPhotosGridCell : PUPhotosGridCell

{
    UILabel *_scoreLabel;
    NSString *_score;
}

@property (copy, nonatomic) NSString *score;

- (void)layoutSubviews;

@end
