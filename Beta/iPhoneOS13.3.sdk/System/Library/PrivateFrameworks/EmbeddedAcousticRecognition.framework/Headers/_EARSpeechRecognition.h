/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSArray;

@interface _EARSpeechRecognition : NSObject

{
    NSArray *_tokenSausage;
    NSArray *_interpretationIndices;
}

@property (copy, nonatomic, readonly) NSArray *tokenSausage;
@property (copy, nonatomic, readonly) NSArray *interpretationIndices;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithTokenPhraseChoiceList:(const pair_a60b4d2a *)arg1;
- (id)_initWithTokenSausage:(id)arg1 interpretationIndices:(id)arg2;
- (pair_a60b4d2a)_tokenPhraseChoiceList;
- (id)_initWithNBestList:(const vector_2c247c42 *)arg1 useHatText:(_Bool)arg2;
- (id)nBest;
- (id)oneBest;
- (id)granularizedRecognition;

@end
