/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/Swift-Protocol.h>

@class CKBrowserDragManager, IMBalloonPlugin, IMBalloonPluginDataSource, NSArray, NSData, NSNumber, NSObject, NSString, UIViewController;

@protocol CKBrowserViewControllerSendDelegate, UIViewControllerTransitioningDelegate;

@protocol CKBrowserViewControllerProtocol <Swift>

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
@property (nonatomic, readonly) CKBrowserDragManager *browserDragManager;
@property (nonatomic) long long currentBrowserConsumer;
@property (nonatomic, readonly) UIViewController *remoteViewController;
@property (nonatomic, readonly) struct CGRect horizontalSwipeExclusionRect;
@property (nonatomic, readonly) _Bool canReplaceDataSource;
@property (retain, nonatomic) NSNumber *adamID;
@property (nonatomic, readonly) long long parentModalPresentationStyle;
@property (weak, nonatomic, readonly) id <UIViewControllerTransitioningDelegate> parentTransitioningDelegate;

- (unsigned short)isLoaded;
- (unsigned short)dismiss;
- (unsigned short)initWithBalloonPlugin:dataSource: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithBalloonPlugin: /* Error: Ran out of types for this method. */;

@end
