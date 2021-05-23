/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewController.h>

@class NSArray, NSMutableArray, UIAlertControllerVisualStyle, UICollectionViewFlowLayout;

@protocol _UIAlertControllerTextFieldViewControllerContaining;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTextFieldViewController : UICollectionViewController

{
    NSMutableArray *textFieldViews;
    NSMutableArray *textFields;
    _Bool _textFieldsCanBecomeFirstResponder;
    UIAlertControllerVisualStyle *_visualStyle;
    UICollectionViewFlowLayout *_collectionViewLayout;
    _Bool _hidden;
    id <_UIAlertControllerTextFieldViewControllerContaining> _container;
}

@property (weak, nonatomic) id <_UIAlertControllerTextFieldViewControllerContaining> container;
@property (nonatomic) _Bool textFieldsCanBecomeFirstResponder;
@property (nonatomic) UIAlertControllerVisualStyle *visualStyle;
@property (readonly) NSArray *textFields;
@property (nonatomic, getter=isHidden) _Bool hidden;

- (id)init;
- (id)textFieldAtIndex:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)updateTextFieldStyle;
- (void)_returnKeyPressedInTextField:(id)arg1;
- (void)_updatePreferredContentSize;
- (long long)numberOfTextFields;
- (double)_bottomMarginForTextFields;
- (_Bool)resignFirstResponder;
- (id)addTextFieldWithPlaceholder:(id)arg1;
- (id)textFieldContainerViews;
- (void)removeAllTextFields;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (_Bool)_canShowWhileLocked;

@end
