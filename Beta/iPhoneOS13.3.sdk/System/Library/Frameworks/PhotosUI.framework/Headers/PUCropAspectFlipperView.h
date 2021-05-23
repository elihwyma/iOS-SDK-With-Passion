/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSArray, UIButton;

@protocol PUCropAspectViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUCropAspectFlipperView : UIView

{
    UIButton *_horizontalAspectButton;
    UIButton *_verticalAspectButton;
    NSArray *_layoutConstraints;
    _Bool _enabled;
    id <PUCropAspectViewControllerDelegate> _delegate;
    long long _aspectRatioOrientation;
    long long _layoutOrientation;
}

@property (weak, nonatomic) id <PUCropAspectViewControllerDelegate> delegate;
@property (nonatomic) long long aspectRatioOrientation;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic) _Bool enabled;

- (id)initWithLayoutOrientation:(long long)arg1;
- (void)aspectRatioButtonPressed:(id)arg1;

@end
