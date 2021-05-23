/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UINavigationController.h>

@class NSString, _UIRemoteViewController;

@protocol MFMailComposeViewControllerDelegate;

@interface MFMailComposeViewController : UINavigationController

{
    id _internal;
    CDUnknownBlockType _setupAnimationBlock;
    _Bool _didChangeStatusBarStyle;
    long long _savedStatusBarStyle;
}

@property (weak, nonatomic) id <MFMailComposeViewControllerDelegate> mailComposeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;

+ (id)log;
+ (_Bool)hasAutosavedMessageWithIdentifier:(id)arg1;
+ (_Bool)canSendMailSourceAccountManagement:(int)arg1;
+ (_Bool)canSendMail;
+ (unsigned long long)maximumAttachmentSize;
+ (void)removeAutosavedMessageWithIdentifier:(id)arg1;
+ (_Bool)isMailDropConfigured;

- (id)initWithURL:(id)arg1;
- (id)_impl;
- (id)contentText;
- (void)setContentText:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)__viewControllerWillBePresented:(_Bool)arg1;
- (void)setContentVisible:(_Bool)arg1;
- (id)UTITypes;
- (void)setUTITypes:(id)arg1;
- (void)recoverAutosavedMessageWithIdentifier:(id)arg1;
- (void)autosaveWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 sourceAccountManagement:(int)arg2;
- (void)setKeyboardVisible:(_Bool)arg1;
- (void)setMessageBody:(id)arg1 isHTML:(_Bool)arg2;
- (void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (id)_addAttachmentWithFileURL:(id)arg1 mimeType:(id)arg2;
- (void)setContentURLs:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (void)setShareSheetSessionID:(id)arg1;
- (void)setPreferredSendingEmailAddress:(id)arg1;
- (void)setSourceAccountManagement:(int)arg1;
- (void)setPhotoIDs:(id)arg1;
- (void)setCloudPhotoIDs:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)setCaretPosition:(unsigned long long)arg1;
- (id)photoIDs;
- (id)cloudPhotoIDs;
- (id)contentURLs;
- (id)shareSheetSessionID;
- (void)finalizeCompositionValues;
- (void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)_internalViewController;
- (id)_validEmailAddressesFromArray:(id)arg1;
- (id)_addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)currentAttachmentLimitWithHandler:(CDUnknownBlockType)arg1;
- (id)_addContentVariationWithName:(id)arg1;
- (void)_setDefaultContentVariation:(id)arg1;
- (void)_setMessageBody:(id)arg1 isHTML:(_Bool)arg2 forContentVariation:(id)arg3;
- (void)_addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 forContentVariation:(id)arg4;
- (void)addSetupAnimationBlock:(CDUnknownBlockType)arg1;
- (void)setAutorotationDelegate:(id)arg1;

@end
