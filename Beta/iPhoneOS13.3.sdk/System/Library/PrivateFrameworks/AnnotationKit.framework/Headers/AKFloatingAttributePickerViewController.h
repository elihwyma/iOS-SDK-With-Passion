/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIViewController.h>

@class AKColorPaletteView, AKController, NSArray, NSString, UIBarButtonItem, UIColor, UIToolbar, UIView;

@interface AKFloatingAttributePickerViewController : UIViewController

{
    UIToolbar *_toolbar;
    UIColor *_color;
    long long _colorAttributeTag;
    AKController *_controller;
    AKColorPaletteView *_colorPalette;
    UIBarButtonItem *_colorPaletteButtonItem;
    UIView *_separatorView;
    NSArray *_staticItems;
    NSArray *_rightButtonItems;
    long long _tag;
}

@property (weak, nonatomic) AKController *controller;
@property (retain, nonatomic) AKColorPaletteView *colorPalette;
@property (retain, nonatomic) UIToolbar *toolbar;
@property (retain, nonatomic) UIBarButtonItem *colorPaletteButtonItem;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) NSArray *staticItems;
@property (retain, nonatomic) NSArray *rightButtonItems;
@property (nonatomic) long long tag;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long colorAttributeTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)valueChanged:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)convertTextAttributes:(id)arg1;
- (void)syncTextAttributesToUI:(id)arg1;
- (void)setRightButtonItems:(id)arg1 animated:(_Bool)arg2;

@end
