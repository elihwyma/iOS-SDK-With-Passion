/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UIView, WFColorPicker, WFGlyphPicker, WFIconComposePreviewView, WFWorkflow;

@interface WFIconComposeViewController : UIViewController

{
    WFWorkflow *_workflow;
    WFIconComposePreviewView *_iconView;
    WFColorPicker *_colorPicker;
    WFGlyphPicker *_glyphPicker;
    UIView *_topSeperator;
    UIView *_bottomSeparator;
}

@property (weak, nonatomic) WFIconComposePreviewView *iconView;
@property (weak, nonatomic) WFColorPicker *colorPicker;
@property (weak, nonatomic) WFGlyphPicker *glyphPicker;
@property (weak, nonatomic) UIView *topSeperator;
@property (weak, nonatomic) UIView *bottomSeparator;
@property (retain, nonatomic) WFWorkflow *workflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)glyphPicker:(id)arg1 didSelectGlyphWithCharacter:(unsigned short)arg2;
- (void)colorPicker:(id)arg1 didSelectColor:(id)arg2;
- (void)pickedSegment:(id)arg1;
- (void)saveIcon:(id)arg1;
- (void)updateAccessibilityValue;

@end
