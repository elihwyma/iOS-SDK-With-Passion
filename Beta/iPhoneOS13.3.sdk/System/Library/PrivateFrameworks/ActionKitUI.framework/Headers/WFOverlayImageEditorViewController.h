/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSLayoutConstraint, NSMapTable, WFFileRepresentation, WFImage, WFOpacitySliderView, WFOverlayImageEditorCanvasView, WFOverlayImageEditorOptionsView;

__attribute__((visibility("hidden")))
@interface WFOverlayImageEditorViewController : UIViewController

{
    WFImage *_overlayImage;
    NSArray *_fileRepresentations;
    WFFileRepresentation *_currentFile;
    NSMapTable *_transforms;
    CDUnknownBlockType _completionHandler;
    WFOverlayImageEditorOptionsView *_optionsView;
    WFOverlayImageEditorCanvasView *_canvasView;
    WFOpacitySliderView *_opacityView;
    NSLayoutConstraint *_opacityViewVerticalConstraint;
}

@property (retain, nonatomic) WFImage *overlayImage;
@property (copy, nonatomic) NSArray *fileRepresentations;
@property (retain, nonatomic) WFFileRepresentation *currentFile;
@property (retain, nonatomic) NSMapTable *transforms;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (weak, nonatomic) WFOverlayImageEditorOptionsView *optionsView;
@property (weak, nonatomic) WFOverlayImageEditorCanvasView *canvasView;
@property (weak, nonatomic) WFOpacitySliderView *opacityView;
@property (retain, nonatomic) NSLayoutConstraint *opacityViewVerticalConstraint;
@property (nonatomic) _Bool rotationEnabled;
@property (nonatomic) _Bool opacitySliderVisible;

- (void)loadView;
- (void)viewDidLoad;
- (_Bool)prefersStatusBarHidden;
- (id)editorBackgroundColor;
- (void)resetOverlayImageViewTransformations;
- (void)cancelEditingImage;
- (void)finishEditingImage;
- (id)initWithFileRepresentations:(id)arg1 overlayImage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)didChangeOpacity:(id)arg1;

@end
