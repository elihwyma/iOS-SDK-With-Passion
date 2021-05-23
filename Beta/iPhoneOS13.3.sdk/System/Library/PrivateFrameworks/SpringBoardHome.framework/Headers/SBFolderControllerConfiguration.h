/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString, SBFolder, SBFolderControllerAnimationContext, SBFolderIconImageCache, SBHIconImageCache, SBIconPageIndicatorImageSetCache, UIView, _UILegibilitySettings;

@protocol SBFolderControllerDelegate, SBIconListLayoutProvider, SBIconViewProviding, SBNestingViewControllerDelegate;

@interface SBFolderControllerConfiguration : NSObject

{
    SBFolder *_folder;
    long long _orientation;
    unsigned long long _allowedOrientations;
    id <SBIconListLayoutProvider> _listLayoutProvider;
    id <SBIconViewProviding> _iconViewProvider;
    id <SBNestingViewControllerDelegate> _delegate;
    id <SBFolderControllerDelegate> _folderDelegate;
    _UILegibilitySettings *_legibilitySettings;
    SBFolderIconImageCache *_folderIconImageCache;
    SBHIconImageCache *_iconImageCache;
    SBIconPageIndicatorImageSetCache *_iconPageIndicatorImageSetCache;
    SBFolderControllerAnimationContext *_animationContext;
    UIView *_headerView;
    double _headerHeight;
    NSString *_originatingIconLocation;
    unsigned long long _userInterfaceLayoutDirectionHandling;
    struct CGRect _initialViewFrame;
}

@property (retain, nonatomic) SBFolder *folder;
@property (nonatomic) long long orientation;
@property (nonatomic) unsigned long long allowedOrientations;
@property (retain, nonatomic) id <SBIconListLayoutProvider> listLayoutProvider;
@property (retain, nonatomic) id <SBIconViewProviding> iconViewProvider;
@property (weak, nonatomic) id <SBNestingViewControllerDelegate> delegate;
@property (weak, nonatomic) id <SBFolderControllerDelegate> folderDelegate;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache;
@property (retain, nonatomic) SBIconPageIndicatorImageSetCache *iconPageIndicatorImageSetCache;
@property (retain, nonatomic) SBFolderControllerAnimationContext *animationContext;
@property (retain, nonatomic) UIView *headerView;
@property (nonatomic) double headerHeight;
@property (copy, nonatomic) NSString *originatingIconLocation;
@property (nonatomic) unsigned long long userInterfaceLayoutDirectionHandling;
@property (nonatomic) struct CGRect initialViewFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
