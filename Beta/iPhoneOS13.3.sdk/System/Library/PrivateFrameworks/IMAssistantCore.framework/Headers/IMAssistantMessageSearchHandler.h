/*
 Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

#import <IMAssistantCore/IMAssistantMessageQueryHandler.h>

@class NSString;

@protocol IMAssistantMessageAttributeSanitizer;

@interface IMAssistantMessageSearchHandler : IMAssistantMessageQueryHandler

{
    id <IMAssistantMessageAttributeSanitizer> _attributeSanitizer;
}

@property (retain, nonatomic) id <IMAssistantMessageAttributeSanitizer> attributeSanitizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleSearchForMessages:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveRecipientsForSearchForMessages:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveSendersForSearchForMessages:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveAttributesForSearchForMessages:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveSpeakableGroupNamesForSearchForMessages:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithDataSource:(id)arg1 intentIdentifier:(id)arg2;
- (id)initWithAttributeSanitizer:(id)arg1 intentIdentifier:(id)arg2;
- (id)initWithDataSource:(id)arg1 attributeSanitizer:(id)arg2 intentIdentifier:(id)arg3;
- (id)resolveSpeakableGroupNames:(id)arg1 forIntent:(id)arg2;
- (void)resolveRecipientsAndSender:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithIntentIdentifier:(id)arg1;

@end
