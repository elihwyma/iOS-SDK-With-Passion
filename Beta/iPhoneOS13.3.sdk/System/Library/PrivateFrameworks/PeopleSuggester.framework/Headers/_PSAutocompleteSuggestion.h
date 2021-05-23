/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface _PSAutocompleteSuggestion : NSObject

{
    NSString *_chatGuid;
    NSArray *_chatHandles;
    NSString *_displayName;
    NSString *_handle;
    NSString *_contactIdentifier;
    unsigned long long _resultSourceType;
    NSArray *_recipients;
}

@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic, readonly) NSString *chatGuid;
@property (copy, nonatomic, readonly) NSArray *chatHandles;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (copy, nonatomic, readonly) NSString *handle;
@property (copy, nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic) unsigned long long resultSourceType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithChatGuid:(id)arg1 chatHandles:(id)arg2 displayName:(id)arg3 handle:(id)arg4 contactIdentifier:(id)arg5 resultSourceType:(unsigned long long)arg6 autocompleteResult:(id)arg7 recipients:(id)arg8;
- (id)initWithChatGuid:(id)arg1 displayName:(id)arg2 handle:(id)arg3 contactIdentifier:(id)arg4 resultSourceType:(unsigned long long)arg5 autocompleteResult:(id)arg6;
- (id)initWithChatGuid:(id)arg1 chatHandles:(id)arg2 displayName:(id)arg3 handle:(id)arg4 contactIdentifier:(id)arg5 resultSourceType:(unsigned long long)arg6 autocompleteResult:(id)arg7;

@end
