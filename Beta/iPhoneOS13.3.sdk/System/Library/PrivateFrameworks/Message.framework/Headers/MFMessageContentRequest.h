/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class EDMailDropMetadataGenerator, EDMessagePersistence, EMContentRequestOptions, EMMessageObjectID, MFMailMessage, MFMessageTransformer, NSString;

@protocol EFScheduler, EMContentItemRequestDelegate;

@interface MFMessageContentRequest : NSObject

{
    id <EFScheduler> _scheduler;
    EMMessageObjectID *_objectID;
    EDMessagePersistence *_messagePersistence;
    MFMailMessage *_legacyMessage;
    MFMessageTransformer *_messageTransformer;
    NSString *_clientIdentifier;
    EMContentRequestOptions *_options;
    EDMailDropMetadataGenerator *_mailDropAttachmentGenerator;
    id <EMContentItemRequestDelegate> _delegate;
}

@property (nonatomic, readonly) id <EFScheduler> scheduler;
@property (nonatomic, readonly) EMMessageObjectID *objectID;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) MFMailMessage *legacyMessage;
@property (nonatomic, readonly) MFMessageTransformer *messageTransformer;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) EMContentRequestOptions *options;
@property (nonatomic, readonly) EDMailDropMetadataGenerator *mailDropAttachmentGenerator;
@property (nonatomic, readonly) id <EMContentItemRequestDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)onScheduler:(id)arg1 requestID:(unsigned long long)arg2 requestContentForObjectID:(id)arg3 messagePersistence:(id)arg4 legacyMessage:(id)arg5 messageTransformer:(id)arg6 mailDropAttachmentGenerator:(id)arg7 clientIdentifier:(id)arg8 options:(id)arg9 delegate:(id)arg10 completionHandler:(CDUnknownBlockType)arg11;
+ (id)onScheduler:(id)arg1 requestContentForObjectID:(id)arg2 messagePersistence:(id)arg3 legacyMessage:(id)arg4 messageTransformer:(id)arg5 mailDropAttachmentGenerator:(id)arg6 clientIdentifier:(id)arg7 options:(id)arg8 delegate:(id)arg9 completionHandler:(CDUnknownBlockType)arg10;
+ (id)metadataWithDictionary:(id)arg1;

- (id)_init;
- (id)beginRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)requestRawRepresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)requestHTMLRepresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_contentRepresentationForLoadingEvent:(id)arg1 existingRepresentation:(id)arg2;
- (id)_generateRepresentationForLoadingContext:(id)arg1 existingRepresentation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_contentItemForAttachment:(id)arg1 manager:(id)arg2 managed:(_Bool)arg3;
- (id)delegateWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_processContentLoadingContextEvent:(id)arg1;
- (id)_attachmentContentItemsForMailDropNodes:(id)arg1 withContext:(id)arg2;
- (id)_contentRepresentationForEvent:(id)arg1 contentURL:(id)arg2 relatedItems:(id)arg3 existingRepresentation:(id)arg4 invocable:(id)arg5;
- (void)_includeSuggestionItemsIfNeededForRepresentation:(id)arg1 message:(id)arg2;
- (id)_messageForLegacyMessage:(id)arg1;
- (id)_requestContentForAttachment:(id)arg1 manager:(id)arg2 options:(id)arg3 managed:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_maildropMetadataFromContext:(id)arg1;
- (id)_attachmentForMailDropMetaData:(id)arg1 context:(id)arg2;

@end
