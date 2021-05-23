/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICPaperStyleCollectionViewController.h>

@protocol ICPaperStyleSheetCollectionViewControllerDelegate;

@interface ICPaperStyleSheetCollectionViewController : ICPaperStyleCollectionViewController

{
    id <ICPaperStyleSheetCollectionViewControllerDelegate> _paperStyleDelegate;
    unsigned long long _initialPaperStyleType;
}

@property (nonatomic) unsigned long long initialPaperStyleType;
@property (weak, nonatomic) id <ICPaperStyleSheetCollectionViewControllerDelegate> paperStyleDelegate;

- (_Bool)accessibilityPerformEscape;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)indexPathForInitialSelection;
- (void)cancelAction:(id)arg1;
- (id)initWithInitialPaperStyleType:(unsigned long long)arg1 delegate:(id)arg2;

@end
