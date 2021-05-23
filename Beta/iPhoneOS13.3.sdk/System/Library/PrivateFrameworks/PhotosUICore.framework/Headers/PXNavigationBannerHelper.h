/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class UIViewController, _UINavigationControllerPalette;

@interface PXNavigationBannerHelper : NSObject

{
    _Bool _enabled;
    UIViewController *_viewController;
    _UINavigationControllerPalette *_palette;
}

@property (retain, nonatomic) _UINavigationControllerPalette *palette;
@property (weak, nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithViewController:(id)arg1;

@end
