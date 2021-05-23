/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, PUPhotoEditToolPickerSpec, PUViewControllerSpec, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotoEditToolPickerController : UIViewController

{
    long long _layoutDirection;
    long long _style;
    NSArray *_toolButtons;
    long long _selectedToolTag;
    PUViewControllerSpec *_parentSpec;
    NSArray *_toolButtonConstraints;
    UIView *_selectionIndicatorView;
    NSArray *_selectionIndicatorConstraints;
    double _interToolSpacing;
    PUPhotoEditToolPickerSpec *_toolPickerSpec;
}

@property (retain, nonatomic) NSArray *toolButtonConstraints;
@property (retain, nonatomic) UIView *selectionIndicatorView;
@property (retain, nonatomic) NSArray *selectionIndicatorConstraints;
@property (nonatomic) double interToolSpacing;
@property (retain, nonatomic) PUPhotoEditToolPickerSpec *toolPickerSpec;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSArray *toolButtons;
@property (nonatomic) long long selectedToolTag;
@property (retain, nonatomic) PUViewControllerSpec *parentSpec;

- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateViewConstraints;
- (id)initWithLayoutDirection:(long long)arg1 style:(long long)arg2;
- (void)createSelectionIndicatorView;
- (void)updateSelectionIndicatorConstraints;

@end
