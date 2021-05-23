/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

#import <Email/Swift-Protocol.h>

@class CSSearchableItem, EFInvocationToken, EFSandboxedURLWrapper, EMListUnsubscribeCommand, EMMessage, EMSecurityInformation, NSArray, NSString, NSURL;

@protocol EMContentItem, _EMDistantContentRepresentation;

@interface EMContentRepresentation : NSObject <Swift>

{
    EFInvocationToken *_invocable;
    _Bool _claimedScopedResource;
    _Bool _hasMoreContent;
    id <EMContentItem> _contentItem;
    NSURL *_publicMessageURL;
    NSArray *_replyToList;
    EMMessage *_contentMessage;
    NSArray *_relatedContentItems;
    EMSecurityInformation *_securityInformation;
    CSSearchableItem *_searchableItem;
    EMListUnsubscribeCommand *_unsubscribeCommand;
    long long _remainingByteCount;
    long long _transportType;
    EFSandboxedURLWrapper *_urlWrapper;
    id <_EMDistantContentRepresentation> _distantContentRepresentation;
    CDUnknownBlockType _requestMoreContentBlock;
}

@property (retain, nonatomic) EFSandboxedURLWrapper *urlWrapper;
@property (weak, nonatomic) id <EMContentItem> contentItem;
@property (retain, nonatomic) id <_EMDistantContentRepresentation> distantContentRepresentation;
@property (retain, nonatomic) NSURL *publicMessageURL;
@property (copy, nonatomic) NSArray *replyToList;
@property (retain, nonatomic) EMMessage *contentMessage;
@property (copy, nonatomic) NSArray *relatedContentItems;
@property (retain, nonatomic) EMSecurityInformation *securityInformation;
@property (retain, nonatomic) CSSearchableItem *searchableItem;
@property (retain, nonatomic) EMListUnsubscribeCommand *unsubscribeCommand;
@property (nonatomic) _Bool hasMoreContent;
@property (nonatomic) long long remainingByteCount;
@property (nonatomic) long long transportType;
@property (copy, nonatomic) CDUnknownBlockType requestMoreContentBlock;
@property (nonatomic, readonly) NSURL *contentURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_publicDescription;

+ (_Bool)supportsSecureCoding;
+ (id)log;
+ (id)temporaryURLWithData:(id)arg1 clientIdentifier:(id)arg2 preferredFilename:(id)arg3 pathExtension:(id)arg4 cleanupInvocable:(id *)arg5 error:(id *)arg6;
+ (id)contentRequestDelegateInterface;
+ (id)distantContentRepresentationInterface;

- (void)dealloc;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 clientIdentifier:(id)arg2 preferredFilename:(id)arg3 extension:(id)arg4 relatedItems:(id)arg5 securityInformation:(id)arg6;
- (id)initWithContentURL:(id)arg1 relatedItems:(id)arg2 securityInformation:(id)arg3;
- (void)addInvalidationHandler:(CDUnknownBlockType)arg1;
- (void)mergeUpdatedRepresentation:(id)arg1;
- (id)initWithContentMessage:(id)arg1 data:(id)arg2 clientIdentifier:(id)arg3 preferredFilename:(id)arg4 extension:(id)arg5;
- (id)_initWithRelatedItems:(id)arg1 securityInformation:(id)arg2;
- (id)_initWithSandboxedURLWrapper:(id)arg1 relatedItems:(id)arg2 securityInformation:(id)arg3;
- (CDUnknownBlockType)_distantLoaderBlockForContentItem:(id)arg1;
- (id)initWithData:(id)arg1 clientIdentifier:(id)arg2 extension:(id)arg3 relatedItems:(id)arg4 securityInformation:(id)arg5;
- (id)requestAdditionalContentWithCompletion:(CDUnknownBlockType)arg1;

@end
