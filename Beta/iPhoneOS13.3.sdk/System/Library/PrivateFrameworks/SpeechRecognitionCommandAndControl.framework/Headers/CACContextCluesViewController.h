/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UIViewController.h>

#import <SpeechRecognitionCommandAndControl/Swift-Protocol.h>

@class CACContextCluesWelcomeController, NSArray, NSString, UINavigationController;

@protocol CACContextCluesDelegate;

@interface CACContextCluesViewController : UIViewController <Swift>

{
    id <CACContextCluesDelegate> _delegate;
    NSArray *_commands;
    CACContextCluesWelcomeController *_contextCluesController;
    UINavigationController *_presentingNavigationController;
}

@property (retain, nonatomic) CACContextCluesWelcomeController *contextCluesController;
@property (retain, nonatomic) UINavigationController *presentingNavigationController;
@property (weak, nonatomic) id <CACContextCluesDelegate> delegate;
@property (retain, nonatomic) NSArray *commands;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long zOrder;
@property (nonatomic, readonly) _Bool isOverlay;

- (_Bool)_canShowWhileLocked;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)doneButtonPressed;
- (void)contextCluesDoneButtonPressed:(id)arg1;
- (id)initWithCommands:(id)arg1;

@end
