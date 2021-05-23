/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface VCVoiceShortcutPhraseValidationResult : NSObject

{
    NSString *_phrase;
    long long _validationState;
    NSError *_validationError;
}

@property (copy, nonatomic, readonly) NSString *phrase;
@property (nonatomic) long long validationState;
@property (retain, nonatomic) NSError *validationError;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhrase:(id)arg1 validationState:(long long)arg2 validationError:(id)arg3;

@end
