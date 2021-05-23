/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIViewController.h>

@class EKEvent, NSArray, NSString;

@interface EKUIInviteesViewMessageSendingViewController : UIViewController

{
    NSArray *_recipients;
    NSString *_subjectPrefix;
    NSString *_body;
    CDUnknownBlockType _messageSendingComplete;
    EKEvent *_event;
}

@property (retain, nonatomic) EKEvent *event;
@property (retain) NSArray *recipients;
@property (retain) NSString *subjectPrefix;
@property (retain) NSString *body;
@property (copy) CDUnknownBlockType messageSendingComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)canShowForEvent:(id)arg1 withRecipients:(id)arg2;
+ (id)_recipientEmailAddressesToDisplayNames:(id)arg1 recipients:(id)arg2;
+ (id)_attendeesIgnorningMe:(id)arg1;

- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)_htmlBodyForMailMessageWithNames:(id)arg1;
- (_Bool)prefersToBePresentedFromApplicationRootViewController;
- (_Bool)prefersForcedModalShowViewController;

@end
