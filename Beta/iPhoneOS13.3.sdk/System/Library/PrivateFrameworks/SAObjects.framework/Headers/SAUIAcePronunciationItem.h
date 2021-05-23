/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SAUIAcePronunciationItem : AceObject <Swift>

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *tts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)acePronunciationItem;
+ (id)acePronunciationItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
