/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <IMCore/IMMessage.h>

@interface IMMessage (CKAdditions)

- (_Bool)__ck_isAcknowledgmentMessage;
- (_Bool)__ck_isiMessage;
- (id)__ck_downgradedMessage;
- (_Bool)__ck_isSMS;
- (id)__ck_service;
- (id)__ck_previewTextWithChat:(id)arg1 ignorePluginContent:(_Bool)arg2;
- (id)__ck_previewTextWithChat:(id)arg1;
- (_Bool)__ck_isEqualToMessageUsingGUID:(id)arg1;
- (id)__ck_attachmentPreviewTextForAttachmentAtIndex:(long long)arg1;
- (id)__ck_mediaObjects;
- (id)__ck_undowngradedMessage;

@end
