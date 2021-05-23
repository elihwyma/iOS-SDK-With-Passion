/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray, NSMutableDictionary, NSString, UIButton, UICollectionView, WFVariableShortcutsBarButtonCell;

@protocol WFVariableProvider, WFVariableShortcutsBarDelegate;

@interface WFVariableShortcutsBar : UIView

{
    _Bool _showsDoneButton;
    _Bool _showsVariables;
    _Bool _showsUserDefinedVariables;
    _Bool _showsMagicVariableButton;
    _Bool _variablesButtonSelected;
    id <WFVariableShortcutsBarDelegate> _delegate;
    id <WFVariableProvider> _variableProvider;
    NSString *_customButtonTitle;
    NSArray *_userDefinedVariableNames;
    NSArray *_specialVariables;
    NSArray *_suggestedVariables;
    UIButton *_doneButton;
    UIView *_maskingView;
    CAGradientLayer *_maskLayer;
    UICollectionView *_collectionView;
    NSMutableDictionary *_cellWidthCache;
    WFVariableShortcutsBarButtonCell *_variablesButton;
}

@property (weak, nonatomic) UIButton *doneButton;
@property (weak, nonatomic) UIView *maskingView;
@property (weak, nonatomic) CAGradientLayer *maskLayer;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic, readonly) NSMutableDictionary *cellWidthCache;
@property (retain, nonatomic) WFVariableShortcutsBarButtonCell *variablesButton;
@property (weak, nonatomic) id <WFVariableShortcutsBarDelegate> delegate;
@property (weak, nonatomic) id <WFVariableProvider> variableProvider;
@property (nonatomic) _Bool showsDoneButton;
@property (nonatomic) _Bool showsVariables;
@property (nonatomic) _Bool showsUserDefinedVariables;
@property (nonatomic) _Bool showsMagicVariableButton;
@property (nonatomic) _Bool variablesButtonSelected;
@property (copy, nonatomic) NSString *customButtonTitle;
@property (copy, nonatomic) NSArray *userDefinedVariableNames;
@property (copy, nonatomic) NSArray *specialVariables;
@property (copy, nonatomic) NSArray *suggestedVariables;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (void)doneButtonPressed;
- (_Bool)shouldShowVariablesButton;
- (_Bool)shouldShowCustomButton;
- (void)barButtonPressed:(id)arg1;

@end
