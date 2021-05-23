/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UITableViewController.h>

@class AKController, AKFontChooserUIItemDelegate, AKFontListController, AKTextAttributesUIItemDelegate, NSNumber, NSString, UIColor, UITableViewCell;

@interface AKTextAttributesViewController : UITableViewController

{
    UITableViewCell *_sizeTableCell;
    UITableViewCell *_alignmentTableCell;
    UIColor *_currentFontColor;
    NSString *_currentFontFamilyName;
    NSNumber *_currentFontSize;
    id _currentAlignment;
    id _currentStyle;
    AKController *_controller;
    AKFontListController *_presetFontController;
    long long _lastActionID;
    id _lastActionValue;
    AKFontChooserUIItemDelegate *_fontUIItemDelegate;
    AKTextAttributesUIItemDelegate *_textAttributesUIItemDelegate;
}

@property (retain, nonatomic) UITableViewCell *sizeTableCell;
@property (retain, nonatomic) UITableViewCell *alignmentTableCell;
@property (retain, nonatomic) UIColor *currentFontColor;
@property (retain, nonatomic) NSString *currentFontFamilyName;
@property (retain, nonatomic) NSNumber *currentFontSize;
@property (nonatomic) id currentAlignment;
@property (nonatomic) id currentStyle;
@property (weak, nonatomic) AKController *controller;
@property (retain, nonatomic) AKFontListController *presetFontController;
@property long long lastActionID;
@property (retain) id lastActionValue;
@property (retain, nonatomic) AKFontChooserUIItemDelegate *fontUIItemDelegate;
@property (retain, nonatomic) AKTextAttributesUIItemDelegate *textAttributesUIItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)fontSizeNumberFormatter;

- (void)_commonInit;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithController:(id)arg1;
- (id)convertTextAttributes:(id)arg1;
- (void)syncTextAttributesToUI:(id)arg1;
- (id)convertFont:(id)arg1;
- (void)syncFontsToUI:(id)arg1;
- (_Bool)validateUserInterfaceItems;
- (id)createRowFontSizeCell;
- (id)createRowAlignmentCell;
- (void)didSelectFont:(id)arg1;
- (void)_sizeStepperValueChanged:(id)arg1;
- (void)_alignmentSegmentChanged:(id)arg1;
- (void)_sendFontAction;
- (void)_sendTextAttributesAction;
- (void)_styleSegmentChanged:(id)arg1;

@end
