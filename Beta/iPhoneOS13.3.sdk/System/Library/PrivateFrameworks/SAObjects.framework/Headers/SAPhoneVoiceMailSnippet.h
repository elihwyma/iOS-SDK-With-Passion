/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSNumber;

@protocol SAClientBoundCommand;

@interface SAPhoneVoiceMailSnippet : SAUISnippet

@property (copy, nonatomic) NSNumber *autoPlay;
@property (copy, nonatomic) NSArray *calls;
@property (copy, nonatomic) NSArray *playVoiceMailCommands;
@property (retain, nonatomic) id <SAClientBoundCommand> postPlayCommand;

+ (id)voiceMailSnippet;
+ (id)voiceMailSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
