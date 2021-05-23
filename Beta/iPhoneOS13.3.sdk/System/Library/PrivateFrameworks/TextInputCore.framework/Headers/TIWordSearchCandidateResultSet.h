/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface TIWordSearchCandidateResultSet : NSObject

{
    _Bool _empty;
    NSMutableArray *_mutableCandidates;
    NSMutableDictionary *_mutableCandidateRefsDictionary;
    NSArray *_disambiguationCandidates;
    unsigned long long _selectedDisambiguationCandidateIndex;
    NSArray *_proactiveCandidates;
    NSArray *_autoconvertedCandidates;
    NSString *_autoconvertedCandidateString;
    NSString *_autoconvertedInputString;
    NSMutableArray *_mutableProactiveTriggers;
}

@property (retain, nonatomic) NSMutableArray *mutableCandidates;
@property (retain, nonatomic) NSMutableDictionary *mutableCandidateRefsDictionary;
@property (copy, nonatomic) NSArray *autoconvertedCandidates;
@property (retain, nonatomic) NSString *autoconvertedCandidateString;
@property (retain, nonatomic) NSString *autoconvertedInputString;
@property (nonatomic, readonly) NSMutableArray *mutableProactiveTriggers;
@property (nonatomic, readonly) NSArray *candidates;
@property (nonatomic, readonly) NSDictionary *candidateRefsDictionary;
@property (copy, nonatomic) NSArray *disambiguationCandidates;
@property (nonatomic) unsigned long long selectedDisambiguationCandidateIndex;
@property (nonatomic, readonly) NSArray *proactiveTriggers;
@property (retain, nonatomic) NSArray *proactiveCandidates;
@property (nonatomic, getter=isEmpty) _Bool empty;

+ (id)emptySet;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCandidates:(id)arg1 candidateRefsDictionary:(id)arg2 disambiguationCandidates:(id)arg3 selectedDisambiguationCandidateIndex:(unsigned long long)arg4;
- (id)initWithCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;
- (void)addCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(_Bool)arg3;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(_Bool)arg3 deleteCount:(unsigned long long)arg4;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(_Bool)arg3 deleteCount:(unsigned long long)arg4 cursorMovement:(long long)arg5;
- (void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(_Bool)arg3 deleteCount:(unsigned long long)arg4 cursorMovement:(long long)arg5 annotation:(id)arg6;
- (void)insertSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)addMecabraCandidate:(id)arg1 mecabraCandidateRef:(void *)arg2;
- (void)addMecabraProactiveCandidate:(void *)arg1 triggerSourceType:(unsigned char)arg2;
- (void)addMecabraFacemarkCandidate:(void *)arg1 forInput:(id)arg2;
- (void)addSyntheticMecabraProactiveCandidate:(id)arg1 triggerSourceType:(unsigned char)arg2;
- (void)insertMecabraCandidate:(id)arg1 mecabraCandidateRef:(void *)arg2 atIndex:(unsigned long long)arg3;
- (void)setAutoconvertedMecabraCandidates:(id)arg1 candidateRefsDictionary:(id)arg2;
- (void)moveCandidate:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)clearProactiveTriggers;

@end
