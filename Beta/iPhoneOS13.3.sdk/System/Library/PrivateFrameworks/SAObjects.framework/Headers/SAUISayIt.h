/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString, SAUIAudioData;

@protocol SAAceSerializable;

@interface SAUISayIt : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIAudioData *audioData;
@property (copy, nonatomic) NSString *audioDataUrl;
@property (nonatomic) _Bool canUseServerTTS;
@property (retain, nonatomic) id <SAAceSerializable> context;
@property (copy, nonatomic) NSString *dialogIdentifier;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSNumber *listenAfterSpeaking;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) _Bool repeatable;

+ (id)sayIt;
+ (id)sayItWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
