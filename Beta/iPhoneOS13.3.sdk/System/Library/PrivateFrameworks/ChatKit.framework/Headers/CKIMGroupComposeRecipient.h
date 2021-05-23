/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ContactsAutocompleteUI/CNComposeRecipientGroup.h>

@class CKIMComposeRecipient, NSArray, NSDate, NSString;

@interface CKIMGroupComposeRecipient : CNComposeRecipientGroup

{
    NSString *_conversationGUID;
    NSArray *_composeRecipients;
    NSArray *_handles;
    NSDate *_lastMessageDate;
    CKIMComposeRecipient *_matchingRecipient;
    NSString *_detailsString;
}

@property (retain, nonatomic) NSString *conversationGUID;
@property (retain, nonatomic) NSArray *handles;
@property (retain, nonatomic) NSString *detailsString;
@property (retain, nonatomic) NSDate *lastMessageDate;
@property (retain, nonatomic) CKIMComposeRecipient *matchingRecipient;
@property (nonatomic, readonly) NSArray *composeRecipients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)composeRecipientWithConversation:(id)arg1 searchTerm:(id)arg2 matchingRecipient:(id)arg3;

- (void)dealloc;
- (id)address;
- (id)compositeName;
- (_Bool)isRemovableFromSearchResults;
- (void)releaseIMReferences;
- (id)initWithGUID:(id)arg1 displayString:(id)arg2 detailsString:(id)arg3 handles:(id)arg4 lastMessageDate:(id)arg5 searchTerm:(id)arg6 matchingRecipient:(id)arg7;

@end
