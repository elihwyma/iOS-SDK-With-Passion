/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UIView, VUIMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUILibraryFetchControllerViewController : UIViewController

{
    _Bool _onlyShowLocalContent;
    _Bool _pausesFetchControllersAutomatically;
    _Bool _contentHasBeenDeleted;
    _Bool _contentHasBeenManuallyDeleted;
    VUIMediaLibrary *_mediaLibrary;
    NSArray *_fetchControllers;
    UIView *_currentView;
    unsigned long long _currentViewType;
    NSString *_noContentErrorTitle;
    NSString *_noContentErrorMessage;
    NSString *_deletedContentErrorMessage;
    UIView *_contentView;
    UIView *_rootView;
}

@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (copy, nonatomic) NSArray *fetchControllers;
@property (retain, nonatomic) UIView *currentView;
@property (nonatomic) _Bool contentHasBeenDeleted;
@property (retain, nonatomic) UIView *rootView;
@property (nonatomic) _Bool pausesFetchControllersAutomatically;
@property (nonatomic) unsigned long long currentViewType;
@property (copy, nonatomic) NSString *noContentErrorTitle;
@property (copy, nonatomic) NSString *noContentErrorMessage;
@property (nonatomic) _Bool contentHasBeenManuallyDeleted;
@property (copy, nonatomic) NSString *deletedContentErrorMessage;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) _Bool onlyShowLocalContent;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)initWithMediaLibrary:(id)arg1;
- (void)startFetchControllers:(id)arg1;
- (void)updateAfterContentWasManuallyDeleted:(_Bool)arg1;
- (id)_createAlertViewWithTitle:(id)arg1 description:(id)arg2;

@end
