/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class NSCharacterSet;

@protocol OS_dispatch_queue;

@interface CHCharacterSetRules : NSObject

{
    NSCharacterSet *_lowercaseCharSet;
    NSCharacterSet *_uppercaseCharSet;
    NSCharacterSet *_digitCharSet;
    NSCharacterSet *_startPunctuationCharSet;
    NSCharacterSet *_middlePunctuationCharSet;
    NSCharacterSet *_endOfWordPunctuationCharSet;
    NSCharacterSet *_endOfSentencePunctuationCharSet;
    NSCharacterSet *_digitStartPunctuationCharSet;
    NSCharacterSet *_digitEndPunctuationCharSet;
    NSCharacterSet *_arithmeticOperatorCharSet;
    NSCharacterSet *_dateTimeSeparatorCharSet;
    NSCharacterSet *_dateTimeEndLetterCharSet;
    NSCharacterSet *_numeralEndLetterCharSet;
    NSCharacterSet *_lexiconSkipCharSet;
    NSCharacterSet *_containsDotCharSet;
    NSCharacterSet *_containsTwoDotsCharSet;
    NSCharacterSet *_prefixCapitalizationExceptionCharSet;
    NSCharacterSet *_selfLoopPunctuationCharSet;
    NSCharacterSet *_emoticonTopCharSet;
    NSCharacterSet *_emoticonMiddleCharSet;
    NSCharacterSet *_emoticonBottomCharSet;
    NSCharacterSet *_emailAtCharSet;
    NSCharacterSet *_emailPunctuationCharSet;
    NSCharacterSet *_urlPunctuationCharSet;
    NSCharacterSet *_nonSpaceSeparatorCharSet;
    NSObject<OS_dispatch_queue> *__charSetRulesQueue;
    map_0512c6b1 _strokeMaxPenalties;
    map_fc1db4e5 _signatureUniChar;
}

@property (retain, nonatomic) NSCharacterSet *lowercaseCharSet;
@property (retain, nonatomic) NSCharacterSet *uppercaseCharSet;
@property (retain, nonatomic) NSCharacterSet *digitCharSet;
@property (retain, nonatomic) NSCharacterSet *startPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *middlePunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *endOfWordPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *endOfSentencePunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *digitStartPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *digitEndPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *arithmeticOperatorCharSet;
@property (retain, nonatomic) NSCharacterSet *dateTimeSeparatorCharSet;
@property (retain, nonatomic) NSCharacterSet *dateTimeEndLetterCharSet;
@property (retain, nonatomic) NSCharacterSet *numeralEndLetterCharSet;
@property (retain, nonatomic) NSCharacterSet *lexiconSkipCharSet;
@property (retain, nonatomic) NSCharacterSet *containsDotCharSet;
@property (retain, nonatomic) NSCharacterSet *containsTwoDotsCharSet;
@property (retain, nonatomic) NSCharacterSet *prefixCapitalizationExceptionCharSet;
@property (retain, nonatomic) NSCharacterSet *selfLoopPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *emoticonTopCharSet;
@property (retain, nonatomic) NSCharacterSet *emoticonMiddleCharSet;
@property (retain, nonatomic) NSCharacterSet *emoticonBottomCharSet;
@property (retain, nonatomic) NSCharacterSet *emailAtCharSet;
@property (retain, nonatomic) NSCharacterSet *emailPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *urlPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *nonSpaceSeparatorCharSet;
@property (nonatomic) map_0512c6b1 strokeMaxPenalties;
@property (nonatomic) map_fc1db4e5 signatureUniChar;
@property (retain, nonatomic, readonly) NSObject<OS_dispatch_queue> *_charSetRulesQueue;

+ (unsigned long long)expectedMinStrokeCount:(unsigned int)arg1;
+ (unsigned long long)characterType:(unsigned int)arg1;
+ (unsigned long long)expectedMaxDotCount:(unsigned int)arg1;
+ (unsigned long long)characterTypeFromString:(id)arg1;
+ (unsigned long long)expectedMaxStrokeCount:(unsigned int)arg1;
+ (id)sharedCharacterSetRules;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (unsigned long long)_expectedMaxStrokeCount:(unsigned int)arg1;
- (unsigned long long)_expectedMinStrokeCount:(unsigned int)arg1;
- (unsigned long long)_expectedMaxDotCount:(unsigned int)arg1;
- (unsigned long long)_characterType:(unsigned int)arg1;

@end
