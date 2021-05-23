/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMSpeechFormatter, NSString, NSTextCheckingResult;

@interface AXMTag : NSObject

{
    NSString *_originalText;
    AXMSpeechFormatter *_speechFormatter;
    CDStruct_573f6e06 _nlToken;
    NSString *_nlType;
    NSString *_nlLexicalClass;
    NSString *_nlLanguage;
    NSString *_nlScript;
    NSString *_nlNamedEntity;
    NSString *_nlDerivedSubtoken;
    unsigned long long _datatype;
    NSTextCheckingResult *_textCheckingResult;
}

@property (nonatomic, readonly) struct _NSRange range;
@property (nonatomic, readonly) NSString *originalText;
@property (nonatomic, readonly) NSString *speakableText;
@property (nonatomic, readonly) _Bool isPunctuation;
@property (nonatomic, readonly) _Bool isWhitespace;
@property (nonatomic, readonly) _Bool isSentenceTerminator;
@property (nonatomic, readonly) _Bool isOpenQuote;
@property (nonatomic, readonly) _Bool isCloseQuote;
@property (nonatomic, readonly) _Bool isPhoneNumber;
@property (nonatomic, readonly) _Bool isDate;
@property (nonatomic, readonly) _Bool isEmailAddress;

- (id)description;
- (id)_init;
- (id)_debugType;
- (id)initWithNLToken:(CDStruct_573f6e06)arg1 text:(id)arg2 type:(id)arg3 lexicalClass:(id)arg4 language:(id)arg5 script:(id)arg6 namedEntity:(id)arg7 derivedSubtoken:(id)arg8 speechFormatter:(id)arg9;
- (id)initWithdatatype:(unsigned long long)arg1 text:(id)arg2 textCheckingResult:(id)arg3 speechFormatter:(id)arg4;

@end
