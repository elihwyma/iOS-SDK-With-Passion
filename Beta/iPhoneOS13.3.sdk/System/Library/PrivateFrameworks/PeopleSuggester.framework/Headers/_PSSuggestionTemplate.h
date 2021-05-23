/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class INImage, NSArray, NSDictionary, NSString;

@interface _PSSuggestionTemplate : NSObject

{
    NSString *_bundleID;
    NSString *_interactionRecipients;
    INImage *_image;
    NSString *_groupName;
    NSArray *_recipientContactIDs;
    NSArray *_recipientEmailAddresses;
    NSArray *_recipientPhoneNumbers;
    NSDictionary *_contactIdToHandleMapping;
    NSString *_reason;
    NSString *_reasonType;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *interactionRecipients;
@property (nonatomic, readonly) INImage *image;
@property (nonatomic, readonly) NSString *groupName;
@property (nonatomic, readonly) NSArray *recipientContactIDs;
@property (nonatomic, readonly) NSArray *recipientEmailAddresses;
@property (nonatomic, readonly) NSArray *recipientPhoneNumbers;
@property (nonatomic, readonly) NSDictionary *contactIdToHandleMapping;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) NSString *reasonType;

- (id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 image:(id)arg3 groupName:(id)arg4 recipientContactIDs:(id)arg5 recipientEmailAddresses:(id)arg6 recipientPhoneNumbers:(id)arg7 contactIdToHandleMapping:(id)arg8 reason:(id)arg9 reasonType:(id)arg10;
- (id)suggestionWithContactIDMapping:(id)arg1 phoneMapping:(id)arg2 emailMapping:(id)arg3 contactStore:(id)arg4 contactKeysToFetch:(id)arg5;

@end
