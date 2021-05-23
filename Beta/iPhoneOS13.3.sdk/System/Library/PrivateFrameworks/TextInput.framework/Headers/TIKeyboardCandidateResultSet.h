/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, TIKeyboardCandidate, TIKeyboardIntermediateText;

@interface TIKeyboardCandidateResultSet : NSObject

{
    _Bool _excludedExtensionCandidates;
    _Bool _inputManagerHasPendingCandidatesUpdate;
    NSArray *_candidates;
    unsigned long long _initialSelectedIndex;
    TIKeyboardCandidate *_defaultCandidate;
    NSArray *_sortMethods;
    NSDictionary *_sortMethodGroups;
    NSDictionary *_indexTitles;
    NSDictionary *_showExtensionCandidates;
    NSArray *_disambiguationCandidates;
    unsigned long long _generatedCandidateCount;
    unsigned long long _batchCandidateLocation;
    unsigned long long _selectedDisambiguationCandidateIndex;
    NSArray *_proactiveTriggers;
    NSString *_committedText;
    TIKeyboardIntermediateText *_uncommittedText;
    TIKeyboardCandidate *_acceptedCandidate;
}

@property (retain, nonatomic) NSArray *initiallyHiddenCandidates;
@property (nonatomic) unsigned long long selectedHiddenCandidateIndex;
@property (retain, nonatomic) NSArray *candidates;
@property (nonatomic) unsigned long long initialSelectedIndex;
@property (copy, nonatomic) TIKeyboardCandidate *defaultCandidate;
@property (retain, nonatomic) NSArray *sortMethods;
@property (retain, nonatomic) NSDictionary *sortMethodGroups;
@property (retain, nonatomic) NSDictionary *indexTitles;
@property (retain, nonatomic) NSDictionary *showExtensionCandidates;
@property (retain, nonatomic) NSArray *disambiguationCandidates;
@property (nonatomic) unsigned long long selectedDisambiguationCandidateIndex;
@property (nonatomic, readonly) _Bool hasCandidates;
@property (nonatomic, readonly) _Bool hasOnlyProactiveCandidates;
@property (nonatomic, readonly) NSArray *proactiveTriggers;
@property (nonatomic, readonly) TIKeyboardCandidate *firstCandidate;
@property (nonatomic, readonly) _Bool hasMetadata;
@property (nonatomic) _Bool excludedExtensionCandidates;
@property (nonatomic) unsigned long long generatedCandidateCount;
@property (nonatomic) unsigned long long batchCandidateLocation;
@property (nonatomic, readonly) _Bool isDummySet;
@property (retain, nonatomic) NSString *committedText;
@property (retain, nonatomic) TIKeyboardIntermediateText *uncommittedText;
@property (retain, nonatomic) TIKeyboardCandidate *acceptedCandidate;
@property (nonatomic) _Bool inputManagerHasPendingCandidatesUpdate;

+ (_Bool)supportsSecureCoding;
+ (id)setWithCandidates:(id)arg1;
+ (id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 disambiguationCandidates:(id)arg8 selectedDisambiguationCandidateIndex:(unsigned long long)arg9;
+ (id)setWithCandidates:(id)arg1 proactiveTriggers:(id)arg2;
+ (id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 disambiguationCandidates:(id)arg8 selectedDisambiguationCandidateIndex:(unsigned long long)arg9 proactiveTriggers:(id)arg10;
+ (id)dummySet;
+ (id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned long long)arg9;
+ (id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned long long)arg9 proactiveTriggers:(id)arg10;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)setByAppendingSet:(id)arg1;
- (unsigned long long)positionInCandidateList:(id)arg1;
- (id)initWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 disambiguationCandidates:(id)arg8 selectedDisambiguationCandidateIndex:(unsigned long long)arg9 proactiveTriggers:(id)arg10;
- (_Bool)isSubsetOf:(id)arg1;

@end
