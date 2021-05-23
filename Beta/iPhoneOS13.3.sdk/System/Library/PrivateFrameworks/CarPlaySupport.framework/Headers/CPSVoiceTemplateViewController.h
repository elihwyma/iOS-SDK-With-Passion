/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <CarPlaySupport/CPSBaseTemplateViewController.h>

@class CPSVoiceView, NSString, UITapGestureRecognizer;

@interface CPSVoiceTemplateViewController : CPSBaseTemplateViewController

{
    CPSVoiceView *_titleView;
    UITapGestureRecognizer *_backGestureRecognizer;
    double _lastVoiceTemplateStateChangeTime;
}

@property (retain, nonatomic) CPSVoiceView *titleView;
@property (retain, nonatomic) UITapGestureRecognizer *backGestureRecognizer;
@property (nonatomic) double lastVoiceTemplateStateChangeTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_activateStateWithIdentifier:(id)arg1;
- (void)_viewDidLoad;
- (id)voiceTemplate;
- (void)_backGestureFired:(id)arg1;
- (id)_stateWithIdentifier:(id)arg1;
- (id)initWithVoiceTemplate:(id)arg1 templateDelegate:(id)arg2;

@end
