/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSDictionary, NSLayoutConstraint, NSString, UICollectionView, UILabel, UIScrollView;

@interface PKRecognitionDataCollectionViewController : UIViewController

{
    NSArray *_drawings;
    NSArray *_drawingImages;
    NSDictionary *_metadata;
    UIScrollView *_scrollView;
    UILabel *_descriptionLabel;
    UICollectionView *_collectionView;
    NSLayoutConstraint *_collectionViewHeightConstraint;
}

@property (retain, nonatomic) NSArray *drawings;
@property (retain, nonatomic) NSArray *drawingImages;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)openURL:(id)arg1;
- (void)viewDidLoad;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)cancelButtonTapped:(id)arg1;
- (id)initWithDrawings:(id)arg1 metadata:(id)arg2;
- (void)sendRadarButtonTapped:(id)arg1;
- (id)synchronousImageForDrawing:(id)arg1;
- (void)adjustCollectionViewHeight;
- (void)openAppleFeedbackAssistantWithTempDirectoryURL:(id)arg1;
- (void)openTapToRadarWithTempDirectoryURL:(id)arg1;
- (id)saveDataForDrawings:(id)arg1 baseURL:(id)arg2 shouldSaveRecognitionData:(_Bool)arg3;

@end
