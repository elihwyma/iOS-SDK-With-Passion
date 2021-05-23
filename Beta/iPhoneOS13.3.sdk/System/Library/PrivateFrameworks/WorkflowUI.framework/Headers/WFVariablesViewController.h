/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, UICollectionView, UICollectionViewFlowLayout;

@protocol WFVariableProvider, WFVariablesViewControllerDelegate;

@interface WFVariablesViewController : UIViewController <Swift>

{
    _Bool _showsUserDefinedVariables;
    _Bool _showsMagicVariableButton;
    id <WFVariablesViewControllerDelegate> _delegate;
    id <WFVariableProvider> _variableProvider;
    NSArray *_userDefinedVariableNames;
    NSArray *_specialVariables;
    NSArray *_suggestedVariables;
    long long _scrollDirection;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSMutableDictionary *_cellWidthCache;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (nonatomic, readonly) NSMutableDictionary *cellWidthCache;
@property (weak, nonatomic) id <WFVariablesViewControllerDelegate> delegate;
@property (weak, nonatomic) id <WFVariableProvider> variableProvider;
@property (nonatomic) _Bool showsUserDefinedVariables;
@property (nonatomic) _Bool showsMagicVariableButton;
@property (copy, nonatomic) NSArray *userDefinedVariableNames;
@property (copy, nonatomic) NSArray *specialVariables;
@property (copy, nonatomic) NSArray *suggestedVariables;
@property (nonatomic, readonly) long long scrollDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)reloadData;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)initWithScrollDirection:(long long)arg1;
- (id)availableUserDefinedVariableNames;
- (void)magicVariableButtonPressed:(id)arg1;
- (id)variableAtIndexPath:(id)arg1;

@end
