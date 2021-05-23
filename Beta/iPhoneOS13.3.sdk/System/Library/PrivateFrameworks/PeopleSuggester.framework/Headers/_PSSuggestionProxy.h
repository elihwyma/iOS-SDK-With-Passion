/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class NSString;

@interface _PSSuggestionProxy : NSObject

{
    _Bool _useGroupsWhenFindingRecipient;
    NSString *_bundleID;
    NSString *_interactionRecipients;
    NSString *_contactID;
    NSString *_handle;
    NSString *_reason;
    NSString *_reasonType;
}

@property (copy, nonatomic, readonly) NSString *bundleID;
@property (copy, nonatomic, readonly) NSString *interactionRecipients;
@property (copy, nonatomic, readonly) NSString *contactID;
@property (copy, nonatomic, readonly) NSString *handle;
@property (copy, nonatomic, readonly) NSString *reason;
@property (copy, nonatomic, readonly) NSString *reasonType;
@property (nonatomic, readonly) _Bool useGroupsWhenFindingRecipient;
@property (copy, nonatomic, readonly) NSString *suggestionKey;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 handle:(id)arg4 reason:(id)arg5 reasonType:(id)arg6;
- (id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 reason:(id)arg4 reasonType:(id)arg5;
- (id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 handle:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 useGroupsWhenFindingRecipient:(_Bool)arg7;

@end
