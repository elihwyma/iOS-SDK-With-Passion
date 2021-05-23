/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SACFMParseMessageForEmojiRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *messageText;

+ (id)parseMessageForEmojiRequest;
+ (id)parseMessageForEmojiRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
