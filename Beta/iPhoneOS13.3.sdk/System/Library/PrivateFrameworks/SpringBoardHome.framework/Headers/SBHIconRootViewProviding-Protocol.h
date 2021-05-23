/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/Swift-Protocol.h>

@class SBFolder, SBFolderIconImageCache, SBHIconImageCache, UIView, UIViewController, _UILegibilitySettings;

@protocol SBHIconRootViewProviding <Swift>

@property (retain, nonatomic) SBFolder *folder;
@property (nonatomic, readonly) UIView *contentView;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) UIViewController *deepestFolderController;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (nonatomic, readonly, getter=isScrolling) _Bool scrolling;
@property (nonatomic, readonly, getter=isScrollTracking) _Bool scrollTracking;
@property (nonatomic) long long currentPageIndex;
@property (retain, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache;

- (unsigned short)setEditing:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)setCurrentPageIndex:animated:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelScrolling;
- (unsigned short)noteUserIsInteractingWithIcons;
- (unsigned short)revealIcon:animated:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setIdleText: /* Error: Ran out of types for this method. */;

@end
