/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CHTokenizedTextResult : NSObject

{
    NSArray *_tokenColumns;
    NSArray *_transcriptionPaths;
    NSArray *_transcriptionPathScores;
}

@property (nonatomic, readonly) long long tokenColumnCount;
@property (copy, nonatomic, readonly) NSArray *transcriptionPaths;
@property (copy, nonatomic, readonly) NSArray *transcriptionPathScores;
@property (copy, nonatomic, readonly) NSString *topTranscription;

+ (_Bool)supportsSecureCoding;
+ (pair_b2618ff2)_scoreMeanAndStdForToken:(id)arg1 forLocale:(id)arg2;
+ (long long)_characterCountInToken:(id)arg1 filteringCharacterSet:(id)arg2 filteredCharacterCount:(long long *)arg3;
+ (id)tokenizedTextResultWithString:(id)arg1 strokeIndexes:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)transcriptionWithPath:(id)arg1 columnRange:(struct _NSRange)arg2 filterLowConfidence:(_Bool)arg3 excludeGibberish:(_Bool)arg4 rejectionRate:(double *)arg5 tokenProcessingBlock:(CDUnknownBlockType)arg6;
- (id)initWithTokenColumns:(id)arg1 transcriptionPaths:(id)arg2 scores:(id)arg3;
- (id)tokenColumns;
- (id)tokensInTranscriptionPath:(id)arg1 atColumnIndex:(long long)arg2;
- (void)enumerateTokensInTranscriptionPath:(id)arg1 columnRange:(struct _NSRange)arg2 tokenProcessingBlock:(CDUnknownBlockType)arg3;
- (id)legacyTextRecognitionResults;
- (id)transcriptionWithPath:(id)arg1 columnRange:(struct _NSRange)arg2 filterLowConfidence:(_Bool)arg3;
- (id)tokenRowsAtColumnIndex:(long long)arg1;
- (id)tokenAtLocation:(CDStruct_2ec95fd7)arg1;
- (id)precedingSeparatorForToken:(id)arg1;
- (_Bool)_shouldFilterOutStringForToken:(id)arg1 isGibberish:(_Bool *)arg2;
- (_Bool)_isGibberishToken:(id)arg1;
- (double)languageFitnessForTranscriptionPath:(id)arg1 locale:(id)arg2 recognitionMode:(int)arg3;
- (long long)_tokenCountInTranscriptionPath:(id)arg1 columnRange:(struct _NSRange)arg2;
- (double)_normalizedLanguageFitness:(double)arg1;
- (id)_legacyTextRecognitionResultForTranscriptionIndex:(long long)arg1;
- (_Bool)isEqualToTokenizedTextResult:(id)arg1;
- (id)precedingSeparatorForTopTranscriptionPath;
- (id)strokeIndexesForColumnsInRange:(struct _NSRange)arg1;
- (double)languageFitnessForLocale:(id)arg1 recognitionMode:(int)arg2;

@end
