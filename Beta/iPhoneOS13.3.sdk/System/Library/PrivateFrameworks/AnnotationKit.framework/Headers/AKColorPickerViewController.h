/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIViewController.h>

@class AKColorPaletteView, AKController, NSString, UIColor;

@interface AKColorPickerViewController : UIViewController

{
    UIColor *_color;
    long long _colorAttributeTag;
    AKController *_controller;
    AKColorPaletteView *_colorPalette;
    long long _tag;
}

@property (weak, nonatomic) AKController *controller;
@property (retain, nonatomic) AKColorPaletteView *colorPalette;
@property (nonatomic) long long tag;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long colorAttributeTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)valueChanged:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)convertTextAttributes:(id)arg1;
- (void)syncTextAttributesToUI:(id)arg1;

@end
