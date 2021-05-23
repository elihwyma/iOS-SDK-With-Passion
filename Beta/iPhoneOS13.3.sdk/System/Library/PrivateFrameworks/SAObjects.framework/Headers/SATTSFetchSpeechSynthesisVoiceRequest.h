/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString, SATTSSpeechSynthesisVoice;

@interface SATTSFetchSpeechSynthesisVoiceRequest : SABaseCommand <Swift>

@property (copy, nonatomic) NSArray *clientVoiceKeyList;
@property (retain, nonatomic) SATTSSpeechSynthesisVoice *filteredVoiceKey;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *languageCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)fetchSpeechSynthesisVoiceRequest;
+ (id)fetchSpeechSynthesisVoiceRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
