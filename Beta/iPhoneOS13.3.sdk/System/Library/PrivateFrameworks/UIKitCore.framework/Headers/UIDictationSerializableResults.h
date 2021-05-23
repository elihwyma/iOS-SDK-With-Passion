/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSIndexPath;

__attribute__((visibility("hidden")))
@interface UIDictationSerializableResults : NSObject <Swift>

{
    _Bool _fromKeyboard;
    _Bool _showMultilingualAlternatives;
    _Bool _lowConfidenceAboutLanguageDetection;
    _Bool _useServerCapitalization;
    _Bool _addTrailingSpace;
    _Bool _allowsAlternatives;
    NSArray *_phrases;
    NSArray *_multilingualAlternatives;
    const struct __CFString *_transform;
    NSIndexPath *_indexPathOfInterpretations;
}

@property (copy, nonatomic) NSArray *phrases;
@property (copy, nonatomic) NSArray *multilingualAlternatives;
@property (nonatomic) _Bool fromKeyboard;
@property (nonatomic) _Bool showMultilingualAlternatives;
@property (nonatomic) _Bool lowConfidenceAboutLanguageDetection;
@property (nonatomic) const struct __CFString *transform;
@property (nonatomic) _Bool useServerCapitalization;
@property (nonatomic) _Bool addTrailingSpace;
@property (retain, nonatomic) NSIndexPath *indexPathOfInterpretations;
@property (nonatomic, readonly) _Bool allowsAlternatives;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)text;
- (id)initWithPhrases:(id)arg1;
- (id)initWithDetectedPhrases:(id)arg1 multilingualAlternatives:(id)arg2;
- (id)textArray;
- (id)initWithArrayOfArrayOfStrings:(id)arg1;
- (id)bestText;
- (id)bestTextForMultilingualAlternatives;
- (id)bestResults;
- (id)dictationPhraseArray;
- (id)multilingualResultsByLanguageCode;
- (id)bestTextArray;
- (id)secondBestTextArray;
- (id)bestTextArrayForAlternatives:(id)arg1;
- (id)textArrayForAlternatives:(id)arg1;
- (id)secondBestText;
- (id)singleLineResult;

@end
