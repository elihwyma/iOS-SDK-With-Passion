/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionReusableView.h>

@class GKSearchBar, NSArray, NSNumber, NSString;

@protocol UISearchBarDelegate;

@interface GKSearchBarView : UICollectionReusableView

{
    GKSearchBar *_searchBar;
    NSNumber *_usePadConstraints;
    id <UISearchBarDelegate> _delegate;
    NSArray *_searchBarConstraints;
    double _leadingMargin;
    double _trailingMargin;
}

@property (retain, nonatomic) NSArray *searchBarConstraints;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;
@property (retain, nonatomic) GKSearchBar *searchBar;
@property (retain, nonatomic) NSNumber *usePadConstraints;
@property (nonatomic) id <UISearchBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)requiresConstraintBasedLayout;
+ (double)defaultHeight;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)applyLayoutAttributes:(id)arg1;
- (void)establishSearchBarConstraints;

@end
