/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface SATTSStartSpeechSynthesisRequest : SABaseCommand <Swift>

@property (copy, nonatomic) NSString *audioType;
@property (nonatomic) _Bool enableAudioInfo;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *quality;
@property (copy, nonatomic) NSDictionary *speakableContextInfo;
@property (nonatomic) _Bool streaming;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *voiceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)startSpeechSynthesisRequest;
+ (id)startSpeechSynthesisRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
