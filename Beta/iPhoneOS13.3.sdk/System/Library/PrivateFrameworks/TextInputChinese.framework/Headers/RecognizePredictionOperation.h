/*
 Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

#import <Foundation/NSOperation.h>

@class CHRecognizer, NSArray, NSDictionary, NSString, TIInputManagerHandwriting;

@interface RecognizePredictionOperation : NSOperation

{
    TIInputManagerHandwriting *_inputManager;
    CHRecognizer *_recognizer;
    NSArray *_committedCandidates;
    unsigned long long _predictionOptions;
    NSString *_prefixContext;
    NSArray *_candidates;
    NSArray *_proactiveTriggers;
    NSDictionary *_candidateRefsDictionary;
}

@property (nonatomic, readonly) TIInputManagerHandwriting *inputManager;
@property (nonatomic, readonly) CHRecognizer *recognizer;
@property (copy, nonatomic, readonly) NSArray *committedCandidates;
@property (nonatomic, readonly) unsigned long long predictionOptions;
@property (nonatomic, readonly) NSString *prefixContext;
@property (nonatomic, readonly) NSArray *candidates;
@property (nonatomic, readonly) NSArray *proactiveTriggers;
@property (nonatomic, readonly) NSDictionary *candidateRefsDictionary;

- (void)main;
- (id)initWithInputManager:(id)arg1 predictionOptions:(unsigned long long)arg2 prefixContext:(id)arg3;

@end
