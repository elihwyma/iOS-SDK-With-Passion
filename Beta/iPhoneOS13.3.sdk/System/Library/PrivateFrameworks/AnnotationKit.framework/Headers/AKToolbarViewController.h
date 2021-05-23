/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIViewController.h>

@class AKController;

@interface AKToolbarViewController : UIViewController

{
    AKController *_controller;
}

@property (weak) AKController *controller;
@property (readonly) _Bool isPresentingPopover;

+ (id)imageForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (id)_imageNameForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (id)titleForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (id)alternateImageForToolbarButtonItemOfType:(unsigned long long)arg1;
+ (long long)buttonTypeForToolbarButtonItemOfType:(unsigned long long)arg1;

- (void)teardown;
- (id)initWithController:(id)arg1;
- (void)revalidateItems;
- (void)setFillColorUIDisplayToColor:(id)arg1;
- (void)setStrokeColorUIDisplayToColor:(id)arg1;
- (id)_toolbarButtonItemOfType:(unsigned long long)arg1;

@end
