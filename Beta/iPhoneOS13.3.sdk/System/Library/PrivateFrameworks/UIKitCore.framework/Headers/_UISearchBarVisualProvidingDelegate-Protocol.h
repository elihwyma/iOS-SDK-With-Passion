/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UISearchBarTextField, UISearchController, UIView, _UINavigationControllerPalette;

@protocol UISearchBarDelegate><UISearchBarDelegate_Private;

@protocol _UISearchBarVisualProvidingDelegate <Swift>

@property (weak, nonatomic) id <UISearchBarDelegate><UISearchBarDelegate_Private> delegate;
@property (nonatomic, readonly, getter=_searchBarTextField) UISearchBarTextField *searchBarTextField;
@property (nonatomic, readonly) UIView *_viewForChildViews;
@property (nonatomic, readonly) _UINavigationControllerPalette *_containingNavigationPalette;
@property (nonatomic, readonly) long long barPosition;
@property (nonatomic, readonly) UISearchController *_searchController;

- (unsigned short)textInputTraits;

@end
