/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <Foundation/NSObject.h>

@class NSString, UIAlertAction;

@protocol AUUIAlertDelegate;

@interface AUUIAlert : NSObject

{
    _Bool stackButtons;
    _Bool prepared;
    id <AUUIAlertDelegate> delegate;
    id context;
    long long tag;
    id alert;
    NSString *title;
    NSString *message;
    NSString *okButtonTitle;
    long long okButtonIndex;
    NSString *cancelButtonTitle;
    long long cancelButtonIndex;
    NSString *alternateButtonTitle;
    long long alternateButtonIndex;
    NSString *destructiveButtonTitle;
    long long destructiveButtonIndex;
    id viewController;
    UIAlertAction *okAction;
    UIAlertAction *cancelAction;
    UIAlertAction *alternateAction;
    UIAlertAction *destructiveAction;
}

@property (nonatomic) id <AUUIAlertDelegate> delegate;
@property (retain, nonatomic) id viewController;
@property (retain, nonatomic) id context;
@property (nonatomic) long long tag;
@property (nonatomic) _Bool stackButtons;
@property (retain, nonatomic) id alert;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *okButtonTitle;
@property (retain, nonatomic) NSString *cancelButtonTitle;
@property (retain, nonatomic) NSString *alternateButtonTitle;
@property (retain, nonatomic) NSString *destructiveButtonTitle;
@property (retain, nonatomic) UIAlertAction *okAction;
@property (retain, nonatomic) UIAlertAction *cancelAction;
@property (retain, nonatomic) UIAlertAction *alternateAction;
@property (retain, nonatomic) UIAlertAction *destructiveAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)alertViewShouldEnableFirstOtherButton:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)show;
- (id)initWithViewController:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)dismissWithNoActionAnimated:(_Bool)arg1;
- (void)dismissWithCancelActionAnimated:(_Bool)arg1;
- (id)initWithViewController:(id)arg1 actionSheet:(_Bool)arg2;
- (void)prepareToShow;
- (void)dismissWithOKActionAnimated:(_Bool)arg1;
- (void)enableOKAction:(_Bool)arg1;
- (void)enableCancelAction:(_Bool)arg1;
- (void)enableDestructiveAction:(_Bool)arg1;
- (void)enableAlternateAction:(_Bool)arg1;

@end
