/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIViewController.h>

#import <PencilKit/Swift-Protocol.h>

@class NSArray, NSString;

@protocol PKPaletteShapesViewControllerDelegate;

@interface PKPaletteShapesViewController : UIViewController <Swift>

{
    id <PKPaletteShapesViewControllerDelegate> _delegate;
    NSArray *_shapes;
}

@property (retain, nonatomic) NSArray *shapes;
@property (weak, nonatomic) id <PKPaletteShapesViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (struct CGSize)preferredContentSize;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;

@end
