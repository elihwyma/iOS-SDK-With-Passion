/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPortraitOnlyNavigationController.h>

@class CNPhotoPickerTrapView, NSArray;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerNavigationViewController : CNPortraitOnlyNavigationController

{
    _Bool _allowRotation;
    _Bool _disablingRotation;
    CNPhotoPickerTrapView *_trapOverlayView;
    NSArray *_trapOverlayConstraints;
    struct CGSize _previousSize;
}

@property (retain, nonatomic) CNPhotoPickerTrapView *trapOverlayView;
@property (retain, nonatomic) NSArray *trapOverlayConstraints;
@property (nonatomic) struct CGSize previousSize;
@property (nonatomic) _Bool disablingRotation;
@property (nonatomic) _Bool allowRotation;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithRootViewController:(id)arg1;
- (void)endDisablingAutorotation;
- (void)beginDisablingAutorotation;
- (_Bool)shouldDisplayTrapOverlayView;
- (void)setupTrapOverlayView;
- (void)updateTrapOverlayViewIfNecessaryWithCoordinator:(id)arg1;

@end
