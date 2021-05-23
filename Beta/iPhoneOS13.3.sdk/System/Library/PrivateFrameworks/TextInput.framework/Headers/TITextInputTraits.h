/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TITextInputTraits : NSObject

{
    union {
        long long integerValue;
        struct {
            unsigned int autocapitalizationType:2;
            unsigned int autocorrectionType:2;
            unsigned int spellCheckingType:2;
            unsigned int keyboardType:4;
            unsigned int keyboardAppearance:2;
            unsigned int returnKeyType:4;
            unsigned int textScriptType:4;
            unsigned int enablesReturnKeyAutomatically:1;
            unsigned int secureTextEntry:1;
            unsigned int smartInsertDeleteEnabled:1;
            unsigned int smartQuotesEnabled:1;
            unsigned int smartDashesEnabled:1;
            unsigned int disablePrediction:1;
            unsigned int smartInsertDeleteType:2;
            unsigned int smartQuotesType:2;
            unsigned int smartDashesType:2;
        } fields;
    } _mask;
    NSString *_textContentType;
    NSString *_recentInputIdentifier;
}

@property (nonatomic) unsigned long long autocapitalizationType;
@property (nonatomic) unsigned long long autocorrectionType;
@property (nonatomic) unsigned long long spellCheckingType;
@property (nonatomic) unsigned long long keyboardType;
@property (nonatomic) unsigned long long keyboardAppearance;
@property (nonatomic) unsigned long long returnKeyType;
@property (nonatomic) _Bool enablesReturnKeyAutomatically;
@property (nonatomic) _Bool secureTextEntry;
@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (copy, nonatomic) NSString *textContentType;
@property (nonatomic) unsigned long long textScriptType;
@property (nonatomic) _Bool smartInsertDeleteEnabled;
@property (nonatomic) _Bool smartQuotesEnabled;
@property (nonatomic) _Bool smartDashesEnabled;
@property (nonatomic) unsigned long long smartInsertDeleteType;
@property (nonatomic) unsigned long long smartQuotesType;
@property (nonatomic) unsigned long long smartDashesType;
@property (nonatomic) _Bool disablePrediction;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
