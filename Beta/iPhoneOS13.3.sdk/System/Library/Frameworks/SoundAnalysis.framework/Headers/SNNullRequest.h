/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

#import <SoundAnalysis/Swift-Protocol.h>

@class NSString, SNNullDetector;

@protocol SNAnalyzing;

@interface SNNullRequest : NSObject <Swift>

{
    SNNullDetector *_detector;
}

@property (nonatomic) double sampleRate;
@property (nonatomic) unsigned int blockSize;
@property (nonatomic) double computationalDutyCycle;
@property (nonatomic) _Bool graphIsDeadEnded;
@property (nonatomic) _Bool shouldThrowException;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) id <SNAnalyzing> analyzer;

- (id)init;

@end
