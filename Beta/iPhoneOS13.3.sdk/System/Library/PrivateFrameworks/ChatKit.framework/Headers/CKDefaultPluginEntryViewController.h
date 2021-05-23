/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

@class CKBalloonView, IMBalloonPlugin, IMBalloonPluginDataSource, NSString;

@protocol CKPluginEntryViewControllerDelegate, CKTranscriptBalloonPluginController;

@interface CKDefaultPluginEntryViewController : UIViewController

{
    IMBalloonPluginDataSource *_datasource;
    UIViewController<CKTranscriptBalloonPluginController> *_pluginBubbleViewController;
    CKBalloonView *_balloonView;
    IMBalloonPlugin *_plugin;
}

@property (retain, nonatomic) IMBalloonPluginDataSource *datasource;
@property (retain, nonatomic) UIViewController<CKTranscriptBalloonPluginController> *pluginBubbleViewController;
@property (retain, nonatomic) CKBalloonView *balloonView;
@property (retain, nonatomic) IMBalloonPlugin *plugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CKPluginEntryViewControllerDelegate> entryViewDelegate;
@property (readonly) _Bool wantsClearButton;
@property (readonly) _Bool wantsEdgeToEdgeLayout;
@property (readonly) _Bool loadedContentView;

- (void)dealloc;
- (void)loadView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)performHostAppResume;
- (void)performHostAppSuspend;
- (void)payloadWillSend;
- (void)_loadBalloonView;
- (void)didFinishAnimatedBoundsChange;
- (id)_imageBalloon;
- (id)_transcriptPluginBalloon;
- (id)initWithDataSource:(id)arg1 entryViewDelegate:(id)arg2;
- (void)payloadWillClear;
- (id)initWithDataSource:(id)arg1 entryViewDelegate:(id)arg2 andPlugin:(id)arg3;

@end
