/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UICollectionViewController.h>

@class NSArray, NSString;

@protocol CACCorrectionsCollectionViewControllerDelegate;

@interface CACCorrectionsCollectionViewController : UICollectionViewController

{
    id <CACCorrectionsCollectionViewControllerDelegate> _delegate;
    NSString *_text;
    NSArray *_alternatives;
    NSArray *_emojis;
}

@property (weak, nonatomic) id <CACCorrectionsCollectionViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *alternatives;
@property (copy, nonatomic) NSArray *emojis;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_didTapCancel:(id)arg1;
- (id)_itemsInSection:(long long)arg1;

@end
