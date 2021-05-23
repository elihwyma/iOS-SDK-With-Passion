/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIViewController.h>

@class AceObject, NSString, SAUISnippet, SiriUISashItem;

@protocol SiriUIBaseAceObjectViewControllerDelegate;

@interface SiriUIBaseSnippetViewController : UIViewController

{
    _Bool _utteranceUserInteractionEnabled;
    AceObject *aceObject;
    SiriUISashItem *_sashItem;
    id <SiriUIBaseAceObjectViewControllerDelegate> _delegate;
}

@property (retain, nonatomic) SAUISnippet *snippet;
@property (weak, nonatomic) id <SiriUIBaseAceObjectViewControllerDelegate> delegate;
@property (nonatomic, readonly) SiriUISashItem *sashItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) AceObject *aceObject;
@property (nonatomic, getter=isUtteranceUserInteractionEnabled) _Bool utteranceUserInteractionEnabled;

- (_Bool)_canShowWhileLocked;
- (double)desiredHeight;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)siriDidDeactivate;
- (void)wasAddedToTranscript;
- (double)desiredTopPaddingBelowController:(id)arg1;
- (void)siriDidReceiveAdditionalContent:(id)arg1 error:(id)arg2;

@end
