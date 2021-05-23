/*
 Image: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
 */

#import <UIKit/UIViewController.h>

@class AXDispatchTimer, CAShapeLayer, DDParsecCollectionViewController, NSDictionary, NSMutableCharacterSet, NSMutableString, NSString, RTTConversation, RTTUITextView, RTTUtterance, TUCall, UIButton, UITableView;

@interface RTTUIConversationViewController : UIViewController

{
    RTTUITextView *_textView;
    CAShapeLayer *_bubbleLayer;
    UIButton *_gaButton;
    AXDispatchTimer *_ttyPredictionsTimer;
    AXDispatchTimer *_realTimeTimeout;
    NSMutableCharacterSet *_unsupportedCharacterSet;
    NSDictionary *_asciiSubstitutions;
    AXDispatchTimer *_voAnnouncementTimer;
    NSMutableString *_voAnnouncementBuffer;
    _Bool _serviceMessageVisible;
    AXDispatchTimer *_arouetQuickCoalescer;
    RTTConversation *_conversation;
    NSString *_currentServiceMessage;
    DDParsecCollectionViewController *_lookupController;
    UITableView *_tableView;
    RTTUtterance *_currentUtterance;
    TUCall *_call;
}

@property (retain, nonatomic) DDParsecCollectionViewController *lookupController;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) RTTConversation *conversation;
@property (retain, nonatomic) RTTUtterance *currentUtterance;
@property (retain, nonatomic) TUCall *call;
@property (retain, nonatomic) NSString *currentServiceMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)viewControllerForCall:(id)arg1;
+ (id)viewControllerForConversation:(id)arg1;
+ (_Bool)_validRectangle:(struct CGRect)arg1;

- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_define:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)setupTableView;
- (void)callDidConnect:(id)arg1;
- (id)addUtterance:(id)arg1;
- (id)cannedResponses;
- (void)updateCallActiveStatus:(_Bool)arg1;
- (id)currentContactPath;
- (id)cellAtIndexPath:(id)arg1;
- (id)textViewUtterance;
- (void)updateGAButton:(_Bool)arg1;
- (void)setTextViewUtterance:(id)arg1;
- (id)onHoldMessage;
- (void)updateServiceCellWithString:(id)arg1;
- (void)deviceDidReceiveString:(id)arg1 forUtterance:(id)arg2;
- (void)updateTableViewSizeAnimated:(_Bool)arg1;
- (void)toggleMute:(id)arg1;
- (void)updateMuteButton;
- (void)shareCallInfo:(id)arg1;
- (id)contactDisplayString;
- (void)_updateServiceCellWithString:(id)arg1;
- (void)_scrollToIndexPathIfNecessary:(id)arg1 animated:(_Bool)arg2;
- (void)utteranceCellDidUpdateContent:(id)arg1;
- (void)updateVoiceOverAnnouncement:(id)arg1;
- (id)lastRowPathForUtterance:(id)arg1;
- (void)_processRealtimeTimeout;
- (void)gaButtonPressed:(id)arg1;
- (void)updateViewForKeyboard:(id)arg1;
- (void)realtimeTextDidChange;
- (_Bool)utteranceIsSelected;
- (id)currentCall;
- (id)inputTextView;
- (void)updateUtterance:(id)arg1 forIndexPath:(id)arg2;
- (void)replyCell:(id)arg1 didActivateWithReplyButtonType:(unsigned long long)arg2;

@end
