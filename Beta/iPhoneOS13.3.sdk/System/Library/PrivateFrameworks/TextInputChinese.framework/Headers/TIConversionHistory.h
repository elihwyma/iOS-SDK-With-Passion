/*
 Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableString, NSString, TIConvertedCandidate;

@interface TIConversionHistory : NSObject

{
    _Bool _inputChangedSinceLastConversion;
    _Bool _invalid;
    NSMutableArray *_convertedCandidates;
    NSMutableArray *_mutableConvertedCandidateRefs;
    NSMutableString *_mutableConvertedCandidateText;
    unsigned long long _revertCount;
}

@property (nonatomic) _Bool invalid;
@property (retain, nonatomic) NSMutableArray *convertedCandidates;
@property (retain, nonatomic) NSMutableArray *mutableConvertedCandidateRefs;
@property (retain, nonatomic) NSMutableString *mutableConvertedCandidateText;
@property (nonatomic) unsigned long long revertCount;
@property (nonatomic) _Bool inputChangedSinceLastConversion;
@property (nonatomic, readonly) NSString *convertedCandidateText;
@property (nonatomic, readonly) unsigned long long convertedLength;
@property (nonatomic, readonly) TIConvertedCandidate *lastConvertedCandidate;

- (id)init;
- (void)invalidate;
- (void)clear;
- (_Bool)isValid;
- (void)addCandidate:(id)arg1 candidateRef:(id)arg2 replacedAmbiguousPinyinSyllable:(id)arg3 replacementUnambiguousPinyinSyllable:(id)arg4 convertedInput:(id)arg5;
- (void)didRevertLastConvertedCandidate;
- (_Bool)shouldRevertConvertedCandidateOnDeletionFromMarkedText:(id)arg1;

@end
