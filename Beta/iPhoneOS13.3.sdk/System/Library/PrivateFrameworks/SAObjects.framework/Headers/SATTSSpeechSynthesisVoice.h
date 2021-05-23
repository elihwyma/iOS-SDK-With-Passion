/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString;

@interface SATTSSpeechSynthesisVoice : AceObject <Swift>

@property (copy, nonatomic) NSString *contentVersion;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *keyString;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *quality;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) _Bool useServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)speechSynthesisVoice;
+ (id)speechSynthesisVoiceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
