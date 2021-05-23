/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBFolderControllerConfiguration.h>

@class UIViewController;

@protocol SBHLegibility, SBHSidebarProvider;

@interface SBRootFolderControllerConfiguration : SBFolderControllerConfiguration

{
    _Bool _forSnapshot;
    _Bool _dockExternal;
    _Bool _dockPinnedForRotation;
    _Bool _showsDoneButtonWhileEditing;
    _Bool _sidebarVisible;
    _Bool _sidebarPinned;
    UIViewController *_pullDownSearchViewController;
    UIViewController<SBHLegibility> *_todayViewController;
    UIViewController<SBHSidebarProvider> *_sidebarViewController;
    unsigned long long _sidebarAllowedOrientations;
    unsigned long long _ignoresOverscrollOnFirstPageOrientations;
    UIViewController<SBHLegibility> *_portraitHeaderViewController;
}

@property (nonatomic, getter=isForSnapshot) _Bool forSnapshot;
@property (nonatomic, getter=isDockExternal) _Bool dockExternal;
@property (nonatomic, getter=isDockPinnedForRotation) _Bool dockPinnedForRotation;
@property (nonatomic) _Bool showsDoneButtonWhileEditing;
@property (retain, nonatomic) UIViewController *pullDownSearchViewController;
@property (retain, nonatomic) UIViewController<SBHLegibility> *todayViewController;
@property (retain, nonatomic) UIViewController<SBHSidebarProvider> *sidebarViewController;
@property (nonatomic, getter=isSidebarVisible) _Bool sidebarVisible;
@property (nonatomic, getter=isSidebarPinned) _Bool sidebarPinned;
@property (nonatomic) unsigned long long sidebarAllowedOrientations;
@property (nonatomic) unsigned long long ignoresOverscrollOnFirstPageOrientations;
@property (retain, nonatomic) UIViewController<SBHLegibility> *portraitHeaderViewController;

- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
