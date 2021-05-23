/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class INImage, NSArray, NSString;

@interface _PSSuggestion : NSObject

{
    NSString *_conversationIdentifier;
    NSString *_groupName;
    NSArray *_recipients;
    NSString *_bundleID;
    INImage *_image;
    NSString *_derivedIntentIdentifier;
    NSString *_reason;
    NSString *_reasonType;
    NSString *_trialID;
}

@property (copy, nonatomic, readonly) NSString *derivedIntentIdentifier;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *reasonType;
@property (copy, nonatomic) NSString *trialID;
@property (copy, nonatomic, readonly) NSString *conversationIdentifier;
@property (copy, nonatomic, readonly) NSString *groupName;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) INImage *image;

+ (_Bool)supportsSecureCoding;
+ (id)suggestionForBundleID:(id)arg1 derivedIntentIdentifier:(id)arg2 knowledgeStore:(id)arg3 contactResolver:(id)arg4 reason:(id)arg5 reasonType:(id)arg6;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 reason:(id)arg5 reasonType:(id)arg6;
- (id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4;
- (id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 derivedIntentIdentifier:(id)arg5 image:(id)arg6 reason:(id)arg7 reasonType:(id)arg8;

@end
