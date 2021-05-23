/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, PUCropAspect, PUCropToolControllerSpec, UIScrollView, UIView;

@protocol PUCropAspectViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUCropAspectViewController : UIViewController

{
    PUCropAspect *_currentCropAspect;
    id <PUCropAspectViewControllerDelegate> _delegate;
    long long _aspectOrientation;
    long long _layoutOrientation;
    UIView *_scrollExtraLeftView;
    UIView *_scrollViewContainer;
    UIView *_buttonContainer;
    UIScrollView *_scrollView;
    NSArray *_aspectButtons;
    NSArray *_allAspectRatios;
    PUCropToolControllerSpec *_spec;
    NSArray *_aspectConstraints;
    struct CGSize _currentCropSize;
    struct CGSize _originalSize;
}

@property (retain, nonatomic) UIView *scrollViewContainer;
@property (retain, nonatomic) UIView *buttonContainer;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSArray *aspectButtons;
@property (retain, nonatomic) NSArray *allAspectRatios;
@property (nonatomic) struct CGSize originalSize;
@property (retain, nonatomic) PUCropToolControllerSpec *spec;
@property (retain, nonatomic) NSArray *aspectConstraints;
@property (nonatomic) struct CGSize currentCropSize;
@property (retain, nonatomic) PUCropAspect *currentCropAspect;
@property (weak, nonatomic) id <PUCropAspectViewControllerDelegate> delegate;
@property (nonatomic) long long aspectOrientation;
@property (nonatomic) long long layoutOrientation;
@property (retain, nonatomic) UIView *scrollExtraLeftView;

- (void)viewDidLoad;
- (id)initWithLayoutOrientation:(long long)arg1 originalSize:(struct CGSize)arg2 currentSize:(struct CGSize)arg3 currentCropAspect:(id)arg4 spec:(id)arg5;
- (void)updateAspectButtonSelection;
- (id)matchingCropAspectTo:(id)arg1;
- (void)updateAspectButtons;
- (void)updateAspectConstraints;
- (void)aspectButtonPressed:(id)arg1;

@end
