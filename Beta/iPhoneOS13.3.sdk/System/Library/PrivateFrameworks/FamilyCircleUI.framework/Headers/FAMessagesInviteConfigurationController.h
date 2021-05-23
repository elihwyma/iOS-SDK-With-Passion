/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <Foundation/NSObject.h>

@class FAMessagesInviteContext, LPImage, LPLinkMetadata, MFMessageComposeViewController, NSArray, NSString, UIViewController;

@protocol FAMessagesInviteControllerDelegate;

@interface FAMessagesInviteConfigurationController : NSObject

{
    MFMessageComposeViewController *_messageComposeViewController;
    UIViewController *_presentationContext;
    LPLinkMetadata *_linkMetadata;
    LPImage *_cachedIcon;
    LPImage *_cachedImage;
    _Bool _userCancelled;
    id <FAMessagesInviteControllerDelegate> _delegate;
    FAMessagesInviteContext *_context;
    NSArray *_recipientAddresses;
}

@property (weak, nonatomic) id <FAMessagesInviteControllerDelegate> delegate;
@property (nonatomic, readonly) FAMessagesInviteContext *context;
@property (nonatomic, readonly) NSArray *recipientAddresses;
@property (nonatomic, readonly) _Bool userCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)canSendText;

- (id)_cachedImage;
- (id)_linkMetadata;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id)_messageComposeViewController;
- (id)_defaultImage;
- (void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_defaultIcon;
- (id)_colorForString:(id)arg1;
- (void)_presentMessagesViewController:(CDUnknownBlockType)arg1;
- (id)initWithInviteContext:(id)arg1 presentingController:(id)arg2;
- (void)presentWhenReadyWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDefaultMessageBubbleIcon:(struct UIImage *)arg1;
- (void)setDefaultMessageBubbleBackgroundImage:(struct UIImage *)arg1;

@end
