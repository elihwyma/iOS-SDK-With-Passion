/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, NSUUID;

@interface TTSSubstitution : NSObject

{
    _Bool _active;
    _Bool _ignoreCase;
    _Bool _appliesToAllApps;
    _Bool _isReplacementTextAllPunctuation;
    _Bool _isReplacementTextSurroundedByPunctuation;
    _Bool _isUserSubstitution;
    NSString *_originalString;
    NSString *_replacementString;
    NSString *_phonemes;
    NSSet *_languages;
    NSSet *_voiceIds;
    NSUUID *_uuid;
    NSSet *_bundleIdentifiers;
    struct _NSRange _replacementRange;
}

@property (retain, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *originalString;
@property (copy, nonatomic) NSString *replacementString;
@property (copy, nonatomic) NSString *phonemes;
@property (copy, nonatomic) NSSet *languages;
@property (copy, nonatomic) NSSet *voiceIds;
@property (nonatomic) _Bool active;
@property (nonatomic) _Bool ignoreCase;
@property (nonatomic) struct _NSRange replacementRange;
@property (nonatomic) _Bool appliesToAllApps;
@property (copy, nonatomic) NSSet *bundleIdentifiers;
@property (nonatomic, readonly) _Bool isReplacementTextAllPunctuation;
@property (nonatomic, readonly) _Bool isReplacementTextSurroundedByPunctuation;
@property (nonatomic) _Bool isUserSubstitution;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
