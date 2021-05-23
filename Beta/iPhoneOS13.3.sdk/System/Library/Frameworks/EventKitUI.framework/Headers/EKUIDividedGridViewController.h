/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, UIColor;

@protocol EKUIDividedGridViewControllerDelegate;

@interface EKUIDividedGridViewController : UIViewController

{
    long long _type;
    UIColor *_cellBackgroundColor;
    NSArray *_buttonTitles;
    NSArray *_allCells;
    id <EKUIDividedGridViewControllerDelegate> _delegate;
    NSArray *_weekViews;
    double _preferredWidth;
    double _preferredInset;
}

@property (retain) NSArray *allCells;
@property (retain) NSArray *weekViews;
@property (nonatomic) double preferredWidth;
@property (nonatomic) double preferredInset;
@property (retain, nonatomic) NSArray *buttonTitles;
@property (weak) id <EKUIDividedGridViewControllerDelegate> delegate;

+ (id)dividerColor;

- (void)loadView;
- (struct CGSize)intrinsicContentSize;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)cellTapped:(id)arg1;
- (id)_newDividerView;
- (double)_rowHeightForWidth:(double)arg1;
- (double)_neededHeight;
- (id)initWithType:(long long)arg1 buttonTitles:(id)arg2 cellBackgroundColor:(id)arg3;

@end
