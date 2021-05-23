/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASStartSpeech.h>

@class NSArray, NSData, NSString;

@interface SASStartSpeechDictation : SASStartSpeech

@property (copy, nonatomic) NSData *activationToken;
@property (copy, nonatomic) NSString *applicationName;
@property (copy, nonatomic) NSString *applicationVersion;
@property (nonatomic) _Bool censorSpeech;
@property (copy, nonatomic) NSString *fieldId;
@property (copy, nonatomic) NSString *fieldLabel;
@property (copy, nonatomic) NSArray *inlineItemList;
@property (copy, nonatomic) NSString *interactionId;
@property (copy, nonatomic) NSString *keyboardIdentifier;
@property (copy, nonatomic) NSString *keyboardReturnKey;
@property (copy, nonatomic) NSString *keyboardType;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSArray *languages;
@property (copy, nonatomic) NSString *postfixText;
@property (copy, nonatomic) NSString *prefixText;
@property (copy, nonatomic) NSString *region;
@property (nonatomic) _Bool saveRequestAudio;
@property (copy, nonatomic) NSString *selectedText;
@property (nonatomic) _Bool speakerIndependentRecognition;

+ (id)startSpeechDictation;
+ (id)startSpeechDictationWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
