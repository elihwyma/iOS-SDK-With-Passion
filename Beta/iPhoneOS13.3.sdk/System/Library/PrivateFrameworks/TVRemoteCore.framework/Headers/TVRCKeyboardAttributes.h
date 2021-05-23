/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSString, RTIDataPayload, TVRCPINEntryAttributes;

@interface TVRCKeyboardAttributes : NSObject

{
    _Bool _likelyPINEntry;
    _Bool _secure;
    _Bool _enablesReturnKeyAutomatically;
    NSString *_title;
    TVRCPINEntryAttributes *_PINEntryAttributes;
    NSString *_prompt;
    RTIDataPayload *_rtiDataPayload;
    long long _keyboardType;
    long long _returnKeyType;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _spellCheckingType;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *prompt;
@property (retain, nonatomic) TVRCPINEntryAttributes *PINEntryAttributes;
@property (retain, nonatomic) RTIDataPayload *rtiDataPayload;
@property (nonatomic, getter=_isLikelyPINEntry, setter=_setLikelyPINEntry:) _Bool likelyPINEntry;
@property (nonatomic, getter=_isSecure, setter=_setSecure:) _Bool secure;
@property (nonatomic, getter=_enablesReturnKeyAutomatically, setter=_setEnablesReturnKeyAutomatically:) _Bool enablesReturnKeyAutomatically;
@property (nonatomic, getter=_keyboardType, setter=_setKeyboardType:) long long keyboardType;
@property (nonatomic, getter=_returnKeyType, setter=_setReturnKeyType:) long long returnKeyType;
@property (nonatomic, getter=_autocapitalizationType, setter=_setAutocapitalizationType:) long long autocapitalizationType;
@property (nonatomic, getter=_autocorrectionType, setter=_setAutocorrectionType:) long long autocorrectionType;
@property (nonatomic, getter=_spellCheckingType, setter=_setSpellCheckingType:) long long spellCheckingType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (void)applyToTextField:(id)arg1;
- (_Bool)isEqualToAttributes:(id)arg1;

@end
