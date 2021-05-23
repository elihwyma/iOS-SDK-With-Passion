/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSString, TIProactiveTrigger;

@interface TIKeyboardCandidate : NSObject

{
    _Bool _responseKitCandidate;
    _Bool _isSendCurrentLocation;
    unsigned int _slotID;
    int _confidence;
    NSString *_alternativeText;
    NSString *_annotationText;
    unsigned long long _customInfoType;
    unsigned long long _indexForMetrics;
    NSString *_responseKitCategory;
}

@property (nonatomic, readonly) NSString *candidate;
@property (nonatomic, readonly) NSString *input;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *alternativeText;
@property (copy, nonatomic) NSString *annotationText;
@property (nonatomic, readonly) unsigned long long wordOriginFeedbackID;
@property (nonatomic, readonly) unsigned long long deleteCount;
@property (nonatomic, readonly) long long cursorMovement;
@property (nonatomic, readonly) _Bool isForShortcutConversion;
@property (nonatomic, readonly) _Bool isAutocorrection;
@property (nonatomic, readonly, getter=isContinuousPathConversion) _Bool continuousPathConversion;
@property (nonatomic, readonly) _Bool shouldAccept;
@property (nonatomic, readonly) _Bool shouldInsertSpaceAfterSelection;
@property (nonatomic) unsigned int slotID;
@property (nonatomic) unsigned long long customInfoType;
@property (nonatomic) _Bool isSendCurrentLocation;
@property (nonatomic, readonly, getter=isExtensionCandidate) _Bool extensionCandidate;
@property (nonatomic, readonly, getter=isEmojiCandidate) _Bool emojiCandidate;
@property (nonatomic, readonly, getter=isCompletionCandidate) _Bool completionCandidate;
@property (nonatomic, readonly, getter=isInlineCompletionCandidate) _Bool inlineCompletionCandidate;
@property (nonatomic, readonly, getter=isFullwidthCandidate) _Bool fullwidthCandidate;
@property (nonatomic, readonly, getter=isFacemarkCandidate) _Bool facemarkCandidate;
@property (nonatomic, readonly, getter=isPunctuationCompletionCandidate) _Bool punctuationCompletionCandidate;
@property (nonatomic, readonly, getter=isPunctuationKeyCandidate) _Bool punctuationKeyCandidate;
@property (nonatomic, readonly, getter=isOTAWordListCandidate) _Bool OTAWordListCandidate;
@property (nonatomic, readonly, getter=isRegionalCandidate) _Bool regionalCandidate;
@property (nonatomic, readonly, getter=isResponseKitCandidate) _Bool responseKitCandidate;
@property (copy, nonatomic, readonly) NSString *responseKitCategory;
@property (nonatomic, readonly, getter=isSecureContentCandidate) _Bool secureContentCandidate;
@property (nonatomic, readonly) TIProactiveTrigger *proactiveTrigger;
@property (nonatomic) unsigned long long indexForMetrics;
@property (nonatomic, readonly) _Bool isAddress;
@property (nonatomic, readonly) unsigned int usageTrackingMask;
@property (nonatomic, readonly, getter=confidence) int confidence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (int)type;
+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)candidateByReplacingWithCandidate:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (_Bool)isPunctuation;
- (id)candidateByReplacingWithCandidate:(id)arg1 input:(id)arg2;

@end
