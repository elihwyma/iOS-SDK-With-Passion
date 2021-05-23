/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

#import <SoundAnalysis/Swift-Protocol.h>

@class NSString, SNSoundClassifier;

@protocol SNAnalyzing;

@interface SNClassifySoundRequest : NSObject <Swift>

{
    SNSoundClassifier *_classifier;
}

@property double overlapFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) id <SNAnalyzing> analyzer;

- (id)initWithMLModel:(id)arg1 error:(id *)arg2;

@end
