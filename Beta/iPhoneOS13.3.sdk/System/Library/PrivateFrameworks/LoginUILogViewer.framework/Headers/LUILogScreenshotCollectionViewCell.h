/*
 Image: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
 */

#import <UIKitCore/UICollectionViewCell.h>

@class UIButton, UIImageView, UILabel;

@interface LUILogScreenshotCollectionViewCell : UICollectionViewCell

{
    UIImageView *_screenshotImageView;
    UILabel *_screenshotDateLabel;
    UIButton *_clearButton;
    CDUnknownBlockType _clearButtonAction;
}

@property (nonatomic, readonly) UIImageView *screenshotImageView;
@property (nonatomic, readonly) UILabel *screenshotDateLabel;
@property (nonatomic, readonly) UIButton *clearButton;
@property (copy, nonatomic) CDUnknownBlockType clearButtonAction;

- (void)_setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_createClearButton;
- (void)clearButtonTapped:(id)arg1;
- (id)_createScreenshotImageView;
- (id)_createScreenshotDateLabel;

@end
