/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UISearchController.h>

@class NSMutableString, SKUISearchBar, UILabel;

@protocol SKUISearchControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUISearchController : UISearchController

{
    UILabel *_suffixLabel;
    NSMutableString *_paddingString;
    SKUISearchBar *_searchBar;
}

@property (nonatomic, readonly) SKUISearchBar *searchBar;
@property (weak, nonatomic) id <SKUISearchControllerDelegate> delegate;

- (void)setActive:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_setSuffix:(id)arg1;

@end
