/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PRErrorModeling;

@interface PRErrorModel : NSObject

{
    id <PRErrorModeling> _customErrorModel;
}

@property (readonly) _Bool hasCustomReplacementErrorScores;
@property (readonly) _Bool hasCustomTranspositionErrorScores;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (double)replacementErrorScoreForIntendedCharacter:(unsigned short)arg1 actualCharacter:(unsigned short)arg2;
- (double)transpositionErrorScoreForIntendedFirstCharacter:(unsigned short)arg1 intendedSecondCharacter:(unsigned short)arg2;
- (double)errorScoreForType:(unsigned long long)arg1;
- (id)initWithCustomErrorModel:(id)arg1;

@end
