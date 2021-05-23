/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISearchBarLayoutBase.h>

@class UISearchBarTextField, UIView;

@protocol _UISearchBarContainerSublayoutDelegate;

__attribute__((visibility("hidden")))
@interface _UISearchBarSearchContainerLayout : _UISearchBarLayoutBase

{
    struct {
        unsigned int hasCancelButton:1;
        unsigned int hasDeleteButton:1;
        unsigned int hasLeftButton:1;
        unsigned int allowSearchFieldShrinkage:1;
        unsigned int searchFieldUsesCustomBackgroundImage:1;
        unsigned int searchFieldRespectsReadableWidth:1;
        unsigned int searchFieldWidthIsReduced:1;
    } _searchContainerLayoutFlags;
    double _searchFieldForegroundFadeAlpha;
    double _searchFieldBackgroundFadeAlpha;
    id <_UISearchBarContainerSublayoutDelegate> _delegate;
    UISearchBarTextField *_searchField;
    UIView *_cancelButton;
    UIView *_deleteButton;
    UIView *_leftButton;
    double _searchBarReadableWidth;
    CDUnknownBlockType _delegateSearchFieldFrameForProposedFrame;
    struct UIOffset _searchFieldBackgroundPositionAdjustment;
    struct CGRect _searchFieldLayoutFrame;
    struct CGRect _cancelButtonLayoutFrame;
    struct CGRect _deleteButtonLayoutFrame;
    struct CGRect _leftButtonLayoutFrame;
    struct CGRect _visibleCancelButtonSearchFieldLayoutFrame;
}

@property (weak, nonatomic) id <_UISearchBarContainerSublayoutDelegate> delegate;
@property (nonatomic, readonly) double naturalBarHeight;
@property (nonatomic, readonly) double naturalSearchFieldHeight;
@property (retain, nonatomic) UISearchBarTextField *searchField;
@property (retain, nonatomic) UIView *cancelButton;
@property (retain, nonatomic) UIView *deleteButton;
@property (retain, nonatomic) UIView *leftButton;
@property (nonatomic) _Bool hasCancelButton;
@property (nonatomic) _Bool hasDeleteButton;
@property (nonatomic) _Bool hasLeftButton;
@property (nonatomic) _Bool allowSearchFieldShrinkage;
@property (nonatomic) _Bool searchFieldUsesCustomBackgroundImage;
@property (nonatomic) _Bool searchFieldRespectsReadableWidth;
@property (nonatomic) double searchBarReadableWidth;
@property (nonatomic) struct UIOffset searchFieldBackgroundPositionAdjustment;
@property (nonatomic, readonly) struct CGRect searchFieldLayoutFrame;
@property (nonatomic, readonly) struct CGRect cancelButtonLayoutFrame;
@property (nonatomic, readonly) struct CGRect deleteButtonLayoutFrame;
@property (nonatomic, readonly) struct CGRect leftButtonLayoutFrame;
@property (nonatomic, readonly) struct CGRect visibleCancelButtonSearchFieldLayoutFrame;
@property (nonatomic, readonly) _Bool searchFieldWidthIsReduced;
@property (copy, nonatomic) CDUnknownBlockType delegateSearchFieldFrameForProposedFrame;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateLayout;
- (void)applyLayout;
- (double)searchFieldHeightUpdatingShrinkageAndFadeAlphas;

@end
