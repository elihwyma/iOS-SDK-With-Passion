/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIView;

__attribute__((visibility("hidden")))
@interface UIDebuggingSpecViewController : UIViewController <Swift>

{
    UIView *_spec;
    NSMutableArray *_specImages;
    double _originalOpacity;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    struct CGPoint _origin;
}

@property (retain, nonatomic) UIView *spec;
@property (retain, nonatomic) NSMutableArray *specImages;
@property (nonatomic) struct CGPoint origin;
@property (nonatomic) double originalOpacity;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)prepareForMediaBrowser;
- (void)gotDeleteGesture:(id)arg1;
- (void)gotPanGesture:(id)arg1;
- (void)hideImage;
- (_Bool)startMediaBrowserFromViewController:(id)arg1;

@end
