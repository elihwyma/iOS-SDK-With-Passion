/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIViewController.h>

@protocol PKPaletteErasingAttributesViewControllerDelegate;

@interface PKPaletteErasingAttributesViewController : UIViewController

{
    id <PKPaletteErasingAttributesViewControllerDelegate> _delegate;
}

@property (nonatomic) long long eraserType;
@property (weak, nonatomic) id <PKPaletteErasingAttributesViewControllerDelegate> delegate;

+ (double)_preferredContentSizeWidth;

- (void)loadView;
- (struct CGSize)preferredContentSize;
- (_Bool)_canShowWhileLocked;
- (void)_segmentedControlDidChangeValue:(id)arg1;

@end
