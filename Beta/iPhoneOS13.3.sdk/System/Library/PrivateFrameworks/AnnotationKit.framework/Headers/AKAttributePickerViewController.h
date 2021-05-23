/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIViewController.h>

@class AKController, NSArray, NSSet, NSString, UITableView;

@protocol AKAttributePickerViewControllerDelegate;

@interface AKAttributePickerViewController : UIViewController

{
    AKController *_controller;
    id <AKAttributePickerViewControllerDelegate> _delegate;
    NSSet *_selectedAnnotations;
    UITableView *_tableView;
    NSArray *_rowViews;
}

@property (weak) AKController *controller;
@property (retain) UITableView *tableView;
@property (retain) NSArray *rowViews;
@property (weak, nonatomic) id <AKAttributePickerViewControllerDelegate> delegate;
@property (retain, nonatomic) NSSet *selectedAnnotations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)_updatePreferredContentSize;
- (_Bool)_canShowWhileLocked;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)revalidateItems;
- (id)initWithController:(id)arg1 selectedAnnotations:(id)arg2;
- (void)updateLayoutForSelectedAnnotations;
- (void)_lineAttributesChanged:(id)arg1;
- (void)_attributeStyleChanged:(id)arg1;

@end
