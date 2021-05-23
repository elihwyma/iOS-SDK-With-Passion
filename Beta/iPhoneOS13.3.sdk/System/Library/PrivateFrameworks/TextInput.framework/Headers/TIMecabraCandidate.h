/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TIKeyboardCandidate.h>

@class NSNumber, NSString;

@interface TIMecabraCandidate : TIKeyboardCandidate

{
    _Bool _emojiCandidate;
    _Bool _extensionCandidate;
    _Bool _isForShortcutConversion;
    _Bool _isAutocorrection;
    _Bool _OTAWordListCandidate;
    _Bool _regionalCandidate;
    _Bool _responseKitCandidate;
    _Bool _continuousPathConversion;
    NSString *_candidate;
    NSString *_input;
    NSNumber *_mecabraCandidatePointerValue;
    unsigned long long _deleteCount;
    long long _cursorMovement;
    NSString *_responseKitCategory;
}

@property (retain, nonatomic) NSNumber *mecabraCandidatePointerValue;
@property (nonatomic, getter=isContinuousPathConversion) _Bool continuousPathConversion;

+ (int)type;
+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)input;
- (id)label;
- (id)candidate;
- (_Bool)isForShortcutConversion;
- (long long)cursorMovement;
- (_Bool)isEmojiCandidate;
- (_Bool)isExtensionCandidate;
- (_Bool)isOTAWordListCandidate;
- (_Bool)isRegionalCandidate;
- (_Bool)isFullwidthCandidate;
- (unsigned long long)deleteCount;
- (_Bool)isResponseKitCandidate;
- (id)responseKitCategory;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (_Bool)isAutocorrection;
- (id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3;
- (id)initWithResponseKitString:(id)arg1 responseKitCategory:(id)arg2 mecabraCandidatePointerValue:(id)arg3;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(int)arg4;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(int)arg4 deleteCount:(unsigned long long)arg5 cursorMovement:(long long)arg6;

@end
