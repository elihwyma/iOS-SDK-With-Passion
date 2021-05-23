/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

@class CKBrowserDragManager, IMBalloonPlugin, IMBalloonPluginDataSource, NSArray, NSData, NSNumber, NSObject, NSString, UIView;

@protocol CKBrowserViewControllerSendDelegate, UIViewControllerTransitioningDelegate;

@interface CKBrowserViewController : UIViewController

{
    long long _previousConsumer;
    _Bool _isiMessage;
    _Bool _isPrimaryViewController;
    _Bool _isTransitioningToExpandedPresentation;
    NSObject<CKBrowserViewControllerSendDelegate> *_sendDelegate;
    IMBalloonPlugin *_balloonPlugin;
    NSString *_conversationID;
    IMBalloonPluginDataSource *_balloonPluginDataSource;
    UIViewController *_presentationViewController;
    long long _currentBrowserConsumer;
    UIView *_dragTargetView;
    CKBrowserDragManager *_browserDragManager;
}

@property (nonatomic) _Bool isTransitioningToExpandedPresentation;
@property (weak, nonatomic) UIView *dragTargetView;
@property (retain, nonatomic) CKBrowserDragManager *browserDragManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIViewController *presentationViewController;
@property (weak, nonatomic) NSObject<CKBrowserViewControllerSendDelegate> *sendDelegate;
@property (nonatomic, readonly) IMBalloonPlugin *balloonPlugin;
@property (retain, nonatomic) IMBalloonPluginDataSource *balloonPluginDataSource;
@property (nonatomic) _Bool isiMessage;
@property (nonatomic) NSString *conversationID;
@property (nonatomic, readonly) _Bool wantsDarkUI;
@property (nonatomic, readonly) _Bool wantsOpaqueUI;
@property (nonatomic, readonly) _Bool supportsQuickView;
@property (nonatomic, readonly) _Bool shouldSuppressEntryView;
@property (nonatomic) _Bool isPrimaryViewController;
@property (nonatomic, readonly, getter=isDismissing) _Bool dismissing;
@property (nonatomic, readonly) _Bool mayBeKeptInViewHierarchy;
@property (nonatomic, readonly) long long browserPresentationStyle;
@property (nonatomic, readonly) _Bool shouldShowChatChrome;
@property (nonatomic, readonly) _Bool inExpandedPresentation;
@property (nonatomic, readonly) _Bool inFullScreenModalPresentation;
@property (retain, nonatomic) NSString *sender;
@property (retain, nonatomic) NSArray *recipients;
@property (nonatomic, readonly) _Bool wasExpandedPresentation;
@property (retain, nonatomic) NSData *conversationEngramID;
@property (nonatomic, readonly) unsigned long long badgeValue;
@property (nonatomic) long long currentBrowserConsumer;
@property (nonatomic, readonly) UIViewController *remoteViewController;
@property (nonatomic, readonly) struct CGRect horizontalSwipeExclusionRect;
@property (nonatomic, readonly) _Bool canReplaceDataSource;
@property (retain, nonatomic) NSNumber *adamID;
@property (nonatomic, readonly) long long parentModalPresentationStyle;
@property (weak, nonatomic, readonly) id <UIViewControllerTransitioningDelegate> parentTransitioningDelegate;

+ (id)currentPPTTestName;
+ (_Bool)supportsMessagesAppExtendedLaunchTest;

- (_Bool)isLoaded;
- (void)loadView;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismiss;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (void)_updateContentOverlayInsetsForSelfAndChildren;
- (void)didTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;
- (id)initWithBalloonPlugin:(id)arg1;
- (id)initWithBalloonPlugin:(id)arg1 pluginPayloads:(id)arg2;
- (void)beginDisablingUserInteraction;
- (void)endDisablingUserInteraction;
- (void)viewWillTransitionToExpandedPresentation;
- (void)viewDidTransitionToExpandedPresentation;
- (void)viewWillTransitionToCompactPresentation;
- (void)viewDidTransitionToCompactPresentation;
- (void)tearDownRemoteViewIfNeeded;
- (void)finishedPPTTestNamed:(id)arg1 isCKLaunchTest:(_Bool)arg2;
- (_Bool)inCompactPresentation;
- (void)finishedPPTTestNamed:(id)arg1;
- (void)startPPTTestNamed:(id)arg1;

@end
