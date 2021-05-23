/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIViewController.h>

@class AceObject, NSString;

@protocol SiriUIAceObjectViewControllerDelegate;

@interface SiriUIAceObjectViewController : UIViewController

{
    _Bool _utteranceUserInteractionEnabled;
    _Bool _virgin;
    AceObject *_aceObject;
    id <SiriUIAceObjectViewControllerDelegate> _delegate;
}

@property (retain, nonatomic) AceObject *aceObject;
@property (nonatomic, readonly, getter=isVirgin) _Bool virgin;
@property (weak, nonatomic) id <SiriUIAceObjectViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isUtteranceUserInteractionEnabled) _Bool utteranceUserInteractionEnabled;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (id)_privateDelegate;
- (double)desiredHeight;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)siriDidDeactivate;
- (void)wasAddedToTranscript;
- (_Bool)removedAfterDialogProgresses;
- (void)_setVirgin:(_Bool)arg1;
- (long long)_pinAnimationType;
- (long long)_insertionAnimation;
- (long long)_replacementAnimation;
- (double)_insertionAnimatedZPosition;
- (void)_aceObjectViewControllerWillBeRemoved;
- (_Bool)_shouldSkipAnimationsInAlternateSpeeds;

@end
